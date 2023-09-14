#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insert(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    new_node->prev = NULL;
    if (head != NULL)
        head->prev = new_node ;
    head = new_node;
}

int count_triplets() {
    Node* node = head;
    int count = 0;
    while (node != NULL && node->next != NULL && node->next->next != NULL) {
        if (node->data + node->next->data + node->next->next->data == 0)
            count++;
        node = node->next;
    }
    return count;
}


int main() {
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        insert(x);
    }
    cout << count_triplets();
}
