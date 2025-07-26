#include <bits/stdc++.h>
using namespace std;

int main() {
   char a;
   cin >> a;
   if(isdigit(a)){
    cout<<"IS DIGIT"<<endl;
   }
   else if(isalpha(a)){
    if(isupper(a)){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    } else {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }}

   
    return 0;
}