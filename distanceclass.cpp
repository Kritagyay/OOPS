#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int a1,b1,a2,b2,dis;

    Complex(int,int,int,int);
    void show(void);
};

Complex :: Complex(int x1,int x2,int y1,int y2){
    a1 = x1;
    b1 = y1;

    a2 = x2;
    b2 = y2;

    dis = sqrt(pow((a1-a2),2) + pow ((b1-b2),2)); 
    
}

void Complex :: show(void){
    cout<<"the distance between two points are : "<<dis<<endl;
}

int main(){
    int x1,x2,y1,y2;
    
    cout<<"enter the (x1,y1)"<<endl;
    cin>>x1>>y1;
   
    cout<<"enter the (x2,y2)"<<endl;
    cin>>x2>>y2;

    Complex c(x1,x2,y1,y2);

    c.show();
    return 0;
}