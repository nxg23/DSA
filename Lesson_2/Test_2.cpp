#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

void print(node *head)
{
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

void insert(node *&head, int post, int val)
{ 
    int n = sizeof(head);
    node *temp = head;
    node *newNode = new node{val, NULL};
    if(post < 0 || post > n) return;
    // insert head
    if(post == 0){
        newNode->next = head;
        head = newNode;
    }
    // insert tail
    else if(post == n){
     node *newNode = new node{val, NULL};
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

void erase(node *&head, int post)
{
    int n = sizeof(head);
    node *temp = head;
    node *postNode = NULL;
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
int main()
{ 
    int T, post, val;
    node *head = NULL;
    cout <<"Input: " ;
    cin >> T;
    while (T--)
    {
        int chon;
        cout << "Nhap lua chon 1 de xoa 0 de chen: ";
        cin >> chon ;
        if(chon == 0){
         cout << "Input: ";
         cin >> post >> val;
         insert(head, post, val);
         print(head);
         cout << endl;
        }
        if(chon == 1) {
         cout << "Input: " ;
         cin >> post;
        erase(head, post);
        print(head);
          cout << endl;
        }
    }
    
    return 0;
}