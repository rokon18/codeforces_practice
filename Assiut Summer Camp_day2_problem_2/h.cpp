#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x,y,z;
    char o,c;
    cin >> x >> o >> y >> c >> z;
    if(o=='+'){
    x=x+y;
    }
    else if(o=='-'){
    x=x-y;
    }
    else if(o=='*'){
    x=x*y;
    }
    switch (c)
    {
    case '<':
        if(x<z){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        break;
      case '>':
        if(x>z){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        break;
      case '=':
        if(x==z){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        break;
    
    default:
        cout << "NO" << endl;
        break;
    }
   
    

    return 0;
}