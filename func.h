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
#include <string>

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
    getline(std::cin,dishName);
    dish.setName(dishName);
    std::cout << "how many ingredient does " << dish.getName() << " needs?" << std::endl;
    std::cin >> ingredientAmount;

    for (int i = 0; i < ingredientAmount; ++i) {
        ingredient tempIngredinet;

        int counter = 1;
        while (counter ==1) {
            for (int j = 0; j < ingredientVector.size(); ++j) {
                std::cout << j << ": " << ingredientVector[j].getName() << " price/g: " << ingredientVector[j].getPrice()
                          << std::endl;
            }
            std::cout << "please add from the list " << std::endl;
            int ingredientNumber;
            std::cin >> ingredientNumber;
            if(ingredientNumber < ingredientVector.size()) {
                tempIngredinet = ingredientVector[ingredientNumber];
                std::cout << "you choose: " << tempIngredinet.getName() << std::endl;
                std::cout << "please give me the amount of: " << tempIngredinet.getName() << " for dish: "
                          << dish.getName()
                          << std::endl;
                int amount;
                std::cin >> amount;
                std::cout << "you need: " << amount << " in grams of: " << tempIngredinet.getName() << " for your "
                          << dish.getName() << std::endl;
                tempIngredinet.setAmount(amount);
                dish.dishIngredientVector.push_back(tempIngredinet);
                counter = 0;
            }
            else{
                std::cout << "invalid ingredient number " << std::endl;
                continue;
            }
        }
        dishesVector.push_back(dish);
    }
}

void writeDataToText() {
    std::string saveName;
    std::string fileName;
    int counter = 0;
    while (counter == 0) {
        std::cout << "please give me the file name to save your dish:" << std::endl;
        std::cin >> fileName;
        saveName = fileName + ".txt";
        float totalPrice = 0;
        std::ofstream ingFile(saveName);
        if (!ingFile.is_open()) {
            std::cout << "cannot open file OR file name is invalid" << std::endl;
            continue;
        } else {
            for (int j = 0; j < dishesVector.size(); ++j) {
                ingFile << "----------------" << dishesVector[j].getName() << "----------------" << std::endl;
                for (int i = 0; i < dishesVector[j].dishIngredientVector.size(); ++i) {
                    ingFile << "Ingredient " << i << " : " << dishesVector[j].dishIngredientVector[i].getName()
                            << " Amount of it: "
                            << dishesVector[j].dishIngredientVector[i].getAmount() << " price/gram: "
                            << dishesVector[j].dishIngredientVector[i].getPrice()/dishesVector[j].dishIngredientVector[i].getAmount()<<
                            " total price/dish: " << dishesVector[j].dishIngredientVector[i].getPrice()
                            << std::endl;
                    totalPrice += dishesVector[j].dishIngredientVector[i].getPrice();
                }
                ingFile << "---------- TOTAL PRICE /FOOD ----------" << std::endl;
                ingFile << totalPrice << std::endl;
                ingFile << "--------------------------------------------------" << std::endl;
            }
        }
        counter =1;
        dishesVector.clear();
    }
}

#endif //AKARMI_FUNC_H