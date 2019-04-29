#include <iostream>
#include <vector>
#include <fstream>
#include "ingredient.h"
#include "func.h"


int main() {


    fillIngredientVectorFromFile();

    giveDish();


    for (int j = 0; j < dishesVector.size(); ++j) {
        std::cout << "dish number " << j << ": " << dishesVector[j].getName() << std::endl;
        std::cout << "ingredients: " << std::endl;
        for (int i = 0; i < dishesVector[j].dishIngredientVector.size(); ++i) {
            std::cout << dishesVector[j].dishIngredientVector[i].getName() << " the amount of: "
                      << dishesVector[j].dishIngredientVector[i].getAmount() << " for the price: "
                      << dishesVector[j].dishIngredientVector[i].getPrice() <<
                      std::endl;
        }
    }
    writeDataToText("dishData.txt");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

