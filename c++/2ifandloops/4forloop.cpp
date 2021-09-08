#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

  return 0;
}


#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}

// 0
// 1
// 2
// 3

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}

// 0
// 1
// 2
// 3
// 5
// 6
// 7
// 8
// 9