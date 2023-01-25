#include <bits/stdc++.h>

using namespace std;
class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // THIS METHOD IS CLASS FUNCTION CREATION
    // Complex operator +(Complex &obj)
    // {
    //     Complex res;
    //     res.real=this->real+obj.real;
    //     res.imag=this->imag+obj.imag;
    //     return res;
    // }

    // THIS METHOD IS FRIEND FUNCTION CREATION
    friend Complex operator+(Complex obj1, Complex obj2);

    void print()
    {
        cout << "The value of complex number is " << real << " +i" << imag << endl;
    }
};

Complex operator+(Complex obj1, Complex obj2)
{
    Complex res;
    res.real = obj2.real + obj1.real;
    res.imag = obj1.imag + obj2.imag;
    return res;
}

int main()

{
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}