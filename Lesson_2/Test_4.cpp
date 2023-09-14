#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

class Queue {
public:
Node *front;
Node *rear;
Queue(){
	this->front = NULL;
	this->rear = NULL;
}
void enqueue(int x)
{
    Node *newNode = new Node(x);
    if(rear == NULL){
		front = rear = newNode;
		return;
	}
        rear->next = newNode;
        rear = newNode;
}

void dequeue()
{
	if(front == NULL) return;
	front = front->next;
	if(front == NULL){
		rear =NULL;
	}
}

void print()
{
	Node *temp = front;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next ;
	}
    cout << endl ;
}
};

int main() {
    int n;
    cin >> n;
    Queue q;
    while(n--) {
        string method;
        int x;
        cin >> method;
        if (method == "enqueue") {
            cin >> x;
            q.enqueue(x);
        }
        else if (method == "dequeue") {
            q.dequeue();
        }
    }
    q.print();
    return 0;
}
