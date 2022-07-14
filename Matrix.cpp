#include "Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            array[i][j]=0;
        }
    }
}
Matrix::Matrix(int array[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            this->array[i][j]=array[i][j];
        }

    }
}
Matrix Matrix::operator+(const Matrix &b)
{
    Matrix temp;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            temp.array[i][j]=this->array[i][j]+b.array[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator-(const Matrix &b)
{
    Matrix temp;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            temp.array[i][j]=this->array[i][j]-b.array[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator*(const Matrix &b)
{
    Matrix temp;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<5; k++)
            {
                temp.array[i][j]+=this->array[i][k]*b.array[k][j];
            }
        }
    }
    return temp;
}
void Matrix::display()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
