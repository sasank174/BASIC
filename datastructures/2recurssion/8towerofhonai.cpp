#include<iostream>
using namespace std;

void toh(int n,int a,int b,int c){
	if(n>0){
		toh(n-1,a,c,b);
		cout<<"from "<< a <<" to "<<c<<endl;
		toh(n-1,b,a,c);
	}
}

int main(int argc, char const *argv[])
{
	toh(4,1,2,3);
	return 0;
}
