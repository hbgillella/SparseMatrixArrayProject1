#include "SparseMatrix.h"
#include <iostream>

SparseMatrix::SparseMatrix(int rows, int cols) : rows(rows), cols(cols) {}

void SparseMatrix::addElement(int row, int col, int value) {
    if (value != 0) {
        elements.push_back({row, col, value});
    }
}

void SparseMatrix::printMatrix() const {
    for (const auto& elem : elements) {
        std::cout << "Row: " << elem.row << ", Column: " << elem.col << ", Value: " << elem.value << std::endl;
    }
} 
