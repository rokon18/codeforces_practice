#include <bits/stdc++.h>
using namespace std;
 
int main() {
 char a;
 cin >> a;
 if(a>='a'&& a<='z') {
    a=a-32;
 }else{
    a=a+32;
 }
 
   cout << a << endl;
 
   return 0;
}