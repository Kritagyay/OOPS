#include <bits/stdc++.h>
using namespace std;
class student
{

protected:
    int roll_no;
    // char name;
public:
    int getrollno(int);
    void getdetail();
};

int student::getrollno(int a)
{
    roll_no = a;
}

void student ::getdetail()
{
    cout << "The roll no of the student is " << roll_no << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics, chemistry, biology, hindi;

public:
    float setnumber(float, float, float, float, float);
    void displaynumber()
    {
        cout << "The marks obtained in maths is " << maths <<endl;
        cout << "The marks obtained in physics  is " << physics <<endl;
        cout << "The marks obtained in chemistry is " << chemistry <<endl;
        cout << "The marks obtained in biology is " << biology <<endl;
        cout << "The marks obtained in hindi is " << hindi <<endl;
    }
};

float exam::setnumber(float a, float b, float c, float d, float e)
{
    maths = a;
    physics = b;
    chemistry = c;
    biology = d;
    hindi = e;
}
class result : public exam
{
public:
    float percentage;

    void display()
    {
        getdetail();
        displaynumber();
        percentage = (maths + physics + hindi + chemistry + biology) / 5;
        cout << "The result of the student is " << percentage << "%" << endl;
    }
};

int main()
{
    result venom;
    venom.getrollno(2140123);
    // venom.getdetail();

    venom.setnumber(95.4, 92.4, 98, 95.3, 91.1);
    // venom.displaynumber();

    venom.display();
    return 0;
}
