cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(SparseMatrixArrayProject1 VERSION 1.0)

# Set the include directory
include_directories(include)

# Add source files
set(SOURCE_FILES src/main.cpp src/SparseMatrix.cpp)

# Create the executable
add_executable(SparseMatrixArrayProject1 ${SOURCE_FILES})

