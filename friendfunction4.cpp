#include <bits/stdc++.h>

using namespace std;
// write a program to print the swapping of two vlaues using reference var and friend function

class Y;
class X
{
    int data;

public:
    void setdata(int n1)
    {
        data = n1;
    }
    void getdata(void)
    {
        cout << "The value is " << data << endl;
    }
    friend void exchange(X &, Y &);
};
class Y
{
    int value;
    friend void exchange(X &, Y &);

public:
    void setdata(int n2)
    {
        value = n2;
    
    }
    void getdata(void)
    {
        cout << "The value is " << value << endl;
    }
};

void exchange(X &c1, Y &c2)
{
    int temp = c1.data;
    c1.data = c2.value;
    c2.value = temp;
}

int main()

{
    X ob1;
    Y ob2;

    ob1.setdata(32);
    ob2.setdata(43);

    exchange(ob1, ob2);
    cout << "The value after swapping becomes for ob1 " ;
    ob1.getdata() ;
    cout << "The value after swapping becomes for ob2 ";
    ob2.getdata();

    return 0;
}