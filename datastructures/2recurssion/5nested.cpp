// calling func inside a func
#include<iostream>
using namespace std;

int add(int a){
	if (a > 100){
		return a-10;
	}else{
		return add(add(a+11));
	}
}

int main(int argc, char const *argv[]){
	cout<<add(95);
	return 0;
}