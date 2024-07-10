#include <iostream>

using namespace std;

int main() {
    pair<int, string> p = {1,"akash"};

    pair<int, pair<int, int>> a = {1, {2, 3}};

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << p.first << " " << p.second << '\n';
    cout << a.first << " " << a.second.first << " " << a.second.second;
    cout << '\n' << arr[1].second;

    return 0;
}