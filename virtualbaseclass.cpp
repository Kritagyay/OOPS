#include <bits/stdc++.h>

using namespace std;
/*
    student
       |
    ---------
   |         |
  Test      sports
   |         |
    ---------
        |
      result

*/
class Student
{
protected:
    int roll_no;

public:
    int setnumber(int r)
    {
        roll_no = r;
    }
    void set_number()
    {
        cout << "Your roll nmber is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics, english;

public:
    float setmarks(float m, float p, float e)
    {
        maths = m;
        physics = p;
        english = e;
    }

    void showmarks()
    {
        cout << "Your marks in different subjects is given below :" << endl
             << "Maths = " << maths << endl
             << "Physics = " << physics << endl
             << "English = " << english << endl;
    }
};

class Score : virtual public Student
{
protected:
    int score;

public:
    int setscore(int s)
    {
        score = s;
    }
    void showscore()
    {
        cout << "Your score in sports is : " << score << endl;
    }
};

class result : public Test, public Score
{
public:
    float total;
    void print()
    {
        total = maths + physics + english + score;
        set_number();
        showmarks();
        showscore();
        cout<<"Your final resultr is "<<total<<endl;
        cout<<"Thank you for giving Exams !!!!"<<endl;
    }
};
int main()

{
    result kj;
    kj.setnumber(2140123);
    kj.setmarks(89.5, 75.6, 87.9);
    kj.setscore(9);
    kj.print();
    return 0;
}