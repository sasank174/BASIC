#include<iostream>
using namespace std;

class rectangle
{
private:
    int width,height;
public:
    rectangle(int w=0,int h=0){
        setdim(w,h);
    }
    void setdim(int x=0,int y=0){
        if (x>0)
            this->width = x; 
        if (y>0)
            this->height = y;     
    }
    int getarea(){
        return width*height;
    }
    int getperimeter(){
        return 2*(width+height);
    }
};

int main()
{
    // rectangle r;
    // cout<<r.getarea()<<endl;
    // cout<<r.getperimeter()<<endl;
    rectangle r(2,2);
    cout<<r.getarea()<<endl;
    cout<<r.getperimeter()<<endl;
    r.setdim(5,10);
    cout<<r.getarea()<<endl;
    cout<<r.getperimeter()<<endl;
    return 0;
}