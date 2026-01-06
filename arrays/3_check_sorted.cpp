#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1, 2, 2, 4, 5};

    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSort = false;
    for (int i=0; i<n; i++) {
        if (arr[i] < arr[i-1]) {
            isSort = false;
        } else isSort = true;
    }

    if (isSort) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }
}