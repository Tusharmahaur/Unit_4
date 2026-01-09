#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int m ,n;

void getInfo(){
    cout<<"Enter the row size and column size : ";
    cin>>m>>n;
}

void Display(){
    cout<<"your row is "<<m<<endl;
    cout<<"Your column is "<<n<<endl;
}

int main(){
    getInfo();
    Display();
    return 0;
}