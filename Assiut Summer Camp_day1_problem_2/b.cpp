#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout << fixed << setprecision(6);
double a,b,c;
cin >> a >> b >> c;
double eqn = (2*a + 3*b) *5*c;
cout<<eqn<<endl;
  
    return 0;
}