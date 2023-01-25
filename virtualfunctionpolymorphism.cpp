#include <bits/stdc++.h>

using namespace std;
class Base
{
    public:
    int base_val;
    virtual void display()
    {
        cout<<"1.The value of base_val is "<<base_val<<endl;
    }
};

class derived:public Base
{
    public:
    int derived_val=85;
    void display()
    {
        cout<<"2.The value of derived_val is "<<base_val<<endl;
        cout<<"2.The value of derived_val is "<<derived_val<<endl;
    }
};
int main()

{
    Base *base_pointer ;
    Base obj_base;
    derived obj_derived;

    base_pointer=&obj_derived;
    base_pointer->base_val=23;
    
    base_pointer->display();// ab yahan par default wala base class ka display function na run karkey 
                            // derived class ka display run karega kyunki virtual function bana 
                            // diya humne base class ke display ko isliye 

    

    return 0;
}