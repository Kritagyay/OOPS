// #include <bits/stdc++.h>

// using namespace std;
// void swap(int,int );
// int main()

// {
// int x,y;
// cout<<"Enter teh value of x and y "<<endl;
// cin>>x>>y;
// cout<<"The value of x and y before swapping is "<<x<<" "<<y<<endl;

// swap(x,y);
// // cout<<"The value of x and y after swapping is "<<x<<" "<<y;
    

//     return 0;
// }

// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<a<< " " <<b;
// }



// CALL BY REFERENCE USING POINTER 
// #include <bits/stdc++.h>

// using namespace std;
// void swap(int *a,int*b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()

// {
// int x,y ;
//  cout<<"Enter the value of x and y "<<endl;
//  cin>>x>>y;
//  cout<<"The value of x and y before swapping is "<<x<<" "<<y<<endl;

//  swap(&x,&y);
//  cout<<"The value of x and y after swapping is "<<x<<" "<<y<<endl;
    

//     return 0;
// }



// CALL BY REFERENCE USING REFERENCE 
#include <bits/stdc++.h>

using namespace std;
void swap (int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()

{
int a,b;
cout<<"Enter the value ";
cin>>a>>b;
cout<<"The value of a and b before swapping is "<<a<<" "<<b<<endl;

swap(a,b);
cout<<"The value after swapping is " <<a<<" "<<b<<endl;  
    

    return 0;
}