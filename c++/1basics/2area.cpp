#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // area of triangle
    
    float b,h,o;
    cout<<"enter b&h";
    cin>>b>>h;
    o = 0.5*b*h;
    cout<<"AREA: "<<o;

    // sum of n numbers

    int n,sum;
    cout<<"enter n";
    cin>>n;
    sum = (n*(n+1))/2;
    cout<<sum;

    // roots

    float a,b,c,root1,root2;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<root1<<endl<<root2;

    // distance between two points

    float x1,x2,y1,y2,distance;
    cout<<"enter x1,y1,x2,y2";
    cin>>x1>>y1>>x2>>y2;

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout<<distance;
    return 0;
}