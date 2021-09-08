#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file("./test.txt");
    // ifstream file;
    // file.open("./test.txt");

    // if (file)cout<<code.......
    if (!file.is_open())
    {
        cout<<"no such file exist";
    }else{
        string data;

        while (file >> data)
        {
            cout << data<<endl;
        if (file.eof())
        {
            cout<<"===================================ended===================================";
            exit;
        }
        }
        
        
    }
    
    
    file.close();


    return 0;
}
