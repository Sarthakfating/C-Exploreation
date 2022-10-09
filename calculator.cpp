#include<bits/stdc++.h>
using namespace std;
main(){
    char op;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operator to perform specific operation"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    default:
    cout<<"Please enter valid operator"<<endl;
        break;
    }
    return 0;
}