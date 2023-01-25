#include <bits/stdc++.h>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
    int setdata1(int );

};
int base:: setdata1(int n)
{
    data1=n;  //we can change the value of private 
             //member with the help of using memeber function and the value is changed by the derived class 
    return data1;
}
void base::setdata()
{
    // data1 = 12;
    data2 = 14;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : public base
{

public:
    int data3;
    void process();
    void display();
};

void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "The value of the data1 is " << getdata1() << endl;
    cout << "The value of the data2 is " << data2 << endl;
    cout << "The value of the data3 is " << data3 << endl;
}

int main()

{
    derived der;
    der.setdata1(6);
    der.setdata();
    der.process();
    der.display();
    return 0;
}