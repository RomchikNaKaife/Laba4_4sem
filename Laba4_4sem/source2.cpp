#include "Vector.h"

void testVectorLocal() {
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
