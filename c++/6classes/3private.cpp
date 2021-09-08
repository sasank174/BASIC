#include<iostream>
using namespace std;

class rectangle
{
private:
    int width=0,height=0;
public:
    void setdim(int x,int y){
        if (x>0)
            width = x; 
        if (y>0)
            height = y;     
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
    rectangle r;
    r.setdim(5,10);
    cout<<r.getarea()<<endl;
    cout<<r.getperimeter()<<endl;
    return 0;
}