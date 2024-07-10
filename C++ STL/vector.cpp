//vector - a container which is dynamic in nature.

/*#include <iostream>

using namespace std;

int main() {
    

    return 0;
}*/

#include <iostream>
#include <vector>



int main() {
    std::vector<int> v;

    v.push_back(1);
    v.emplace_back(2);      //both are similar, but this is generally faster
    
    // std::vector<int> v(5, 100);    //5 instances of 100
    std::vector<int>v1(5, 20);
    std::vector<int>v2(v1);      //vector v1 as an input to vector v2


    // std::vector<std::pair<int, int>> vec;    //pair and int data type inside vector
    // vec.push_back({1,2});
    // vec.emplace_back(1,2,3);

    std::cout << v[0] << " " << v[1] << "\n";

    return 0;
}