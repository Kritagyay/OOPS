#include <bits/stdc++.h>

using namespace std;
class A
{
    public:
    int data;

    //The method below is known as defining of a constuctor and intialisaton of data 
    // A(int i):data(i)
    // {
    //     cout<<"The value of data is "<<data<<endl;
    // }

    void setdata(int a)
    {
        data=a;
    
    }
    void getdata()
    {
        cout<<"The value of data is "<<data<<endl;
    }
};
int main()

{
     A obj1;
    // obj1.setdata(20);
    // obj1.getdata();

    // A *ptr=&obj1;
    A *ptr;
    (*ptr).setdata(34);  //We use paraanthesis in ptr because the dot operator 
                         //has more precedence than * operator so it is important to use paranthesis 
    (*ptr).getdata();


    //we can also dereference the pointer to the object using arrow operartor
    A *ptr1=&obj1;
    ptr1->setdata(2);
    ptr1->getdata();
    
    return 0;
}