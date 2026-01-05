#include <iostream>
#include <vector>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i =0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[i]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}