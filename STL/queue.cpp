#include <bits/stdc++.h>
using namespace std;

void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {2,1}
    q.push(3); // {3,2,1}
    q.push(4); // {4,3,2,1}
    q.push(5); // {5,4,3,2,1}
    q.push(6); // {6,5,4,3,2,1}

    // Create a copy of the queue to print elements
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << endl; // Use front() instead of top()
        temp.pop();
    }

    // Modify the back element
    q.back() += 5; // Modify the last element
    cout << "Back element after modification: " << q.back() << endl; // prints 11

    // Print the front element
    cout << "Front element: " << q.front() << endl; // prints 1

    // Remove the front element
    q.pop(); // {2,11}
    cout << "New front element after pop: " << q.front() << endl; // prints 2

    // Print size, check if empty, swap functionality (if needed)
    cout << "Queue size: " << q.size() << endl; // prints size of the queue
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // prints whether the queue is empty

    queue<int> q1, q2;
    q1.push(7);
    q2.push(8);
    cout << "Before swap:" << endl;
    cout << "q1 front: " << q1.front() << endl; // prints 7
    cout << "q2 front: " << q2.front() << endl; // prints 8
    q1.swap(q2);
    cout << "After swap:" << endl;
    cout << "q1 front: " << q1.front() << endl; // prints 8
    cout << "q2 front: " << q2.front() << endl; // prints 7
}

int main() {
    explainQueue();
    return 0;
}
