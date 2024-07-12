#include <iostream>
#include <cmath>

bool prime(int n) {
    int temp=0;
    for (int i = 1; i <= n; i++) {
        if (n%i==0) {
            temp++;
        }
    }

    if (temp==2){
        return true;
    } else {
        return false;
    }  

}

int main() {

    int num;
    bool res;
    std::cout << "Num: ";
    std::cin >> num;
    res = prime(num);
    if (res) {
        std::cout << "Prime";
    } else std::cout << "Not prime";
    

}