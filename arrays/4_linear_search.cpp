#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3,5,2,4,7,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num=70;
    bool found = false;

    for (int i=0; i<n; i++) {
        if (arr[i] == num) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)cout << "Element not found" << endl;
}