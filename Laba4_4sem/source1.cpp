#include "Matrix.h"
#include "Vector.h"
#include <iostream>

template <typename T>
int findSecondMaxIndex(T* arr, int size) {
    if (size < 2) {
        std::cerr << "Ошибка: Размер массива должен быть не менее 2." << std::endl;
        return -1;
    }

    int maxIndex = 0;
    int secondMaxIndex = -1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex]) {
            secondMaxIndex = i;
        }
    }

    return secondMaxIndex;
}

void testVector() {
    Vector<int> v1({ 1, 2, 3 });
    Vector<int> v2({ 4, 5, 6 });

    Vector<int> result = v1 * 2;
    std::cout << "Scalar multiplication result: ";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    int dotProduct = v1 * v2;
    std::cout << "Dot product result: " << dotProduct << std::endl;
}

int main() {
    int intArr[] = { 1, 5, 3, 8, 6 };
    double doubleArr[] = { 1.1, 5.5, 3.3, 8.8, 6.6 };
    char charArr[] = { 'a', 'c', 'b', 'd', 'e' };

    std::cout << "Индекс второго максимального элемента в массиве int: " << findSecondMaxIndex(intArr, 5) << std::endl;
    std::cout << "Индекс второго максимального элемента в массиве double: " << findSecondMaxIndex(doubleArr, 5) << std::endl;
    std::cout << "Индекс второго максимального элемента в массиве char: " << findSecondMaxIndex(charArr, 5) << std::endl;

    Matrix<float> matrixFloat(3, 2);
    matrixFloat(0, 0) = 1.2;
    matrixFloat(0, 1) = 2.3;
    matrixFloat(1, 0) = 3.4;
    matrixFloat(1, 1) = 4.5;
    matrixFloat(2, 0) = 5.6;
    matrixFloat(2, 1) = 6.7;

    std::cout << "Matrix<float>:" << std::endl;
    matrixFloat.print();

    Matrix<double> matrixDouble(2, 3);
    matrixDouble(0, 0) = 1.1;
    matrixDouble(0, 1) = 2.2;
    matrixDouble(0, 2) = 3.3;
    matrixDouble(1, 0) = 4.4;
    matrixDouble(1, 1) = 5.5;
    matrixDouble(1, 2) = 6.6;

    std::cout << "\nMatrix<double>:" << std::endl;
    matrixDouble.print();

    Matrix<int> matrixInt(3, 2);
    matrixInt(0, 0) = 1;
    matrixInt(0, 1) = 2;
    matrixInt(1, 0) = 3;
    matrixInt(1, 1) = 4;
    matrixInt(2, 0) = 5;
    matrixInt(2, 1) = 6;

    std::cout << "\nMatrix<int>:" << std::endl;
    matrixInt.print();

    testVector();

    return 0;
}
