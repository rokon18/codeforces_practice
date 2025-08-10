#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    if((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}