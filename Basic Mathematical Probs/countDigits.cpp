#include <iostream>
#include <cmath>


int main() {

    int num;
    //BRUTE FORCE-
    // int temp = 0;
    // while (num > 0) {
    //     temp+=1;
    //     num /= 10;
    // }

    //OPTIMAL CODE-

    std::cout << "Enter the number: ";
    std::cin >> num;

    int temp = (int)(log10(num) + 1);

    std::cout << "Number of digits = " << temp;
}

