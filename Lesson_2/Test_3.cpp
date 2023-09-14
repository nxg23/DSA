#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

int count_triplets(Node* head) {
    Node* ptr, *ptr_prev, *ptr_next;
    int count = 0;

    for (ptr = head; ptr != NULL; ptr = ptr->next) {
        ptr_prev = ptr->prev;
        ptr_next = ptr->next;

        if (ptr_prev != NULL && ptr_next != NULL) {
            if ((ptr_prev->data + ptr->data + ptr_next->data) == 0)
                count++;
        }
    }

    return count;
}

int main() {
    Node* head = NULL;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        push(&head, x);
    }
    
    cout << count_triplets(head);
    
    return 0;
}
