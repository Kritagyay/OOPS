#include <bits/stdc++.h>

using namespace std;
 template <class t1,class t2>
 class A
 {
    public:
    t1 a;
    t2 b;
    A (t1 a1,t2 b1)
    {
        a=a1;
        b=b1;
    }

    void sum ()
    {
        cout<<"The sum of a and b is "<<a+b<<endl;
    }
    
    void display()
    {
        cout<<"The value of a and b is "<<a<<" "<<b<<endl;
    }
 };

int main()

{
    A<int,float> obj1(1,1.25) ;
    obj1.display();
    obj1.sum();
    

    return 0;
}