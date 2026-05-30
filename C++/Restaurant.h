#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <vector>
#include "FoodItem.h"

class Restaurant {
private:
    string restaurantName;
    vector<FoodItem> menu;

public:
    Restaurant(string restaurantName) {
        this->restaurantName = restaurantName;
    }

    void addFood(FoodItem item) {
        menu.push_back(item);
    }

    void showMenu() {
        cout << "\n===== " << restaurantName << " MENU =====\n";

        for (int i = 0; i < menu.size(); i++) {
            cout << i + 1 << ". ";
            menu[i].displayItem();
        }
    }

    FoodItem getFood(int index) {
        return menu[index];
    }
};

#endif