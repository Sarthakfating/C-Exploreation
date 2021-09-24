// WAP to check whether you are eligible to vote or not
#include<bits/stdc++.h>
using namespace std;
main(){
    int age;
    cout<<"Enter you age"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote"<<endl;
    }
    else{
        cout<<"You are not eliginle to vote"<<endl;
    }
    return 0;
}