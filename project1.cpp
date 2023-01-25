#include <bits/stdc++.h>
using namespace std;

class simplecalci
{
protected:
    float a, b;
    char op;

public:
    void process()
    {
        cout << "Enter an operand "
             << " ( + , - , * , / )" << endl;
        cin >> op;
        switch (op)
        {
        case '+':
            cout << "Enter the value of a and b " << endl;
            cin >> a >> b;
            cout << a + b << " is the sum of two numbers" << endl;
            break;
        case '-':
            cout << "Enter the value of a and b " << endl;
            cin >> a >> b;
            cout << a - b << " is the difference of two numbers" << endl;
            break;
        case '*':
            cout << "Enter the value of a and b " << endl;
            cin >> a >> b;
            cout << a * b << " is the product of two numbers" << endl;
            break;
        case '/':
            cout << "Enter the value of a and b " << endl;
            cin >> a >> b;
            cout << a / b << " is the division of two numbers " << endl;
            break;

        default:
        cout<<"You have entered an invalid input ..... "
        <<"SORRY !!!!!"<<"\n"
        <<"OOPS "<<endl;
        cout<<"\n";
        }
    }
};

class scientificcalci
{
protected:
    float a, b;
    int z;

public:
    void Power(float, float);
    void Sine(float);
    void Square(float);
    void Cos(float);
    void Tan(float);
    void Log(float);                                                                 

    void processscif()
    {
        cout<<"Now you are using scientific calculator "<<endl;
        cout << "WHAT YOU WANT TO FIND: " << endl;
        cout << "Press '1' for Power: " << endl;
        cout << "Press '2' for Sin: " << endl;
        cout << "Press '3' for Squareroot: " << endl;
        cout << "Press '4' for Cos: " << endl;
        cout << "Press '5' for Tan: " << endl;
        cout << "Press '6' for Log: " << endl;

        cin >> z;
        switch (z)
        {
        case 1:
            cout << "Enter the Number for Calculating its Power: " << endl;
            cin >> a;
            cout << "Enter the Power for a Number: " << endl;
            cin >> b;
            Power(a, b);
            break;

        case 2:
            cout << "Enter the Number for Calculating SIN: " << endl;
            cin >> a;
            Sine(a);
            break;

        case 3:
            cout << "Enter the Number for Calculating Squareroot: " << endl;
            cin >> a;
            Square(a);
            break;

        case 4:
            cout << "Enter the Number for Calculating COS: " << endl;
            cin >> a;
            Cos(a);
            break;

        case 5:
            cout << "Enter the Number for Calculating TAN: " << endl;
            cin >> a;
            Tan(a);
            break;

        case 6:
            cout << "Enter the Number for Calculating LOG: " << endl;
            cin >> a;
            Log(a);
            break;
        }
    }
};

void scientificcalci::Power(float x, float y)
{
    float p;
    p = pow(x, y);
    cout << "Power: " << p<<endl;
}

void scientificcalci::Sine(float x)
{
    float s;
    s = sin(x);
    cout << "Sin: " << s<<endl;
}

void scientificcalci::Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout << "Square of a Given Value is: " << sq<<endl;
}

void scientificcalci::Cos(float x)
{
    float c;
    c = cos(x);
    cout << "COS: " << c<<endl;
}

void scientificcalci::Tan(float x)
{
    float t;
    t = tan(x);
    cout << "TAN: " << t<<endl;
}

void scientificcalci::Log(float x)
{
    float l;
    l = log(x);
    cout << "Natural Logarithm: " << l<<endl;
}

class hybrid : public scientificcalci,public simplecalci
{
public:
    void result()
    {
        process();                                                                
        processscif();
        //void processscif();
        cout<<"Thank you for using the calculator."<<endl;
        cout<<"BYEE !!!!"<<endl;

    }
};
int main()

{
     hybrid obj;
     obj.result();
    // simplecalci obj;
    // obj.setnumber(5,8.3);
    // obj.process();

    // scientificcalci ob;
    // ob.processscif();

    return 0;
}