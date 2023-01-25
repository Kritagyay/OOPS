#include <bits/stdc++.h>

using namespace std;
class Y;
class X
{
    int data;

public:
    void setdata(int a)
    {
        data = a;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setdata(int b)
    {
        num = b;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "The sum of data values of class X and Class Y is " << o1.data + o2.num << endl;
}

int main()

{
    X a1;
    a1.setdata(9);

    Y b2;
    b2.setdata(10);

    add(a1, b2);

    return 0;
}