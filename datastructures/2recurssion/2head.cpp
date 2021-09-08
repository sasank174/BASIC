#include<iostream>
using namespace std;

void add(int a){
	if (a > 0){
		add(a-1);
		cout<< a <<endl;
	}
}

int main(int argc, char const *argv[]){
	add(10);
	return 0;
}