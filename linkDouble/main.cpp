#include <iostream>

#include "LinkedList.cpp"
#include "Videogame.h"
#include "vector"
#include "GraphicCard.h"
using namespace std;
LinkedList<Videogame> *listavideojuegos = new LinkedList<Videogame>();
LinkedList<GraphicCard> *listatarjetas = new LinkedList<GraphicCard>();


void AgregarInicio();

void buscarVideojuego() {
}

void agregarGraphicCard(){
    string Idgraphics= "";
    string chip= "";
    string model= "";
    int price = 0;

    cout << "ingrese el id ";
    cin >> Idgraphics;

    cout << "ingrese el nombre ";
    cin >> chip;

    cout << "ingresa la categoria ";
    cin >> model;

    cout << "ingresa el precio ";
    cin >> price;

    int opc2 = 0;
    std::cout << "En que parte desea agregar el nuevo elemento?" << std::endl;
    std::cout << "1. Principio" << std::endl;
    std::cout << "2. Final" << std::endl;
    std::cout << "3. Antes de..." << std::endl;
    std::cout << "4. Despues de..." << std::endl;
    std::cin >> opc2;
    switch (opc2) {
        case 1:

            listatarjetas->addFirst(GraphicCard(Idgraphics,chip,model,price));
            break;
        case 2:
            listatarjetas->addLast(GraphicCard(Idgraphics,chip,model,price));
            break;
        case 3:

            cout << "digite el id de LA TARJETA";
            cin >> Idgraphics;
            listavideojuegos->addFirst(Videogame("3", "Doom", "accion", 25000));
            listatarjetas->addNodeBeforeTo(listatarjetas->findNode(Idgraphics), GraphicCard(Idgraphics,chip,model,price));



            break;
        case 4:

            cout << "digite el id del videojuego";
            cin >> Idgraphics;

            listavideojuegos->addFirst(Videogame("5", "san andreas", "accion", 25000));

            listatarjetas->addNodeAfterTo(listatarjetas->findNode(Idgraphics), GraphicCard(Idgraphics,chip,model,price));

            //poner metodo after to
            break;
        default:
            cout<< "Ingrese una opcion valida";

    }

}


int main() {

    string Idgraphics = "";
    int opcion;

    opcion = 0;
    do {
        // Mostrar el menú
        std::cout << "MENU" << std::endl;
        std::cout << "1. Agregar tarjeta grafica" << std::endl;
        std::cout << "2. buscar tarjeta grafica" << std::endl;
        std::cout << "3. Eliminar tarjeta grafica" << std::endl;
        std::cout << "4. Mostrar lista completa de tarjeta grafica" << std::endl;
        std::cout << "6. salir" << std::endl;
        std::cout << "Elija una opción (1-6): ";
        std::cin >> opcion;


        switch (opcion) {
            case 1:

                agregarGraphicCard();

                break;



            case 2:

                buscarVideojuego();

                break;

            case 3:


                cout << "digite el id del videojuego";
                cin >> Idgraphics;


                cout << "Se elimina " << listatarjetas->deleteNode(listatarjetas->findNode(Idgraphics)) << endl;


                break;
            case 4:
                for (GraphicCard graficas: listatarjetas->getLinkedList(true)) {
                    cout << graficas << endl;
                }

                break;
            case 6:
                std::cout << "Saliendo del programa..." << std::endl;

                break;

            default:
                std::cout << "Opción inválida. Por favor, elija una opción válida (1-6)." << std::endl;
        }


    }while (opcion != 6);

    return 0;
}