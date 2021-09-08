#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ifstream & operator>>(ifstream &file,Student &s);
};

ifstream & operator>>(ifstream &file,Student &s){

    file>>s.name>>s.roll>>s.branch;




    return file;
}

int main()
{
    Student s1;
    
    ifstream file("./test.txt");
    
    file>>s1;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    cout<<s1.branch;

    file.close();
    
    return 0;
}
