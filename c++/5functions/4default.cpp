#include<iostream>
using namespace std;

int add(int x, int y,int z=0) {
    return x+y+z;
}

int main()
{
    cout <<add(10,10);
    return 0;
}
