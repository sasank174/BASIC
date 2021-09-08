// // sum of n numbers
// // time complexity == n and space == n+1
// #include<iostream>
// using namespace std;

// int add(int a){
// 	if (a > 0){
// 		return add(a-1) + a;
// 	}else{
// 		return a;
// 	}
// }

// int main(int argc, char const *argv[]){
// 	cout<<add(5);
// 	return 0;
// }

// ===========================================================================

// // factorial
// #include<iostream>
// using namespace std;

// int add(int a){
// 	if (a > 1){
// 		return add(a-1) * a;
// 	}else{
// 		return a;
// 	}
// }

// int main(int argc, char const *argv[]){
// 	cout<<add(5);
// 	return 0;
// }


// ===========================================================================

// // power
// #include<iostream>
// using namespace std;

// int add(int b , int p){
// 	if (p > 1){
// 		return add(b,p-1)*b;
// 	}else{
// 		return b;
// 	}
// }

// int main(int argc, char const *argv[]){
// 	cout<<add(2,0);
// 	return 0;
// }

// ===========================================================================

// power less no of iterations
#include<iostream>
using namespace std;

int add(int b , int p){
	if (p == 0){
		return 1;
	}else if (p%2 == 0)
	{
		return add(b*b,p/2);
	}else{
		return b*add(b*b,(p-1)/2);
	}
	
}

int main(int argc, char const *argv[]){
	cout<<add(2,10);
	return 0;
}

