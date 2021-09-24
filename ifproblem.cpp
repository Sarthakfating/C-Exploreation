// WAP to chech whether two no. are equal and if not which is maximum
#include<bits/stdc++.h>
using namespace std;
 main(){
     int x,y;
     cout<<"Enter two no."<<endl;
     cin>>x>>y;
     if(x==y){
         cout<<"Both are equal"<<endl;
     }else if(x>y){
         cout<<"x is greater than y"<<endl;
     }else {
         cout<<"y is greater than x"<<endl;
     }
 return 0;
}
