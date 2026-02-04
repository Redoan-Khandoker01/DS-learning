#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class Stack {
public:
    Node* top;

    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        int val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }

    bool empty() {
        return top == NULL;
    }
};

//---------- Q
class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = rear = NULL;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int pop() {
        int val = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL)
            rear = NULL;

        return val;
    }

    bool empty() {
        return front == NULL;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    if (n != m) {
        cout << "NO";
        return 0;
    }

    Stack st;
    Queue q;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!st.empty()) {
        if (st.pop() != q.pop()) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
