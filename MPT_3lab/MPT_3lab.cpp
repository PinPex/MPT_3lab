#include <iostream>

#include "class.h"

double** genArray(int n, int m) {
    double** array = new double* [n];
    for (int i = 0; i < n; ++i)
    {
        array[i] = new double[m];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            array[i][j] = static_cast<double>(rand() % n + m) + static_cast<double>(rand()) / RAND_MAX;
        }
    }
    return array;
}

int main()
{
    srand(static_cast<unsigned>(time(0)));


    std::cout << lab3::fun1(12345) << std::endl;
    std::cout << lab3::fun2(62543) << std::endl;
    std::cout << lab3::fun3(123456, 2) << std::endl;
    int m = 5, n = 5;
    double** A = genArray(m, n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << A[i][j] << "\t ";
        }
        std::cout << std::endl;
    }
    std::cout << lab3::fun4(A, m, n) << std::endl;
}
