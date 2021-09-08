// compare two elements and replace them
// do until sort n-1 times
// no of passes = n-1
// no of comparisions = n(n-1)/2 = O(n2)
// no of swaps = n(n-1)/2 = O(n2)
// time complexity = O(n2)

#include<iostream>
using namespace std;

class countsort{
public:
	void sort(int A[],int n){
		int max=0;
		for (int i = 0; i < n; i++){
			if(A[i]>max){
				max = A[i];
			}
		}
		max++;
		int *F=new int[max];
		for (int i = 0; i < max; i++){
			F[i]=0;
		}
		for (int i = 0; i < n; i++){
			F[A[i]]++;
		}

		int j=0;
		for (int i = 0; i < max; i++){
			int p = F[i];
			while(p){
				A[j]=i;
				j++;
				p--;
			}
		}
		delete [] F;
		
		for (int i = 0; i < n; i++){
			cout<<A[i]<<" ";
		}
	}	
};

int main(int argc, char const *argv[]){
	int A[] = {5,3,2,2,1,2,3,4,5,6,7,8,9,9,7};
	int n = sizeof(A)/sizeof(A[0]);
	countsort b;
	b.sort(A,n);
	return 0;
}