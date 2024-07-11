#include <iostream>
#include <cmath>

int palindrome(int n) {
    int rev = 0, temp;
    while(n > 0) {
        temp = n % 10;
        rev = (rev * 10) + temp;
        n /= 10;
    }
    return rev;

}

int main() {

    int num, res;
    std::cout << "Num: ";
    std::cin >> num;
    res = palindrome(num);
    if (res == num) {
        std::cout << "Palindrome";
    } else std::cout << "Not palindrome";
    

}