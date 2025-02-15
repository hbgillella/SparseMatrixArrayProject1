#include "SparseMatrix.h"

int main() {
    SparseMatrix matrix(4, 5);

    matrix.addElement(0, 2, 3);
    matrix.addElement(0, 4, 4);
    matrix.addElement(1, 2, 5);
    matrix.addElement(1, 3, 7);
    matrix.addElement(3, 0, 6);
    matrix.addElement(3, 4, 6);

    matrix.printMatrix();

    return 0;
} 
