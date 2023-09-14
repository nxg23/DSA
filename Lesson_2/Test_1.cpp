#include<bits/stdc++.h>
using namespace std;

int count(int a[],int n)
{
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]) cnt++;
        }
    }
    return cnt ;
}

int main()
{
    int n;
    cout << "Input: ";
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout <<"Output: " << count(a, n);
    return 0;
}
