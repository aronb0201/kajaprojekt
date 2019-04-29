//
// Created by Titkos on 14/04/2019.
//

#ifndef AKARMI_FUNC_H
#define AKARMI_FUNC_H

#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>
#include "ingredient.h"
#include "dishes.h"

std::string dishName;
std::vector<dishes> dishesVector;
std::vector<ingredient> ingredientVector;
int ingredientAmount;


std::vector<ingredient> fillIngredientVectorFromFile() {
    std::ifstream ingredientListStream;
    std::string line;
    ingredientListStream.open("ingredientsList.txt");


    while (getline(ingredientListStream, line)) {
        std::string ingredientName;
        std::string stringPrice;
        ingredient tempIngredient;
        getline(ingredientListStream, ingredientName, ',');
        tempIngredient.setName(ingredientName);
        getline(ingredientListStream, stringPrice);
        tempIngredient.setPrice(std::stof(stringPrice));
        ingredientVector.push_back(tempIngredient);
    }
    return ingredientVector;

};

void giveDish() {
    dishes dish;
    ingredient currentIngredient;
    std::cout << "what food is it?" << std::endl;
    std::cin >> dishName;
    dish.setName(dishName);
    std::cout << "how many ingredient does " << dish.getName() << " needs?" << std::endl;
    std::cin >> ingredientAmount;

    for (int i = 0; i < ingredientAmount; ++i) {
        ingredient tempIngredinet;

        for (int j = 0; j < ingredientVector.size(); ++j) {
            std::cout << j << ": " << ingredientVector[j].getName() << " price/g: " << ingredientVector[j].getPrice()
                      << std::endl;
        }
        std::cout << "please add from the list " << std::endl;
        int ingredientNumber;
        std::cin >> ingredientNumber;
        tempIngredinet = ingredientVector[ingredientNumber];
        std::cout << "you choose: " << tempIngredinet.getName() << std::endl;
        std::cout << "please give me the amount of: " << tempIngredinet.getName() << " for dish: " << dish.getName()
                  << std::endl;
        int amount;
        std::cin >> amount;
        std::cout << "you need: " << amount << " in grams of: " << tempIngredinet.getName() << " for your "
                  << dish.getName() << std::endl;
        tempIngredinet.setAmount(amount);
        dish.dishIngredientVector.push_back(tempIngredinet);
    }
    dishesVector.push_back(dish);
}

void writeDataToText(std::string filename) {
    float totalPrice = 0;
    for (int j = 0; j < dishesVector.size(); ++j) {
        std::ofstream ingFile(filename);
        if (ingFile.is_open()) {
            ingFile << "----------------" << dishesVector[j].getName() << "----------------" << std::endl;
        }
        for (int i = 0; i < dishesVector[j].dishIngredientVector.size(); ++i) {
            ingFile << "Ingredient " << i << " : " << dishesVector[j].dishIngredientVector[i].getName()
                    << " Amount of it: "
                    << dishesVector[j].dishIngredientVector[i].getAmount() << " price: "
                    << dishesVector[j].dishIngredientVector[i].getPrice()
                    << std::endl;
            totalPrice += dishesVector[j].dishIngredientVector[i].getPrice();
        }
        ingFile << "---------- TOTAL PRICE /FOOD ----------" << std::endl;
        ingFile << totalPrice << std::endl;
        ingFile << "--------------------------------------------------" << std::endl;
    }


}

#endif //AKARMI_FUNC_H