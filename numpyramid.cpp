#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cout<<"Please enter the no. of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
return 0;
}