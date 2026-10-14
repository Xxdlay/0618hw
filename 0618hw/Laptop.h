#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Laptop {
private:
    char* brand;
    double price;

public:
    Laptop(const char* brandName, double laptopPrice) {
        price = laptopPrice;
        brand = new char[strlen(brandName) + 1];
        strcpy_s(brand, strlen(brandName) + 1, brandName);
    }

    ~Laptop() {
        delete[] brand;
    }

    void info() const {
        cout << brand << " " << price << endl;
    }
};