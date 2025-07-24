#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
    cin >> n;
    long long a=n/50;
    n=n%50;
    long long b=n/20;
    n=n%20;
    long long c=n/1;
    cout<<a+b+c<<endl;
    return 0;
}