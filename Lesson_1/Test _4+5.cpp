#include<bits/stdc++.h>
using namespace std;

// 4
void selectionSort(int a[], int n)
{
    for(int i = 0; i < n; i++ ){
        int min_pos = i;
        for(int j = i + 1; j < n; j++){
            if(a[min_pos] > a[j]) swap(a[min_pos], a[j]);
        }
    }
}
void bubleSort(int a[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++ ){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
}

// 5
int sum(int a[], int n)
{
    selectionSort(a,n);
    return a[0] + a[4];
}
int main()
{
   int n; cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   selectionSort(a,n);
   //bubleSort(a,n);
   for(int x : a) cout << x << " ";
   cout << sum(a, n);
    return 0;
}
