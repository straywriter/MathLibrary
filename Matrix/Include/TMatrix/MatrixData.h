#pragma once

namespace tmatrix {

template <typename Type, size_t row, size_t col> struct MatrixData {
  enum Info : size_t { size = row * col, row = row, col = col };
  union {
    Type matrix[row][col];
    Type data[row * col];
  };

  MatrixData() {
    for (size_t i = Info::size; i--; data[i] = 0)
      ;
  }

  MatrixData(Type value) {
    for (size_t i = Info::size; i--; data[i] = value)
      ;
  }
};

} // namespace tmatrix