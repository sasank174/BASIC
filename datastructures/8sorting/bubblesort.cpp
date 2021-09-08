// compare two elements and replace them
// do until sort n-1 times
// no of passes = n-1
// no of comparisions = n(n-1)/2 = O(n2)
// no of swaps = n(n-1)/2 = O(n2)
// time complexity = O(n2)

#include<iostream>
using namespace std;

class bubblesort{
public:
	int temp,flag;
	void sort(int A[],int n){
		for (int i = 0; i < n-1; i++){
			flag=0;
			for (int j = 0; j < n-1-i; j++){
				if (A[j]>A[j+1]){
					temp = A[j+1];
					A[j+1] = A[j];
					A[j] = temp;
					flag=1;
				}
			}
			if (flag==0){
				break;
			}
		}
		for (int i = 0; i < n; i++){
			cout<<A[i]<<" ";
		}
	}	
};

int main(int argc, char const *argv[]){
	int A[] = {5,3,2,9,7};
	int n = sizeof(A)/sizeof(A[0]);
	bubblesort b;
	b.sort(A,n);
	return 0;
}