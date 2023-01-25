#include <bits/stdc++.h>

using namespace std;
class number 
{
    int a;
    public:
    number (){
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    
    number (number &obj)
    {
        cout<<"The copy constructor is called /// ";
        a=obj.a;
    }
    void display()
    {
        cout<<"The value is "<<a<<endl;
    }
};
int main()

{
    number x,y,z(5);
    x.display();
    y.display();
    z.display();
    number z1=z;
    z1.display();

    number z2(x);
    z2.display();

    return 0;
}