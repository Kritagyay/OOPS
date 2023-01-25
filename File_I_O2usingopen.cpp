#include <bits/stdc++.h>
#include<fstream>
using namespace std;

int main()

{
ofstream out ;
out.open("Samplefile.txt");

// string str;
// cout<<"Enter anything"<<endl;
// getlin(cin,str);
// out<<str;

out<<"aur kaise ho "<<endl;
out<<"Hello hi bye"<<endl;

out.close();


ifstream in;
string s;
in.open("samplefile.txt");
// in>>s; //ye kewal ek word ko read karega kyunki usko white space mill gaya to wo aage read hi nahi karega 
          // to remove this we can use getline but we prefer to use 'eof' operation

while(in.eof()==0)  // giving output the string lines by storing in s until the file reaches the end of it
{
    // in>>s;
    // using getline to fill the whole line in s
    getline(in,s);
    cout<<s<<" ";
}

in.close();
    

    return 0;
}