#include <bits/stdc++.h>

using namespace std;

int main()

{
int a=4;
int *ptr=(&a);
cout<<"tHE VALUE IS "<<(*ptr)<<endl;

// new operator 

int *p= new int (5);
cout <<"The vale at address p is "<<*p<<endl;


float *q=new float (34.44);
cout <<"The vale at address q is "<<*q<<endl;

int *arr=new int [5];
arr[0]=4;
arr[1]=5;
arr[2]=6;
arr[3]=8;

delete [] arr;
delete p;

cout<<"The value of arr[0] is "<<arr[0]<<endl;
cout<<"The value of arr[1] is "<<arr[1]<<endl;
cout<<"The value of arr[2] is "<<arr[2]<<endl;
cout<<"The value of arr[3] is "<<arr[3]<<endl;

    
    int *arr1=new int [5];
    for (int i = 0; i < 5; i++)
    {
       cin>>arr[i];

    }

    cout<<"The array you have entered "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     return 0;
}