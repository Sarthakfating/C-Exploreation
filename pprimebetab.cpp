//WAP to find or print prime no in given range 
#include<bits/stdc++.h>
using namespace std;
main(){
    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        int j;
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
return 0;
}
