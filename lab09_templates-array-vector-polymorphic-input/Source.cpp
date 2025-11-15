#include "Vector.h"
#include "Array.h"
#include "Error.h"
#include <iostream>

int main() {
    try {
        std::cout << "\nWorking with Vector<int>:\n";
        Array<Vector<int>> arrInt(2);
        arrInt.fillFromInput();

        Array<Vector<int>> arrInt2 = arrInt + 1;

        std::cout << "\nAfter adding one Vector<int>:\n";
        for (int i = 0; i < arrInt2(); ++i)
            std::cout << arrInt2[i] << std::endl;

        std::cout << "\nWorking with Vector<float>:\n";
        Array<Vector<float>> arrFloat(2);
        arrFloat.fillFromInput();

        Array<Vector<float>> arrFloat2 = arrFloat - 1;

        std::cout << "\nAfter removing one Vector<float>:\n";
        for (int i = 0; i < arrFloat2(); ++i)
            std::cout << arrFloat2[i] << std::endl;

        std::cout << "\nWorking with Vector<std::string>:\n";
        Array<Vector<std::string>> arrStr(2);
        arrStr.fillFromInput();

        std::cout << "\nJSON-style string Vectors:\n";
        for (int i = 0; i < arrStr(); ++i)
            std::cout << arrStr[i] << std::endl;

        std::cout << "\nWorking with Vector<bool>:\n";
        Array<Vector<bool>> arrBool(2);
        arrBool.fillFromInput();

        std::cout << "\nBoolean Vectors:\n";
        for (int i = 0; i < arrBool(); ++i)
            std::cout << arrBool[i] << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
