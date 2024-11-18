// bai11_tinhdientichchuvihinhtron.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
int main()
{
    double bankinh, pi, chuvi, dientich;
    cout << "TINH DIEN TICH CHU VI HINH TRON";
    cout << "\nNhap bankinh:\t";
    cin >> bankinh;
    cout << "\nTa co pi=3.14 ";
    pi = 3.14;
    chuvi = (2 * pi * bankinh);
    dientich = (pi * (bankinh*bankinh));
    cout << "\n chu vi: " << chuvi << endl;
    cout << "\n dien tich : " << dientich << endl;
    return 0;
}

