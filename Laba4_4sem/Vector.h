#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>

template <typename T>
class Vector {
private:
    std::vector<T> vec;

public:
    Vector() {}

    explicit Vector(size_t size) : vec(size) {}

    Vector(const std::vector<T>& v) : vec(v) {}

    inline T& operator[](size_t index) {
        return vec[index];
    }

    inline const T& operator[](size_t index) const {
        return vec[index];
    }

    inline Vector<T> operator*(T scalar) {
        Vector<T> result(vec.size());
        for (size_t i = 0; i < vec.size(); ++i) {
            result[i] = vec[i] * scalar;
        }
        return result;
    }

    inline T operator*(const Vector<T>& other) {
        T result = 0;
        for (size_t i = 0; i < vec.size(); ++i) {
            result += vec[i] * other[i];
        }
        return result;
    }

    inline size_t size() const {  
        return vec.size();
    }
};

#endif // VECTOR_H
