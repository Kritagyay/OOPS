#include <bits/stdc++.h>

using namespace std;
class A
{
    int a,b;
    public:
    A(){}
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    A(A&obj)
    {
        a=obj.a;
        b=obj.b;
    }

    void print()
    {
        cout<<"Te value of a and b is "<<a<<" "<<b<<endl;
    }
};
int main()

{
    A obj1(10,4);
    obj1.print();
    A obj2=obj1;
    obj2.print();

    

    return 0;
}