#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
long long d=min({a,b,c});
long long f=a+b+c-d;
cout<<f;
}