#include <iostream>
#include <stack>

int main() {
   std::stack<int> st;
   
    //LIFO principle

   st.push(1);    //{1}
   st.push(2);    //{2,1}
   st.push(3);    //{3,2,1}
   st.push(4);    //{4,3,2,1}

   //indexing is not allowed

   std::cout << st.top() <<'\n';

   st.pop();   //deletes the top element
}