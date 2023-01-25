#include <iostream>
using namespace std;
class student 
{
  private :
  int roll;
  public:
  
  void setroll(int r)
  {
      roll=r;
  }
  
  void print ()
  {
      cout<<"The roll no is"<<roll<<endl;
  }
};

class test:virtual public student 
{
    public:
    float math,phy;
    void put(float x,float y)
    {
        math=x;
        phy=y;
    }
    
    void show()
    {
        cout<<"The marks in maths and phy are "<<math<<" "<<phy<<endl;
    }
};

class sports:virtual public student
{
  public:
  float s;
  
  void sets(float a)
  {
      s=a;
  }
};

class result: public test,public sports
{
  private:
  float total;
  
  public:
  
  void printres()
  {
      print();
      show();
      total=math+phy+s;
      cout<<"The total marks is "<<total<<endl;
  }
};
int main() {
// 	cout<<"GfG!";
    result obj;
    obj.setroll(2140123);
    obj.put(45,46);
    obj.sets(5);
    obj.printres();
	return 0;
}