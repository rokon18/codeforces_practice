#include <bits/stdc++.h>
using namespace std;
 
int main() {
 long long A,B,C,D;
 cin>> A >> B >> C >> D;
 if(A<B && A<C && A<D){
    cout<<"A"<<endl;
 } else if(B<A && B<C && B<D){
    cout<<"B"<<endl;
 } else if(C<A && C<B && C<D){
    cout<<"C"<<endl;
 } else if(D<A && D<B && D<C){
    cout<<"D"<<endl;
 }else{
    cout<<"Equal"<<endl;
 }
 
 return 0;
}