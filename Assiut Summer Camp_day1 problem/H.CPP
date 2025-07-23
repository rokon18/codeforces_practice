#include<iostream>
using namespace std;
int main(){
long long N;
cin >> N;
long long NN=N%365;
cout<<N/365<<" years"<<endl;
cout<<NN/30<<" months"<<endl;
cout<<NN%30<<" days"<<endl;

    return 0;
}