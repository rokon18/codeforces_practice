#include<bits/stdc++.h>
using namespace std;
int main() {
    int x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 ;
    cin >> x2 >> y2 >> r2;
    double d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(d<=r1+r2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}