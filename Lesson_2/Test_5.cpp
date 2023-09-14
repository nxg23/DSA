#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
public:
    int size = 100;
    int top = -1 ;
    int stack[100];
    
    bool isEmpty()
   {
    if(top != 0) return false;
    return true;
   }

    bool isFull()
   {
    if(top != size) return false;
    return true;
   }

    void insert( int val )
    {
       if(isFull()) cout<< "Ngan xep day khong the chen ";
     else {
    top++;
    stack[top] = val;
  }
    }

    void erase()
    {
    if(isEmpty())  cout << "Ngan xep rong khong the xoa";
    else{
        top--;
    }
    }

    void print()
    {
      cout << "Phan tu dau ngan xep: " << stack[top] ;
    }

};

void menu(int T)
{
    Stack st;
    int val;
      while(T--){
       int chon;
        cout << "Nhap lua chon 0 de chen va 1 de xoa: ";
        cin >> chon ;
        if(chon == 0){
            cout << "value: "; cin >> val;
            st.insert(val);
            st.print();
            cout << endl;
        }
        else if(chon == 1){
            st.erase();
            st.print();
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
    cout << "Input: ";
    cin >> T;
    menu(T);
    return 0;
}
