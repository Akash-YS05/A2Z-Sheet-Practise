#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    //create a temp array
    vector<int> temp;
    int left = low;
    int right = mid+1;

    //merge 2 sorted halves
    while(left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    //copying the rest of elements from left
    while (left<=mid) {
        temp.push_back(arr[left++]);
    }
    while (right<=high) {
        temp.push_back(arr[right++]);
    }

    //copy back to original array
    for (int i=low; i<=high; i++) {
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>&arr, int low, int high) {
    if (low>=high) return;

    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}