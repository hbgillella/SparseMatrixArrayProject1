#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

#include <vector>

struct Element {
    int row;
    int col;
    int value;
};

class SparseMatrix {
public:
    SparseMatrix(int rows, int cols);
    void addElement(int row, int col, int value);
    void printMatrix() const;

private:
    int rows;
    int cols;
    std::vector<Element> elements;
};

#endif 