//
// Created by Titkos on 14/04/2019.
//

#include "dishes.h"

const std::vector<ingredient> &dishes::getIngredientVector() const {
    return dishIngredientVector;
}

void dishes::setIngredientVector(const std::vector<ingredient> &ingredientVector) {
    dishes::dishIngredientVector = ingredientVector;
}

const std::string &dishes::getName() const {
    return name;
}

void dishes::setName(const std::string &name) {
    dishes::name = name;
}

dishes::dishes() {}


