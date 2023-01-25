#include <bits/stdc++.h>

using namespace std;
class unary 
{
    int x,y;
    public:
    unary(int i=0,int j=0)
    {
        x=i;
        y=j;
    }

    void  operator -()
    {
       x= -x;
       y= -y;
    }

   //  friend void operator -(unary &obj);
    void print()
    {
        cout<<"The value of x and y is "<<x<<" "<<y<<endl;
    }
};
// void  operator -(unary &obj)
// {
//     obj.x=-obj.x;
//     obj.y=-obj.y;
// }
int main()

{
unary obj(-2,-3);
obj.print();

- obj;
obj.print();



    return 0;
}

                        //COPY CONSTRUCTOR
// #include <iostream>
// using namespace std;
// class sample 
// {
//     public:
//     int i;
//     sample(int a)
//     {
//         i=a;
//     }

//     sample (sample &obj)
//     {
//         i=obj.i;
//     }

//     void print ()
//     {
//         cout<<"The value of i is "<<i<<endl;
//     }
// };

// int main()
// {
//     sample obj1(4);
//     obj1.print();

//     sample obj2=obj1;
//     obj2.print();
// }


                            //Static data member
// #include <bits/stdc++.h>

// using namespace std;
// class student 
// {
//     public:
//     int roll;

// static int count ;
//     student (int r)
//     {
//         roll=r;
//         count++;
//     }

//     void print()
//     {
//         cout<<"The  value of the roll no is "<<roll<<endl;
//     }

//     static void display()
//     {
//         cout<<"The count is "<<count <<endl;
//     }
    
// };
// int student::count=0;
// int main()

// {
//     student a(1),b(2),c(3);
//     a.display();

    

//     return 0;
// }

                        //Operator Overloading 
                        //Unary operator 

// #include <bits/stdc++.h>

// using namespace std;
// class unary
// {
//     public:
//     int x;

//     unary(){}
//     unary(int i)
//     {
//         x=i;
//     }

//     void operator -()
//     {
//         x=-x;
//     }

//     void print()
//     {
//         cout<<"The value of x"<<x<<endl;
//     }
// };
// int main()

// {
//     unary obj(2) ;
//     -obj;
//     obj.print();
    

//     return 0;
// }


                            //Binary overloading
// #include <bits/stdc++.h>

// using namespace std;
// class binary
// {
//     public:
//      char s[100];

//      binary()
//      {}

//      binary (char str1[])
//      {
//         strcpy(s,str1);
//      }
//      binary operator + (binary &str)
//      {
//         binary str3;
//         str3=strcat(s,str.s);
//         return str3;
//      }

//      void print()
//      {
//         cout<<s<<endl;
//      }
// };
// int main()

// {
//     char s[]="Hello";
//     char s1[]="World";

//     binary obj(s);
//     binary obj1(s1);

//     binary s3;
//     s3=obj+obj1;
//     s3.print();
    

//     return 0;
// }








































































