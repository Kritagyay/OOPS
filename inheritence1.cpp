#include <bits/stdc++.h>

using namespace std;
class employee 
{
public:
    int id;
    int salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 500;
    }
    employee() {}
};

class assistant : public employee
{
public:
    int id;
    int batch;
    assistant(int inpid)
    {
        id = inpid;
        batch = 2;
    }
    void printdata()
    {
        cout << "The batch no. of the assistant is " << endl;
        cout << batch << " ";
    }
};

int main()

{
    employee rohan(4), sohan(8);

    cout << rohan.salary << endl;
    cout << sohan.salary << endl;

    assistant ram(12);
    cout << ram.id<<endl;
    cout << ram.batch<<endl;
    ram.printdata();

        return 0;
}