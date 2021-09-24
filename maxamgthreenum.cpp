// WAP to find maximim among three number
#include<bits/stdc++.h>
using namespace std;
main(){
    int x,y,Z;
    cout<<"Enter three numbers"<<endl;
    cin>>x>>y>>Z;
    if(x>y){
        if(x>Z){
            cout<<"X is maximum"<<endl;
        }else{
            cout<<"Z is maximum"<<endl;
        }
    }else{
        if(y>Z){
            cout<<"y is maximum"<<endl;
        }else{
            cout<<"Z is maximim"<<endl;
        }
    }
    return 0;
}