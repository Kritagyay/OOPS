// #include <bits/stdc++.h>

// using namespace std;
// class base1
// {
//     private:
//     int a;
//     public:
//     base1(int x)
//     {
//         a=x;
//         cout<<"Base1 class constructr is called "<<endl;
//     }
//     void show()
//     {
//         cout<<"The value of a is "<<a<<endl;
//     }
// };
// class base2
// {
//     int b;
//     public:
//     base2(int y)
//     {
//         b=y;
//          cout<<"Base2 class constructr is called "<<endl;
//     }
//     void show1()
//     {
//           cout<<"The value of b is "<<b<<endl;
//     }
// };

// class derived: public base2,virtual public base1{
//     int c,d;
//     public:
//     derived(int x,int y,int z,int s):base1(x),base2(y)
//     {
//         c=y;
//         d=s;
//         cout<<"Derived class constructor is called "<<endl;
//     }

//     void display()
//     {
//         show();
//         show1();
//         cout<<"The value of c and d is "<<c<<" "<<d<<endl;
//     }
// };
// int main()

// {
// derived d(1,3,5,7);
// d.display();

//     return 0;
// }
#include <iostream>
using namespace std;
class p
{
public:
    int i;
};
class q : virtual public p
{
public:
    int j;
};
class r : virtual public p
{
public:
    int k;
};
class s :  public q, public r
{
public:
    int mul;
};
int main()
{
    s obj1;
    obj1.i = 10;
    obj1.j = 20;
    obj1.k = 30;
    obj1.mul = obj1.i * obj1.j * obj1.k;
    cout << "Mul is " << obj1.mul << endl;
    return 0;
}