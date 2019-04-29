//
// Created by Titkos on 28/01/2019.
//

#include "ingredient.h"

const std::string &ingredient::getName() const {
    return _name;
}

void ingredient::setName(const std::string &name) {
    _name = name;
}

float ingredient::getPrice() const {
    return _price * _amount;
}

void ingredient::setPrice(float price) {
    _price = price;
}

int ingredient::getAmount() const {
    return _amount;
}

void ingredient::setAmount(int amount) {
    _amount = amount;
}


ingredient::ingredient() {

}

