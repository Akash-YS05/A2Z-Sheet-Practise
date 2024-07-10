#include <iostream>

int main() {

    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int m = n-i-1; m >0; m--){
            std::cout << "-";
        }
        for (int j = 1; j <= i + (i+1); j++) {
            std::cout << "*";
        }
        for (int p = n-i-1; p > 0; p--){
            std::cout << "-";
        }
        std::cout << '\n';
    }

    return 0;
}


// ----*----
// ---***---
// --*****--
// -*******-
// *********