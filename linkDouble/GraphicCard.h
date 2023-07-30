//
// Created by yilbe on 29/07/2023.
//

#ifndef LINKDOUBLE_GRAPHICCARD_H
#define LINKDOUBLE_GRAPHICCARD_H

#include <ostream>
#include "string"


using namespace std;


class GraphicCard {
public:
    GraphicCard(const string &idgraphics, const string &chip, const string &model, int price);

    virtual ~GraphicCard();

    GraphicCard();

private:
    string Idgraphics;
    string chip;
public:
    const string &getIdgraphics() const;

    void setIdgraphics(const string &idgraphics);

    const string &getChip() const;

    void setChip(const string &chip);

    const string &getModel() const;

    void setModel(const string &model);

    int getPrice() const;

    void setPrice(int price);

    friend ostream &operator<<(ostream &os, const GraphicCard &card);

private:
    string model;
    int price;


};



#endif //LINKDOUBLE_GRAPHICCARD_H
