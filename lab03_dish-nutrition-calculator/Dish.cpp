#include "Dish.h"
#include <iostream>
#include <iomanip>

using namespace std;

Dish::Dish(string n, float p, float f, float c, bool isV)
    : name(n), protein(p), fat(f), carbohydrate(c), isVegan(isV) {
    energy = calculateEnergy();
    cout << "Constructor with initialization list" << endl;
}

Dish::Dish() : name("Dish1"), protein(1), fat(1), carbohydrate(1), isVegan(false) {
    energy = calculateEnergy();
    cout << "Default constructor" << endl;
}

Dish::Dish(string n, bool isV) : name(n), isVegan(isV) {
    do {
        cout << "Enter amount of protein: ";
        cin >> protein;
    } while (protein < 0);

    do {
        cout << "Enter amount of fat: ";
        cin >> fat;
    } while (fat < 0);

    do {
        cout << "Enter amount of carbohydrates: ";
        cin >> carbohydrate;
    } while (carbohydrate < 0);

    energy = calculateEnergy();
    cout << "Constructor with parameters" << endl;
}

Dish::~Dish() {
    cout << "Destructor called for: " << name << endl;
}

void Dish::displayInfo() {
    cout << "Dish name: " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Protein: " << protein << " g, "
         << "Fat: " << fat << " g, "
         << "Carbohydrates: " << carbohydrate << " g" << endl;
    cout << "Energy value: " << energy << " kcal" << endl;
    cout << "Vegan: " << (isVegan ? "Yes" : "No") << endl;
}

float Dish::calculateEnergy() {
    return protein * 4 + fat * 9 + carbohydrate * 4;
}

std::string Dish::getName() {
    return name;
}

float Dish::getProtein() {
    return protein;
}

float Dish::getFat() {
    return fat;
}

float Dish::getCarbohydrate() {
    return carbohydrate;
}

float Dish::getEnergy() {
    return energy;
}

bool Dish::getIsVegan() {
    return isVegan;
}

void Dish::setName(const string& n) {
    name = n;
}

void Dish::setProtein(float p) {
    if (p >= 0) {
        protein = p;
        energy = calculateEnergy();
    }
}

void Dish::setFat(float f) {
    if (f >= 0) {
        fat = f;
        energy = calculateEnergy();
    }
}

void Dish::setCarbohydrate(float c) {
    if (c >= 0) {
        carbohydrate = c;
        energy = calculateEnergy();
    }
}

void Dish::setIsVegan(bool v) {
    isVegan = v;
}
