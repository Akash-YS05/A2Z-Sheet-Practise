#include <iostream>
#include <map>

int main() {
    std::map<int, int> mp;     //key-value pair

    std::map<int, std::pair<int, int>> mpp;      //1 key - 2 values
    std::map< std::pair<int, int>, int> mapp;       // 2 keys - 1 value

    mp[1] = 2;   // {1,2}
    mp.emplace(3,2);  //{2,3}
    mp.insert(2,4);

    mapp[{2,3}] = 10;     //2 keys 1 value

    // std::map<int, int>::iterator val = mp.begin();

    // while (val != mp.end()) {
    //     std::cout << val->first << " " << val->second << '\n';
    //     ++val;
    // }

    std::cout << mp[0];

}