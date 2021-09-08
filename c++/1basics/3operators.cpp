#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=5,b=10,add=0,sub=0,mult=2;
    cout << "ADD";
    add +=a;
    cout << add<<endl;
    add +=b;
    cout << add<<endl;

    cout << "SUB";
    sub -=a;
    cout << sub<<endl;
    sub -=b;
    cout << sub<<endl;
    
    cout << "MULT";
    mult *=a;
    cout << mult<<endl;
    mult *=b;
    cout << mult<<endl;
    mult *=a*b;
    cout << mult<<endl;



    return 0;
}
