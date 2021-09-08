// function should be called only at the end of the function this is similar to while loop
#include<iostream>
using namespace std;

void add(int a){
	if (a > 0){
		cout<< a <<endl;
		add(a-1);
	}
}

int main(int argc, char const *argv[]){
	add(10);
	return 0;
}