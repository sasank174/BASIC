#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=10,b=10;
    cout<<a<<"--"<<b<<endl;
    b=a++;
    cout<<a<<"--"<<b<<endl;
    b=++a;
    cout<<a<<"--"<<b<<endl;
    b=a--;
    cout<<a<<"--"<<b<<endl;
    b=--a;
    cout<<a<<"--"<<b<<endl;
    
    return 0;
}
