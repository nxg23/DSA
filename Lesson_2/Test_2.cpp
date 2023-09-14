#include<iostream>
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

class linkList{
	public:
	
void print(Node *head)
{
	cout << "Output: ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insert(Node *&head, int post, int val)
{
	int n = sizeof(head);
	Node *temp = head;
	Node *newNode = new Node(val);
	if(post < 0 || post > n) return;
	if(post == 0){
		newNode->next = head;
		head = newNode;
	}
	 // insert tail
    else if(post == n){
     if(head == NULL)
     {
        head = newNode; return;
     }

     while(temp->next != NULL){
        temp = temp->next;
     }
     temp->next = newNode;
    }
    //insert post
    else{
     for(int i = 1; i <= post - 2; i++){
        temp = temp->next;
     }
     newNode->next = temp->next;
     temp->next = newNode;
    }
    
}


void erase(Node *&head, int post)
{
    int n = sizeof(head);
    Node *temp = head;
    Node *postNode = NULL;
    if(post < 0 || post > n) return;
    // erase head
    if(post == 0){
      head = head->next;
      delete temp ;
    }
    // erase tail
    else if(post == n){
      while (temp->next->next != NULL)
      {
        temp = temp->next;
      }
      postNode = temp->next;
      temp->next = NULL;
      delete postNode;
    }
    
    //erase post
    else{
      for(int i = 1; i <= post - 2; i++){
        temp = temp ->next;
      }
      temp->next = temp->next->next;
      postNode = temp->next;
      delete postNode;
    }
}

};
void menu(int T)
{
	linkList linklist;
    int post, val;
    Node *head = NULL;
	while (T--)
    {
        int chon;
        cout << "Nhap lua chon 0 de chen hoac 1 de xoa: ";
        cin >> chon ;
        if(chon == 0){
         cout << "post - val: ";
         cin >> post >> val;
         linklist.insert(head, post, val);
         linklist.print(head);
         cout << endl;
        }
        else if(chon == 1) {
        	cout << "post: "; cin >> post;
        	linklist.erase(head, post);
        	linklist.print(head);
        	cout <<endl;
		}
		else {
			cin.ignore();
			cout <<"\n" ;
			cout << "Nhap sai hay chon lai \n\n";
			menu(T);
		}
	
    }
}

int main()
{ 
    int T;
    cout <<"Input: " ;
    cin >> T;
    menu(T);
    return 0;
}
