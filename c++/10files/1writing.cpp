#include<iostream>
#include<fstream>
using namespace std;

// ios::app------append data
// ios::trunc ----- replace data

int main()
{
    ofstream outfile("./test.txt",ios::trunc);
    
    outfile<<"Hello"<<endl;
    outfile<<38942;
    
    outfile.close();


    return 0;
}
