#include<bits/stdc++.h>
using namespace std;
main(){
    char c;
    cout<<"Enter an alphabet"<<endl;
    cin>>c;
    int lcvowel,ucvowel;
    lcvowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    ucvowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lcvowel||ucvowel){
        cout<<"vowel"<<endl;
    }else{
        cout<<"consonent"<<endl;
    }
    return 0;
    }