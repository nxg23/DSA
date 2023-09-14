#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st ;
    int T, val;
    cout << "Input: ";
    cin >> T;
    while(T--){
       int chon;
        cout << "Nhap lua chon 0 de chen va 1 de xoa: ";
        cin >> chon ;
        if(chon == 0){
         cout <<"Value: "; cin >> val;
         st.push(val);
        }
        if(chon == 1) {
            st.pop();
        }

    }
    vector<int> v;
    while(!st.empty()){
    v.push_back(st.top());
    st.pop();
  }
  
  for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
    return 0;
}
