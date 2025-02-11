﻿#include <iostream>

void fum_value(double k, double x, double y) {
    x = x + k;
    y = y + k;
}

void fum_ptr(double k, double* x, double* y) {
    *x = *x + k;
    *y = *y + k;
}

void fum_ref(double k, double& x, double& y) {
    x = x + k;
    y = y + k;
}

void print(double x, double y) {
    std::cout << "x = " << x << "; y = " << y << std::endl;
}

int main()
{
    system("chcp 1251");

    double k = 2.5;
    double xv = 10;
    double yv = 10;

    print(xv, yv);

    fum_value(k, xv, yv);
    print(xv, yv);

    fum_ptr(k, &xv, &yv);
    print(xv, yv);

    fum_ref(k, xv, yv);
    print(xv, yv);

    return 0;
}


