#include<bits/stdc++.h>
using namespace std;


int greatest(int m, int n)
{
    if(n == 0) return m;
    else return greatest(n, m % n);
}

int main()
{
    int m, n;
    cout << "Input: ";
    cin >> m >> n;
    cout <<"Output: " <<greatest(m,n);
    return 0;
}
