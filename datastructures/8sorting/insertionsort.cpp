// no of comparisions = n-1 = O(n)
// no of swaps = 0 = O(n2)
// time complexity = O(n2)

#include<iostream>
using namespace std;

class insertionsort{
public:
	int temp;
	void sort(int A[],int n){
		for (int i = 1; i < n; i++){
			temp = A[i];
			for (int j = i-1; j >= 0; j--){
				if(A[j]>temp){
					A[j+1] = A[j];
					A[j]=temp;
				}
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
	insertionsort b;
	b.sort(A,n);
	return 0;
}