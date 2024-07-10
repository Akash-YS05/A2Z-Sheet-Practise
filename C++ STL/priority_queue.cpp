#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;       //larger element are over smaller elements
    pq.push(2);    //{2}
    pq.push(6);    //{6, 2}
    pq.push(4);    //{6, 4, 2}
    pq.push(10);   //{10, 6, 4, 2 }

    pq.top();   //10
    pq.pop();   //deletes 10
}