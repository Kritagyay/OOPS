#include <bits/stdc++.h>

using namespace std;
//Template as a default parameter

template <class T1 =int, class T2=float >
class show 
{
    public:
    T1 a;
    T2 b;

    show (T1 x,T2 y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"The value of a and b is "<<a<<" , "<<b<<endl;
    }
    
};
int main()

{
show <>obj1(1,23.34);
obj1.display();

//we can also change the default arguments while creating the object
show<char,int> obj2('A',23);
obj2.display();
    

    return 0;
}