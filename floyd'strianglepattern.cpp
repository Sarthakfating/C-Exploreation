#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cout<<"Please enter number of rows"<<endl;
    cin>>n;
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}