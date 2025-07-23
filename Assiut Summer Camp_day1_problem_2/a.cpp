#include<iostream>
using namespace std;
int main(){
  
    long long n,x,y;
    cin >> n >> x >> y;
    if(x<=y){
        cout<<n*(y-x)<<endl;
    }
    else{
        cout<<"x should be less than or equal to y"<<endl;
    }
    return 0;
}