#include "Dish.h"
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    Dish d1;
    d1.displayInfo();

    Dish d2("Dish2", 25, 12, 37, true);
    d2.displayInfo();

    Dish d3("Dish3", false);
    d3.displayInfo();

    return 0;
}
