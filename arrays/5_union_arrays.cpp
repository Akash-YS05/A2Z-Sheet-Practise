#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {2,3,4,4,5};
    int n = 5, m = 5;

    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            if (unionArr.empty() || unionArr.back() != arr2[j])
                unionArr.push_back(arr2[j]);
            j++;
        }
        else {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while (i < n) {
        if (unionArr.back() != arr1[i])
            unionArr.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        if (unionArr.back() != arr2[j])
            unionArr.push_back(arr2[j]);
        j++;
    }

    for (int x : unionArr)
        cout << x << " ";
}
