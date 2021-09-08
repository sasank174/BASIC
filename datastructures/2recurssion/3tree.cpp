// calling more than one time
#include<iostream>
using namespace std;

void add(int a){
	if (a > 0){
		cout<< a <<"one"<<endl;
		add(a-1);
		cout<< a <<"two"<<endl;
		add(a-1);
		cout<< a <<"three"<<endl;
	}
}

int main(int argc, char const *argv[]){
	add(3);
	return 0;
}