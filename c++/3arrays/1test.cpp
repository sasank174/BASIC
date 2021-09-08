#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++) {
        cout << i << ": " << cars[i] << "\n";
    }
    
    // if using int variables
    
    int A[]={1,2,3,4,5,6,7};

    for(int i:A){
        cout<<i << ": " << A[i]<< "\n";
        cout<<&A[i]<<endl;
    }
  return 0;
}
