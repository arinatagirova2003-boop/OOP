#include "Vector.h"
#include "Array.h"
#include "Error.h"
#include <iostream>

int main() {
    try {

        std::cout << "\nWorking with Vector<int>:\n";
        Array<Vector<int>> arr(2);

        Array<Vector<int>> arr2 = arr + 1;

        std::cout << "\nArray after adding 1 element:\n";
        for (int i = 0; i < arr2(); ++i)
            std::cout << arr2[i] << std::endl;

        std::cout << "\nWorking with Vector<float>:\n";
        Array<Vector<float>> arrF(2);

        Array<Vector<float>> arrF2 = arrF - 1;

        std::cout << "\nArray<float> after removing 1 element:\n";
        for (int i = 0; i < arrF2(); ++i)
            std::cout << arrF2[i] << std::endl;

        std::cout << "\nWorking with Vector<std::string>:\n";
        Array<Vector<std::string>> arrStr(2);

        std::cout << "\nJSON-format output:\n";
        for (int i = 0; i < arrStr(); ++i)
            std::cout << arrStr[i] << std::endl;

        std::cout << "\nWorking with Vector<bool>:\n";
        Array<Vector<bool>> arrB(2);

        std::cout << "\nArray<bool> output:\n";
        for (int i = 0; i < arrB(); ++i)
            std::cout << arrB[i] << std::endl;

    }
    catch (const ErrorBase& e) {
        e.log();
    }
    catch (const std::exception& e) {
        std::cerr << "[std::exception]: " << e.what() << std::endl;
    }

    return 0;
}
