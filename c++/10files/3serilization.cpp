#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &file,Student &s);
};

ofstream & operator<<(ofstream &file,Student &s){
    file<<s.name<<endl;
    file<<s.roll<<endl;
    file<<s.branch;

    return file;
}

int main()
{
    Student s1;

    s1.name="sasank";
    s1.roll=10;
    s1.branch="it";
    
    ofstream file("./test.txt",ios::trunc);

    // file<<s1.name<<endl;
    // file<<s1.roll<<endl;
    // file<<s1.branch;

    file<<s1;

    
    file.close();
    
    return 0;
}
