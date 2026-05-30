#ifndef CART_H
#define CART_H

#include <vector>
#include "FoodItem.h"

class Cart {
private:
    vector<FoodItem> cartItems;

public:
    void addToCart(FoodItem item) {

        cartItems.push_back(item);

        cout << item.getName()
             << " Added To Cart.\n";
    }

    void showCart() {

        double total = 0;

        cout << "\n===== YOUR CART =====\n";

        for (int i = 0; i < cartItems.size(); i++) {

            cartItems[i].displayItem();
            total += cartItems[i].getPrice();
        }

        cout << "----------------------\n";
        cout << "Total Bill = Rs." << total << endl;
    }
};

#endif