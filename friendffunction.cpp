#include <bits/stdc++.h>

using namespace std;
class Complex
{
    int a, b;

public:
    void setdata(int n1, int n2) // Doubt in the program throwing garbage value
    {
        a = n1;
        b = n2;
    }
    void getdata(void)
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
    friend Complex sumcomplex(Complex o1, Complex o2);
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()

{
    Complex c1, c2, c3;
    c1.setdata(12, 2);
    c2.getdata();

    c2.setdata(6, 4);
    c2.getdata();

    c3 = sumcomplex(c1, c2);
    c3.getdata();

    return 0;
}