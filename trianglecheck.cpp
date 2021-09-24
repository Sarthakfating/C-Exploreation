// WAP tp chech that triangle is equilateral,isosceles or scalen
#include<bits/stdc++.h>
using namespace std;
main(){
    int s1,s2,s3;
    cout<<"Enter the three sides of triangle"<<endl;
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"Equilateral"<<endl;
    }else if(s1==s2||s2==s3||s3==s1){
        cout<<"isosceles"<<endl;
    }else{
        cout<<"Scalen"<<endl;
    }
    return 0;
}