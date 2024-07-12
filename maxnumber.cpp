#include<iostream>
using namespace std;
 int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){//a>b and a>c 
             cout<<"max"<<a<<endl;
        }
        else{//c>a>b
            cout<<"max"<<c<<endl;
        }
    }
    else{//b>a
        if(b>c){//b>a and b>c
            cout<<"max"<<b<<endl;
        }
        else{//c>b>a
            cout<<"max"<<c<<endl;
        }
    }

    return 0;
 }