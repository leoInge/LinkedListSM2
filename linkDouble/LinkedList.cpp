#include "LinkedList.h"

template<class T>
std::vector<T> LinkedList<T>::getLinkedList(bool sw) {
    std::vector<T> vecOut;
    Node<T>* aux = sw ? head : last;
    while( aux != NULL ){
        vecOut.push_back( aux->info );
        aux = sw ? aux->next : aux->previous;
    }

    return vecOut;
}

template<class T>
void LinkedList<T>::addLast(T info) {
    if( isEmpty()){
        head = last = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>(info);

        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }
}

template<class T>
Node<T> *LinkedList<T>::findNode(const std::string & Idgraphics) {
    Node<T> *aux = head;
    while (aux!=NULL){
        if (aux->info.getIdgraphics().compare(Idgraphics)) {

            return aux;
        } else {
            aux = aux->next;
        }
    }
    return NULL;
}

template<class T>
void LinkedList<T>::addNodeAfterTo(Node<T> *node, T info) {
    Node<T> *nodeNew= new Node<T>(info);
    Node<T> *aux = head;
    while (aux != node){
        aux = aux->next;
    }
    nodeNew->next = aux->next;
    aux->next = nodeNew;
}

template<class T>
void LinkedList<T>::addNodeBeforeTo(Node<T> *node, T info) {
    Node<T> *nodeNew= new Node<T>(info);//Crea un nuevo nodo
    if (node==head){//Pregunta si el nodo entrante es el primer nodo de la lista
        nodeNew->next=head;
        head  = nodeNew;//nodeNew se establece como nuevo nodo inicial, y next apunta al que era el antiguo nodo inicial
    }else{
        Node<T> *aux = head;
        while(aux->next != node){//busca el nodo anterior al nodo entrante
            aux = aux->next;
        }
        nodeNew->next = aux->next;
        aux->next = nodeNew;
    }
}


template<class T>
void LinkedList<T>::addFirst(T info) {
    if( isEmpty()){
        head = last = new Node<T>( info );
    }else{
        Node<T>* newNode = new Node<T>(info);

        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL && last == NULL;
}

template<class T>
LinkedList<T>::LinkedList() {
    head = last = NULL;
}


template<class T>
T LinkedList<T>::deleteNode(Node<T> *node) {
    T nodeOut = node->info;
    if (node==head){
        head = head->next;
    }else{
        Node<T>* aux = head;
        while (aux->next!=node){
            aux = aux->next;
        }
        aux->next = node->next;
    }
    delete(node);
    return nodeOut;

}








template<class T>
void LinkedList<T>::addSorted(T info) {
    if( isEmpty() ){
        head = last = new Node<T>(info);
    }else if( info.getIdvideogame().compare(head->info.getIdvideogame()) < 0 ){
        addFirst( info );
    }else if( info.getIdvideogame().compare(last->info.getIdvideogame()) > 0){
        addLast( info );
    }else{
        Node<T>* act = head;
        Node<T>* ant = NULL;
        while( act->info.getIdvideogame().compare(info.getIdvideogame()) < 0 ){
            ant = act;
            act = act->next;
        }
        Node<T>* newNode = new Node<T>(info);
        ant->next = newNode;
        newNode->previous = ant;
        newNode->next = act;
        act->previous = newNode;
    }







}

