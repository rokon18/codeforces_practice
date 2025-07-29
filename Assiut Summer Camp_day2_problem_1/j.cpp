#include <bits/stdc++.h>
using namespace std;
int main()
 {
int a,b,c,minimum,maximum;
cin >> a >> b >> c;
minimum = min(a,min(b,c));
maximum = max(a,max(b,c));
cout<<minimum<<endl;
cout<<a+b+c-minimum-maximum<<endl;
cout<<maximum<<endl;
cout<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
return 0;
}
