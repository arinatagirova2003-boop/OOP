#include "Array.h"
#include "Vector.h"
#include "Error.h"
#include <iostream>

int main() {
    try {
        Array arr(3);

        std::cout << "\nEnter 2 elements:\n";
        Array arr2 = arr + 2;

        std::cout << "\nArray after adding 2 elements:\n";
        for (int i = 0; i < arr2(); ++i)
            std::cout << arr2[i] << std::endl;

        std::cout << "\nArray after removing 1 element:\n";
        Array arr3 = arr2 - 1;
        for (int i = 0; i < arr3(); ++i)
            std::cout << arr3[i] << std::endl;

        std::cout << "\nTry accessing arr3[10]:\n";
        std::cout << arr3[10] << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
