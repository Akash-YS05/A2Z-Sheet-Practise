#include <bits/stdc++.h>
using  namespace std;
int main() {
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    int arr[] = {2,5,3,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++) {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for (int i=0; i<n; i++) {
        if (arr[i] < second_small && arr[i] != small) {
            second_small = arr[i];
        }

        if (arr[i] > second_large && arr[i] != large) {
            second_large = arr[i];
        }
    }

    cout << "Second Smallest: " << second_small << endl;
    cout << "Second Largest: " << second_large << endl;
}