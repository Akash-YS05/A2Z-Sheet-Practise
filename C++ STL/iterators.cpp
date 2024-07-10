#include <iostream>
#include <vector>

int main() {

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    std::vector<int>::iterator it = v.begin();       //v.begin() gives the memory address of the first value in the vector
    std::vector<int>::iterator ite = v.end();        //points to a memory location right after the last value in the vector
    // std::vector<int>::iterator it = v.rend();       //reverse end
    // std::vector<int>::iterator it = v.rbegin();       //reverse begin

    it++;    //moves to the next memory address
    // it+=2;
    ite--;
    std::cout << *(it) << '\n';
    std::cout << *(ite) << '\n';
    std::cout << v.back() << '\n';
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        std::cout << *(i) << '\n';
    }


    //short form   (auto - automatically assigns the data type)
    for(auto itr = v.begin(); itr != v.end(); itr++) {
        std::cout << *(itr) << '\n';
    }

    for (auto itt : v) {
        std::cout << itt << '\n';     //for each loop, here we are taking v, not v.begin() or anything so data type is INT 
    }

    v.erase(v.begin() + 5);     //erases the 6th element
    v.erase(v.begin()+1, v.begin()+3);     //removes the 2nd and 3rd element. v.begin() + 1 is the 1st element to delete, next value is supposed to be the address of the value right next to the last value we want to delete


    std::vector<int> vec(2, 100);      //2 instances of 100
    std::cout << vec[0] << " " << vec[1] << '\n';

    vec.insert(vec.begin(), 300);       //inserts 300 right at the beginning
    vec.insert(vec.begin()+1, 2, 200);    //2 instances of 200 at the 2nd position
    
    std::vector<int> vec2(2, 250);
    vec.insert(vec.begin()+3, vec2.begin(), vec2.end());     //copies entire vec2 in vec1 
}