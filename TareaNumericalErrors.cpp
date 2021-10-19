// calcular el sin(x = pi/3), usando la expansion matematica
// sin(x, N) = \sum_{n=1}^{N} (-1)^{n-1} x^{2n-1}/(2n-1)!

#include <iostream>
#include <cmath>

double mysin(double x, int N); // declaration
long double factorial(int n);

int main()
{
    std::cout.setf(std::ios::scientific);
    std::cout.precision(10);

    const double x = M_PI/3;
    const double exact = std::sin(x);

    /*for(int NMAX = 1; NMAX <= 1000; NMAX++) {
        double diff = std::fabs(mysin(x, NMAX) - exact)/exact;
        std::cout << NMAX << "\t" << diff << "\n";
    }*/
    
    //std::cout << mysin(x, 1000) << "\t" << exact << "\n";
    std::cout << factorial(100) << "\n";

    return 0;
}
long double factorial(int n)
{
    long double fact = 1;
    for(int j = 1; j <= n; j++)
    {
        fact *= j;
    }
    return fact;
}

double mysin(double x, int N) // implementation
{
    
    double suma = 0.0;
    for(int i = 1; i <= N; i++)
    {
        int n = 2*i - 1;
        suma += (std::pow(-1, i - 1))*(std::pow(x, n))/factorial(n);
    }

    return suma;
}