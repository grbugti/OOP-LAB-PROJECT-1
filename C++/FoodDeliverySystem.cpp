#include <iostream>
#include "FoodItem.h"
#include "Customer.h"
#include "Restaurant.h"
#include "Cart.h"
using namespace std;
int main() {

    Restaurant r1("GRide Food Delivery");

    r1.addFood(FoodItem("Zinger Burger", 550));
    r1.addFood(FoodItem("Pizza", 1200));
    r1.addFood(FoodItem("Fries", 300));
    r1.addFood(FoodItem("Cold Drink", 150));

    cout << "=================================\n";
    cout << " FOOD DELIVERY MANAGEMENT SYSTEM \n";
    cout << "=================================\n";

    string name, phone;

    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Enter Phone Number: ";
    getline(cin, phone);

    Customer customer(name, phone);

    Cart cart;

    int choice;

    do {

        cout << "\n========== MENU ==========\n";
        cout << "1. Show Food Menu\n";
        cout << "2. Add Food To Cart\n";
        cout << "3. View Cart\n";
        cout << "4. Checkout\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:

            r1.showMenu();
            break;

        case 2:

            r1.showMenu();

            int foodChoice;

            cout << "Select Food Number: ";
            cin >> foodChoice;

            cart.addToCart(r1.getFood(foodChoice - 1));
            break;

        case 3:

            cart.showCart();
            break;

        case 4:

            customer.displayCustomer();

            cout << "\nOrder Placed Successfully!\n";
            cout << "Delivery Contact: +92 3369240331\n";
            break;

        case 5:

            cout << "Application Closed.\n";
            break;

        default:

            cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}