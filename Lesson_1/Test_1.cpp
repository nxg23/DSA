#include<bits/stdc++.h>
using namespace std;

string reverse(string st)
{
   reverse(st.begin(), st.end());
    return st;
}

int main()
{
    
   string st;
   cout << "Input: ";
   getline(cin, st);
   cout << "Output: " <<reverse(st);
    return 0;
}
