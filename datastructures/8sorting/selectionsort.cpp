// no of passes = n-1
// no of comparisions = O(n2)
// no of swaps = 0 = O(n2)
// time complexity = O(n2)

#include<iostream>
using namespace std;

class selectionsort{
public:
	int p,q,temp;
	void sort(int A[],int n){
		for (int i = 0; i < n-1; i++){
			p=i;
			q=i;
			while (A[p]){
				if(A[p]<A[q]){
					q=p;
				}
				p++;
			}
			temp = A[q];
			A[q]=A[i];
			A[i]=temp;
		}

		for (int i = 0; i < n; i++){
			cout<<A[i]<<" ";
		}
	}	
};

int main(int argc, char const *argv[]){
	int A[] = {5,3,2,9,7};
	int n = sizeof(A)/sizeof(A[0]);
	selectionsort b;
	b.sort(A,n);
	return 0;
}