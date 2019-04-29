//
// Created by Titkos on 14/04/2019.
//

#ifndef AKARMI_DISHES_H
#define AKARMI_DISHES_H


#include <string>
#include <vector>
#include "ingredient.h"

class dishes {
public:

    dishes();

    const std::vector<ingredient> &getIngredientVector() const;

    void setIngredientVector(const std::vector<ingredient> &dishIngredientVector);

    const std::string &getName() const;

    void setName(const std::string &name);

    std::vector<ingredient> dishIngredientVector;
protected:

    std::string name;

};


#endif //AKARMI_DISHES_H
