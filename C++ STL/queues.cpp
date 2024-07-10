#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(3);    //{1,2,3}

    q.back()++;      //3+1 = 4
    q.front();    //1
    q.pop();     //deletes front value
}