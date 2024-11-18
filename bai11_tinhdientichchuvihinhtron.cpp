// bai11_tinhdientichchuvihinhtron.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
    double bankinh, chuvi, dientich;
    cout << "TINH DIEN TICH CHU VI HINH TRON";
    cout << "\nNhap bankinh:\t";
    cin >> bankinh;
    chuvi = (2 * M_PI * bankinh);
    dientich = (M_PI * (bankinh*bankinh));
    cout << "\n chu vi: " << chuvi << endl;
    cout << "\n dien tich : " << dientich << endl;
    return 0;
}

                                                      