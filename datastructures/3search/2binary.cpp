#include<iostream>
#include <algorithm>
using namespace std;

struct array
{
	int arr[10],length;
};

int search(struct array arr,int n){
	int l=0,h=arr.length-1,m=(l+h)/2;
	while (l<=h)
	{
		m=(l+h)/2;
		if (arr.arr[m] ==n)
			return m;
		else if (arr.arr[m]>n)
			h=m-1;
		else
			l=m+1;
	}
	return -1;
}

int main(int argc, char const *argv[]){
	struct array arr1 = {{10,20,3,5,2,7,1,25,55,95},10};	
	int asize = sizeof(arr1.arr) / sizeof(arr1.arr[0]);
	sort(arr1.arr, arr1.arr + asize);

	cout<< search(arr1,2000);
	return 0;
}