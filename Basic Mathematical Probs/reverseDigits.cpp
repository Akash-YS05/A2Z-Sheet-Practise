#include <iostream>
#include <cmath>

int reverseNum(int n) {
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
    res = reverseNum(num);
    std::cout << "Reverse: " << res;

}