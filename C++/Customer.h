#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer {
private:
    string customerName;
    string phoneNumber;

public:
    Customer(string customerName, string phoneNumber) {
        this->customerName = customerName;
        this->phoneNumber = phoneNumber;
    }

    void displayCustomer() {
        cout << "\nCustomer Name : " << customerName << endl;
        cout << "Phone Number  : " << phoneNumber << endl;
    }
};

#endif