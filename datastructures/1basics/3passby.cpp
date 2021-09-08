// // call by value

// #include<iostream>

// using namespace std;
// int add(int x,int y){
// 	return x+y;
// }

// int main(int argc, char const *argv[])
// {
// 	int z;
// 	z = add(10,20);
// 	cout<<z;
// 	return 0;
// }

// // call by adress===========================================================

// #include<iostream>
// using namespace std;

// using namespace std;
// int add(int *x,int *y){
// 	*x = 20;
// 	*y = 30;
// 	return *x+*y;
// }

// int main(int argc, char const *argv[])
// {
// 	int x,y,z;
// 	x = 10;
// 	y = 20;
// 	cout<<x<<"=="<<y<<endl;
// 	z = add(&x,&y);//10==20
// 	cout<<z<<endl;//50
// 	cout<<x<<"=="<<y;//20==30
// 	return 0;
// }

// call by reference===========================================================
// giving nicknames
#include<iostream>
using namespace std;

using namespace std;
int add(int &a,int &b){
	a = 20;
	b = 30;
	return a+b;
}

int main(int argc, char const *argv[])
{
	int x,y,z;
	x = 10;
	y = 20;
	cout<<x<<"=="<<y<<endl;
	z = add(x,y);//10==20
	cout<<z<<endl;//50
	cout<<x<<"=="<<y;//20==30
	return 0;
}