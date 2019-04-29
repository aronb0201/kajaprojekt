//
// Created by Titkos on 28/01/2019.
//

#ifndef AKARMI_INGREDIENT_H
#define AKARMI_INGREDIENT_H


#include <string>
#include <vector>

class ingredient {
public:
    ingredient();

    const std::string &getName() const;

    void setName(const std::string &name);

    float getPrice() const;

    void setPrice(float price);

    int getAmount() const;

    void setAmount(int amount);

protected:
    std::string _name;
    float _price;
    int _amount = 1;

};


#endif //AKARMI_INGREDIENT_H
