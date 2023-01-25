#include <bits/stdc++.h>

using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(Complex, Complex);
    int sumimgcomplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Indvidually declaring functions as friend
    // friend int Calculator ::sumrealcomplex(Complex, Complex);
    //friend  int Calculator::sumimgcomplex(Complex , Complex );

    // Aliter:declaring the entire class as friend
    friend class Calculator;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getdata(void)
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumimgcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()

{
    Complex o1, o2;
    o1.setdata(4, 8);
    o1.getdata();

    o2.setdata(5, 6);
    o2.getdata();

    Calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res<<endl;

    int resimg = calc.sumimgcomplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << resimg<<endl;
    return 0;
}