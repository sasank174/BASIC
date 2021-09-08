#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

void Main(){
    cout<<add(10,5);
}

#include<iostream>
using namespace std;


int Max(int a,int b,int c)

{

    if(a>b && a>c)

    return a;

    else if( b>c)

    return b;

    else return c;

}

void Main()
{
    cout<<Max(7,10,5);
}

#include<iostream>
using namespace std;

int pow(int m,int n){
    int k=1;
    for(int i=0;i<n;i++){
        k=k*m;
    }
    return k;
}

void Main()
{
    cout<<pow(2,5);
}

