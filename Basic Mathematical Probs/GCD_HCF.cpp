#include <iostream>
#include <cmath>

int gcd(int n, int m) {

    int gcdNum = 1;
    int big = n > m ? m : n;
    for (int i=1; i <= big/2; i++) {
        if (n%i==0 && m%i==0) {
            gcdNum = i;
        }
    }
    return gcdNum;

}

int main() {

    int num1, num2;
    int res;
    std::cout << "Num 1: ";
    std::cin >> num1;
    std::cout << "Num 2: ";
    std::cin >> num2;
    res = gcd(num1, num2);
    std::cout << "GCD = " << res;

}