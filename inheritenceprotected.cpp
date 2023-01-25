#include <bits/stdc++.h>
using namespace std;

class base
{
    protected:
    int a;
    public:
    int b;
};

class derived:protected base
{
  
};
/*
  	                        Public Derivation        	Private Derivation    	   Protected Derivation
Private members           	Not Inherited              	Not Inherited              	Not Inherited              
Protected members           Protected                   Private                     Protected                    
Public members           	Public	                    Private                     Protected         
*/



int main()

{
base b;
derived d;
//cout<<b.a;
    //upar wale line mei error iss liye aayi kyumki usme protected ke members ko access kar rahe thy  

    return 0;
}