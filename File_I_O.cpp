#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
/*         File I/O in C++: Reading and Writing Files

   These are some useful classes for working with files in C++

1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

1.Using the constructor
2.Using the member function open() of the class
An example program is shown below to demonstrate the concept of reading and writing files
*/
{
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("samplefile.txt"); // Write operation
    out << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("samplefile.txt"); // Read operation
    in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}