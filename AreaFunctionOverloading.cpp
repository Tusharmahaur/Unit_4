#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Overloading{
    public:
        float h,r,s;

void area(){
    cout<<"Enter the height : ";
    cin>>h;
    cout<<"Enter the side : ";
    cin>>s;

    cout<<"Triangle area is : "<<(1/2.0)*h*s<<endl;
}

void area(int r){
    
    this ->r  = r;

    cout<<"Circle Area is : "<<(22/7.0)*r*r<<endl; 2..
}

};
int main(){
    Overloading t1;
    t1.area(5);
        
    return 0;
}