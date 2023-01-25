#include <bits/stdc++.h>

using namespace std;
class Base
{
    public:
    int base_val;
    void display()
    {
        cout<<"Base class is called "<<endl;
        cout<<"The value of base_val is "<<base_val<<endl;
    }
};

class derived:public Base
{
    public:
    int derived_val;
    void display()
    {
        cout<<"The value of derived_val is "<<base_val<<endl;
        cout<<"The value of derived_val is "<<derived_val<<endl;
    }
};
int main()

{
    Base obj_base;
    Base *base_pointer;
   
    derived obj_derived;
    base_pointer=&obj_derived; //pointing base class pointer to derived class object 

    base_pointer->base_val=21;
    //base_pointer->derived_val=211; // base class pointer cn't aceess the member of derived class 
                                    //as it is a pointer of base class 

    base_pointer->display(); // yahan par jo pointer hai wo base class ka hai lekin wo point derived class ke object 
                             //ko kar rahaa hai par hum jab display function ko run kar rahe hai toh wo base class 
                             //ke display se jaake bind ho raha hai isliye ye run time polymorphism hai
                             // ye default behaviour hota hai compiler ka lekin hum isko change kar sakte hai with the help of virtual function


    derived *ptr1=&obj_derived;
    ptr1->base_val=23;
    ptr1->derived_val=45;

    ptr1->display();

    return 0;
}