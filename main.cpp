#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    int a[5][5]={11, 22, 33, 44, 55, 66, 77, 88, 99, 21, 14, 13, 18, 19, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int b[5][5]={25, 24, 23, 27, 21, 20, 99, 84, 72, 62, 59, 74, 93, 123, 141, 101, 93, 18, 27, 67, 54, 46, 43, 21, 13};
    Matrix obj1(a);
    Matrix obj2(b);
    Matrix sum_Matrix, sub_matrix, product_matrix;
    sum_Matrix=obj1+obj2;
    sub_matrix=obj1-obj2;
    product_matrix=obj1*obj2;
    cout<<"Matrix A :"<<endl;
    obj1.display();
    cout<<"Matrix B : "<<endl;
    obj2.display();
    cout<<endl<<"   -Matrix A + Matrix B-"<<endl;
    sum_Matrix.display();
    cout<<endl<<"   -Matrix A - Matrix B-"<<endl;
    sub_matrix.display();
    cout<<endl<<"   -Matrix A * Matrix B-"<<endl;
    product_matrix.display();
    return 0;




}
