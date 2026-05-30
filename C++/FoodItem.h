#ifndef FOODITEM_H
#define FOODITEM_H

#include <iostream>
using namespace std;

class FoodItem {
private:
    string name;
    double price;

public:
    FoodItem() {}

    FoodItem(string name, double price) {
        this->name = name;
        this->price = price;
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    void displayItem() {
        cout << name << " - Rs." << price << endl;
    }
};

#endif