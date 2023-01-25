#include <bits/stdc++.h>
using namespace std;

/*
Case1:
class B: public A{
    Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
     Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
     Order of execution of constructor -> C() then B() and A()
};

*/

class base1
{
protected:
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor is called " << endl;
    }

    void showdata1()
    {
        cout << "The value of a is " << data1 << endl;
    }
};

class base2
{
protected:
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Base2 class constructor is called " << endl;
    }

    void showdata2()
    {
        cout << "The value of b is " << data2 << endl;
    }
};
class derived : public base1, public base2
{
protected:
    int d1, d2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        d1 = c;
        d2 = d;
        cout << "Derived clasas constructor is called " << endl;
    }
    void print()
    {
        showdata1();
        showdata2();
        cout << "The value of d1 is " << d1 << endl;
        cout << "The value of d2 is " << d2 << endl;
    }
};
int main()

{
    derived obbj(1, 3, 4, 5);
    // obbj.showdata1();
    // obbj.showdata2();
    obbj.print();

    return 0;
}