#include <bits/stdc++.h>

using namespace std;

int main()

{
int a,b ;
    cout <<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    int x=a-b;

    try
    {   
        if(x!=0)
        {
            cout<<"The value is "<<a/x<<endl;
        }
        
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception is caught such as divide a/x"<<endl;
    }
    
    cout<<"End";

    return 0;
}