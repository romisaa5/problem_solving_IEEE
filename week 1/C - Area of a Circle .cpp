#include<iostream>
#include<iomanip>
using namespace std;
int main(){
const double pi=3.14159;
double R;
cin>>R;
double result=pi*R*R;
cout<<"A="<<fixed<<setprecision(4)<<result;
}