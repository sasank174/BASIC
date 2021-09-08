// ===========================================================================
// // sum: sum(n-1)+n
// // fact: fact(n-1)*n
// // pow: pow(x,n-1)*x

// // tailor series
// #include<iostream>
// using namespace std;

// double tailor(int x , int n){
// 	static double p=1,f=1;
// 	double r;

// 	if (n==0){
// 		return 1;
// 	}
// 	else{
// 		p = p*x;
// 		f = f*n;
// 		return tailor(x,n-1) + p/f;
// 	}
	
	
// }

// int main(int argc, char const *argv[]){
// 	cout<<tailor(2,3);
// 	return 0;
// }


// ===========================================================================
// // sum: sum(n-1)+n
// // fact: fact(n-1)*n
// // pow: pow(x,n-1)*x

// // tailor series using homers rule
// #include<iostream>
// using namespace std;

// double tailor(int x , int n){
// 	static double s;

// 	if (n==0){
// 		return s;
// 	}else{
// 		s=1+x*s/n;
// 		return tailor(x,n-1);
// 	}
// }

// int main(int argc, char const *argv[]){
// 	cout<<tailor(2,3);
// 	return 0;
// }

// ===========================================================================

// // fibbanocci series
// #include<iostream>
// using namespace std;

// int fibonacci(int c){
// 	static int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
// 	if(c<=1){
// 		arr[c] = c;
// 		return c;
// 	}
// 	else{
// 		if(arr[c-2] == -1){
// 			arr[c-2] = fibonacci(c-2);
// 		}
// 		if(arr[c-1] == -1){
// 			arr[c-1] = fibonacci(c-1);
// 		}
// 		return arr[c-2]+arr[c-1];
// 	}
// }

// int main(int argc, char const *argv[]){
// 	cout<<fibonacci(7);
// 	return 0;
// }


// ===========================================================================

// nCr
#include<iostream>
using namespace std;

// double fact(double x){
// 	if (x<=1){
// 		return 1;
// 	}else{
// 		return fact(x-1)*x;
// 	}
// }
// 
// double ncr(int n,int r){
// 	double f1,f2,f3;
// 	if(r==0 || n==r){
// 		return 1;
// 	}else{
// 		f1 = fact(n);
// 		f2 = fact(r);
// 		f3 = fact(n-r);
// 		return f1/(f2*f3);
// 	}
// 	return 0;
// }
double ncr(int n,int r){
	double f1,f2,f3;
	if(r==0 || n==r){
		return 1;
	}else{
		return ncr(n-1,r-1)+ncr(n-1,r);
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	cout<<ncr(5,2);
	return 0;
}
