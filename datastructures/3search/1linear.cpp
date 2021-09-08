#include<iostream>
using namespace std;

struct array
{
	int arr[10],length;
};

int search(struct array * arr,int n){
	for (int i = 0; i < arr->length; i++)
	{
		if (arr->arr[i] ==n)
			return n;
	}
	return -1;
}

int main(int argc, char const *argv[]){
	struct array arr1 = {{10,20,3,5,2,7,1,25,55,95},10};	
	cout<< search(&arr1,1000);
	return 0;
}