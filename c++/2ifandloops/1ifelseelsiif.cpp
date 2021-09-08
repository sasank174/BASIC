#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cin>>i;
    if (i>0)
    {
        cout<<"positive";
    }
    else if (i<0)
    {
        cout<<"negative";
    }
    else
    {
        cout<<"zero";
    }
    
    return 0;
}

void Max3(int a,int b,int c)
{
    if (a>b && a>c)
    {
        cout<<a;
    }
    else if (b>a && b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }

//write nested if statements to print maximum of 3 numbers
    
}


#include<iostream>
#include<cmath>
using namespace std;

void Roots(float a,float b,float c)
{
    float d,r1,r2;
    
    d = sqrt(b*b-4*a*c);
    
    r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    
    if (d==0)
    {
        cout<<"real and equal "<<r1;
    }
    else if (d>0)
    {
        cout<<"real and unequal "<<r1<<" "<<r2;
    }
    else
    {
        cout<<"imaginary";
    }
    
    //calculate d
    // print nature of roots using nested if
}


#include<iostream>
using namespace std;

void Grades(int m1,int m2,int m3)
{
    float Total,Avg;
    
    Total = m1+m2+m3;
    Avg = Total/3.0;
    
    if (Avg>=60)
    {
        cout<<"A";
    }
    else if (Avg>=30 && Avg<60)
    {
        cout<<"B";
    }
    else
    {
        cout<<"C";
    }   
    //write nested if statements to print grades
    
}

#include<iostream>

using namespace std;

void DayName(int day)
{
    if(day==1)
        cout<<"sun";
    else if(day==2)
        cout<<"mon";
    else if(day==3)
        cout<<"tue";
    else if(day==4)
        cout<<"wed";
    else if(day==5)
        cout<<"thu";
    else if(day==6)
        cout<<"fri";
    else
        cout<<"sat";
    //Display day name in 3 letters using else if ladder
}

#include<iostream>

using namespace std;

void MonthName(int m)
{
    if(m==1)
        cout<<"jan";
    else if(m==2)
        cout<<"feb";
    else if(m==3)
        cout<<"mar";
    else if(m==4)
        cout<<"apr";
    else if(m==5)
        cout<<"may";
    else if(m==6)
        cout<<"jun";
    else if(m==7)
        cout<<"jul";
    else if(m==8)
        cout<<"aug";
    else if(m==9)
        cout<<"sep";
    else if(m==10)
        cout<<"oct";
    else if(m==11)
        cout<<"nov";
    else 
        cout<<"dec";
    //display month name using elfe if ladder    
}

#include<iostream>

using namespace std;

void DigitToWord(int d)
{
    if(d==1)
        cout<<"one";
    else if(d==2)
        cout<<"two";
    else if(d==3)
        cout<<"three";
    else if(d==4)
        cout<<"four";
    else if(d==5)
        cout<<"five";
    else if(d==6)
        cout<<"six";
    else if(d==7)
        cout<<"seven";
    else if(d==8)
        cout<<"eight";
    else if(d==9)
        cout<<"nine";
    else if(d==0)
        cout<<"zero";
    //display digit to word using else if ladder
    
}