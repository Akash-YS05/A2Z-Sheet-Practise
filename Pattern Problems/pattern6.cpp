#include <iostream>

int main() {

    int n = 4;

    for(int i = 0; i < n; i++) {
        for (char j = 'A'; j <= 'A'+i; j++) {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }

    return 0;
}