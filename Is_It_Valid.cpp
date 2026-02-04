#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;
int sz = 0;


void insertHead(int v) {
    Node* newNode = new Node(v);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    sz++;
}


void insertTail(int v) {
    Node* newNode = new Node(v);
    if (!tail) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    sz++;
}


bool insertAtIndex(int idx, int v) {
    if (idx < 0 || idx > sz) return false;

    if (idx == 0) {
        insertHead(v);
    } else if (idx == sz) {
        insertTail(v);
    } else {
        Node* cur = head;
        for (int i = 0; i < idx - 1; i++) {
            cur = cur->next;
        }

        Node* newNode = new Node(v);
        newNode->next = cur->next;
        newNode->prev = cur;
        cur->next->prev = newNode;
        cur->next = newNode;
        sz++;
    }
    return true;
}


void printLeft() {
    cout << "L -> ";
    Node* cur = head;
    while (cur) {
        cout << cur->val << " ";
        cur = cur->next;
    }
    cout << "\n";
}


void printRight() {
    cout << "R -> ";
    Node* cur = tail;
    while (cur) {
        cout << cur->val << " ";
        cur = cur->prev;
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (!insertAtIndex(X, V)) {
            cout << "Invalid\n";
        } else {
            printLeft();
            printRight();
        }
    }

    return 0;
}
