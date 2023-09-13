#include<bits/stdc++.h>
using namespace std;

class point{
    public:
    double x, y;

    void input(){
        cin >> x >> y;
    }
};

class line
{
private:
public:
    point p1, p2, p3, p4;

    void Input(){
        p1.input();
        p2.input();
        p3.input();
        p4.input();
    }
    
    void check()
    {
      Input();
      double z1 = (p1.y - p2.y) / (p1.x - p2.x);
      double z2 = (p3.y - p4.y) / (p3.x - p4.x);
      if(z1 == z2) cout << "Song song";
      else if(z1 != z2) cout <<"Cat nhau";
      else cout << "Trung nhau";
    }
};


int main()
{ 
    line x;
    x.check();
    return 0;
}