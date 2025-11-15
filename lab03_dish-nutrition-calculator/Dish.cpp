#include "Dish.h"
#include <iostream>
#include <iomanip>

using namespace std;

Dish::Dish(string n, float p, float f, float c, bool isV)
    : name(n), protein(p), fat(f), carbohydrate(c), isVegan(isV) {
    energy = calculateEnergy();
    cout << "Конструктор зі списком ініціалізації" << endl;
}

Dish::Dish() : name("Dish1"), protein(1), fat(1), carbohydrate(1), isVegan(false) {
    energy = calculateEnergy();
    cout << "Конструктор за замовчуванням" << endl;
}

Dish::Dish(string n, bool isV) : name(n), isVegan(isV) {
    do {
        cout << "Введіть кількість білків: ";
        cin >> protein;
    } while (protein < 0);

    do {
        cout << "Введіть кількість жирів: ";
        cin >> fat;
    } while (fat < 0);

    do {
        cout << "Введіть кількість вуглеводів: ";
        cin >> carbohydrate;
    } while (carbohydrate < 0);

    energy = calculateEnergy();
    cout << "Конструктор з параметрами" << endl;
}

Dish::~Dish() {
    cout << "Деструктор викликано для: " << name << endl;
}

void Dish::displayInfo() {
    cout << "Назва страви: " << name << endl;
    cout << fixed << setprecision(2);
    cout << "Білки: " << protein << " г, "
        << "Жири: " << fat << " г, "
        << "Вуглеводи: " << carbohydrate << " г" << endl;
    cout << "Енергетична цінність: " << energy << " ккал" << endl;
    cout << "Веганська: " << (isVegan ? "Так" : "Ні") << endl;
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
