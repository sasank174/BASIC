#include<iostream>
using namespace std;

struct one
{
	int length=10;
	int breadth=10;
};

// dscsk


int main()
{
	struct one r1;
	r1.length=30;
	cout<<r1.length<<endl;
	cout<<sizeof(r1.length)<<endl;
	return 0;
}
