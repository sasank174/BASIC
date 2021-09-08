#include<iostream>
using namespace std;

class rectangle
{
public:
    int width,height;
    int area(){
        return width*height;
    }
    int perimeter(){
        return 2*(width+height);
    }
};

int main()
{
    rectangle r;
    r.width=5;
    r.height=10;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}