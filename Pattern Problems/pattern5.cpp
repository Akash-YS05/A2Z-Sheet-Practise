#include <iostream>

int main() {

    int n = 4;

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }

        for (int p = 2*(n-i); p > 0; p--) {
            std::cout << " ";
        }

        for (int j = i; j > 0; j--) {
            std::cout << j;
        }
        std::cout << '\n';
    }

    return 0;
}



// 1      1
// 12    21
// 123  321
// 12344321