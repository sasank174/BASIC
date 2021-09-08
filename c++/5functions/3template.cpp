#include<iostream>
using namespace std;
template<class T>

T add(T x, T y){
    return max(x, y);
    // return x+y;
}

int main()
{
    // int x = add(10,10);
    // float y = add(10.0f,10.5f);


    cout <<add(10,10)<<endl;
    cout <<add(10.0f,10.5f)<<endl;
    return 0;
}
