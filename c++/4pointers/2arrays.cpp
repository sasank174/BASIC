#include<iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;

    // cout<<*p<<endl;
    // cout<<p<<endl;
    cout<<*(p+2)<<endl;
    cout<<p+2<<endl;


    return 0;
}
