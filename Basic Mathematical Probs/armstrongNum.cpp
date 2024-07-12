#include <iostream>
#include <cmath>

int armstrongNum(int n) {

    int temp = 0;
    while (n > 0) {
        temp += (n % 10)*(n % 10)*(n % 10);
        n/=10;
    }
    return temp;

}

int main() {

    int num1;
    int res;
    std::cout << "Num 1: ";
    std::cin >> num1;

    res = armstrongNum(num1);
    if (res == num1) {
        std::cout << "Armstrong number";
    } else std::cout << "Not an armstrong number";

}