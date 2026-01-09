#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a,b,c;

void compare();

void getInfo(){
    cout<<"Enter the number 1 ,2 ,3 respactively : ";
    cin>>a>>b>>c;

    compare();
}

void compare(){
    if(a>b and a>c){
        if(b>c){
            cout<<a<<">"<<b<<">"<<c;
        }else{
            cout<<a<<">"<<c<<">"<<b;
        }
       
    }else if(b>c and b>a){
        if(c>a){
            cout<<b<<">"<<c<<">"<<a;
        }else{
            cout<<b<<">"<<a<<">"<<c;
        }
    }else{
        if(b>a){
            cout<<c<<">"<<b<<">"<<a;
        }else{
            cout<<c<<">"<<a<<">"<<b;
        }  
    }
    
}


int main(){
    getInfo();
    return 0;
}