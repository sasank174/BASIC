#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;
    
    switch(i){
        case 0:
            cout<<i;
            break;
        case 1:
            cout<<i;
            break;
        default:
            cout<<"invalid";
            break;
    }
    return 0;
}

#include<iostream>

using namespace std;

void DayName(int day)
{
    switch(day){
        case 1:
            cout<<"sun";
            break;
        case 2:
            cout<<"mon";
            break;
        case 3:
            cout<<"tue";
            break;
        case 4:
            cout<<"wed";
            break;
        case 5:
            cout<<"thu";
            break;
        case 6:
            cout<<"fri";
            break;
        case 7:
            cout<<"sat";
            break;
        
    }
    //Display day anem using switch
}

#include<iostream>

using namespace std;

void ArithOpt(int x,int y, int choice)
{
    switch(choice)
    {
        case 1: cout<<x+y;
            break;
        case 2: cout<<x-y;
            break;
        case 3: cout<<x*y;
            break;
        case 4: cout<<x/y;
            break;
    }
    // write switch statement to perform Arithmetic operations
    // depending on choice
}