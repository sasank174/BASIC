#include<iostream>
using namespace std;

void add(int a);
void sub(int a);
void mul(int a);

void add(int a){
	if (a > 0){
		cout<< a <<endl;
		sub(a-1);
	}
}

void sub(int a){
	if (a > 0){
		cout<< a <<endl;
		mul(a*1);
	}
}

void mul(int a){
	if (a > 0){
		cout<< a <<endl;
		add(a-1);
	}
}

int main(int argc, char const *argv[]){
	add(10);
	return 0;
}