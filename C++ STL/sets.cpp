//Sets - Sorted. Unique.

#include<iostream>
#include <set>
#include <unordered_set>

int main() {

    std::set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(1);    //will not store duplicate
    st.emplace(3);
    st.emplace(4);
    st.emplace(5);

    for (auto val : st) {
        std::cout << val << " ";
    }

    auto it = st.find(7);      //if found, it gives the iterator to that address and if not then the end value
    std::cout << *(it);

    st.erase(4);    //removes 4
    int cnt = st.count(1);   //returns 1 or 0 if found or not


    //rest properties similar to vector

    std::multiset<int> ms;
    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.insert(1);  //{1,1,1}    stores multiple occurences
    ms.insert(1);

    // ms.erase(1);   //erase all 1's
    ms.count(1);   //counts number of 1's

    ms.erase(ms.find(1));    //this erases the particular value in the address so it removes only one 1
    // ms.erase(ms.find(1), ms.find(1)+2);   //erases 1st and 2nd value

    //rest same as sets

    std::unordered_set<int> us;    //values stored randomly
     

}
