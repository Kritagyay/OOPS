#include <bits/stdc++.h>

using namespace std;
class Complex
{
    int a,b;
public:
    Complex(void);
    void getdata(void)
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 3;
}

int main()

{
    Complex c1;
    c1.getdata();

    return 0;
}