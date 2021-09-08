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
    rectangle *p;
    p=&r;
    r.width=5;
    p->height=10;
    cout<<r.area()<<endl;
    cout<<p->area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}

// // creating in heap
// int main()
// {
//     rectangle *p = new rectangle();
//     p->width=5;
//     p->height=10;
//     cout<<p->area()<<endl;
//     cout<<p->perimeter()<<endl;
//     return 0;
// }