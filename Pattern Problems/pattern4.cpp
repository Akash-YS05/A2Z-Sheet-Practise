#include <iostream>

int main() {

    int n = 5;

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i%2) {
                if (j%2) {
                    std::cout << "1 ";
                } else {
                    std::cout << "0 ";
                }
            } else {
                if (j%2) {
                    std::cout << "0 ";
                } else {
                    std::cout << "1 ";
                }
            }
        }
        std::cout << '\n';
    }

    return 0;
}

// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1