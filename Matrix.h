#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:
    Matrix();
    Matrix(int array[5][5]);
    //void set_Matrix(int array[5][5]);
    Matrix operator+(const Matrix&);
    Matrix operator-(const Matrix&);
    Matrix operator*(const Matrix&);
    void display();
    int array[5][5];
};

#endif // MATRIX_H
