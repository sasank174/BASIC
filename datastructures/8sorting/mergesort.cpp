// no of comparisions = n-1 = O(n)
// no of swaps = 0 = O(n2)
// time complexity = O(n*log(n))

#include<iostream>
using namespace std;

class mergesort{
public:
	void Merge(int A[], int low, int mid, int high){
		int i = low;
		int j = mid+1;
		int k = low;
		int B[high+1];
		while (i <= mid && j <= high){
			if (A[i] < A[j]){
				B[k++] = A[i++];
			} else {
				B[k++] = A[j++];
			}
		}
		while (i <= mid){
			B[k++] = A[i++];
		}
		while (j <= high){
			B[k++] = A[j++];
		}
		for (int i=low; i<=high; i++){
			A[i] = B[i];
		}
}
	void sort(int A[],int n){
		int p;
		for (p=2; p<=n; p=p*2){
			for (int i=0; i+p-1<n; i=i+p){
				int low = i;
				int high = i+p-1;
				int mid = (low+high)/2;
				Merge(A, low, mid, high);
			}
		}
		if (p/2 < n){
			Merge(A, 0, p/2-1, n-1);
		}
		

		for (int i = 0; i < n; i++){
			cout<<A[i]<<" ";
		}
	}
};

int main(int argc, char const *argv[]){
	int A[] = {5,4,7,3,9,1,8,2,10};
	int n = sizeof(A)/sizeof(A[0]);
	mergesort m;
	m.sort(A,n);
	return 0;
}