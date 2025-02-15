 
# Sparse Matrix Array Project1

## Description:
This project implements a sparse matrix using an array-based approach. Instead of storing all elements (including zeroes), it only stores non-zero elements in a matrix. These elements are stored as triples: (Row, Column, Value). This is more memory-efficient when dealing with large matrices where most elements are zero.

## Features:
- Insert non-zero elements into the sparse matrix.
- Retrieve values from the matrix.
- Display the sparse matrix as triples (Row, Column, Value).
- Display the full matrix representation (including zeros).

## How to Run:
1. Clone the repository.
2. Navigate to the project directory.
3. Open a terminal and run the following commands:

### Build Instructions:

For systems using `g++` and `make`:
```bash
g++ -o SparseMatrixArrayProject1 main.cpp
./SparseMatrixArrayProject1
