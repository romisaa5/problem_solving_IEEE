#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxsum=max({a,b,c});
    int othersum=(a+b+c)-maxsum;
    if(maxsum<othersum){
        cout<<0;
    }
    else{
        int num=0;
        while (maxsum>=othersum)
        {
            othersum++;
            num++;   
        }
        cout<<num;  
    }
}