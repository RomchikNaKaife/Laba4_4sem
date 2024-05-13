#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
    int rows;
    int cols;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data.resize(rows, std::vector<T>(cols));
    }

    inline T& operator()(int row, int col) {
        return data[row][col];
    }

    inline void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

#endif // MATRIX_H
