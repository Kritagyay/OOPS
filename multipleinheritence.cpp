#include <bits/stdc++.h>

using namespace std;
class base1
{
protected:
    int data1;

public:
    int setdata1(int a)
    {
        data1 = a;
    }
};

class base2
{
protected:
    int data2;

public:
    int setdata2(int a)
    {
        data2 = a;
    }
};

class derived:public base1,public base2 
{
    public:
    int data3;

    void show()
    {
        cout<<"The value of data1 is "<<data1<<endl;
        cout<<"The value of data2 is "<<data2<<endl;
        cout<<"The value of data3 is "<<data2+data1<<endl;
    }
};

int main()

{
    derived der;
    der.setdata1(5);
    der.setdata2(4);
    der.show();

    return 0;
}