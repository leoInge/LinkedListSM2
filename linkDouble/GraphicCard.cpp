//
// Created by yilbe on 29/07/2023.
//

#include "GraphicCard.h"

const string &GraphicCard::getIdgraphics() const {
    return Idgraphics;
}

void GraphicCard::setIdgraphics(const string &idgraphics) {
    Idgraphics = idgraphics;
}

const string &GraphicCard::getChip() const {
    return chip;
}

void GraphicCard::setChip(const string &chip) {
    GraphicCard::chip = chip;
}

const string &GraphicCard::getModel() const {
    return model;
}

void GraphicCard::setModel(const string &model) {
    GraphicCard::model = model;
}

int GraphicCard::getPrice() const {
    return price;
}

void GraphicCard::setPrice(int price) {
    GraphicCard::price = price;
}

GraphicCard::GraphicCard(const string &idgraphics, const string &chip, const string &model, int price) : Idgraphics(
        idgraphics), chip(chip), model(model), price(price) {}


ostream &operator<<(ostream &os, const GraphicCard &card) {
    os << "Idgraphics: " << card.Idgraphics << " chip: " << card.chip << " model: " << card.model << " price: "
       << card.price;
    return os;
}



GraphicCard::GraphicCard() {}

GraphicCard::~GraphicCard() {

}




