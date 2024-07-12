#include<iostream>
using namespace std;

int main(){

    //int i=1;
    //int a,b;

    //a = i++;
    //cout<<a<<endl;
    //b = ++i;
    //cout<<b<<endl;

    //i = a + b;

    //cout<<i<<endl;



   // int i = 1;
    //int j = 2;
    //int k;
    //int a,b,c,d;  

    //a = i++;
    //cout<<i<<endl;
    //b = j++;
    //c = ++i;
    //cout<<i<<endl;
    //d = ++j;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

   // k = i + j + a + b + c + d;

   // k = i + j + ++i + ++j + i++ + j++;

    //cout<<i<<" "<<j<<" "<<k<<endl;



    //int i = 1, j = 2, k = 3;
    //int m = i-- -j-- - k--;
    //cout<<i<<" "<<" "<<j<<" "<<k<<" "<<m<<endl;


    int i = 10, j = 20, k;
//      10    9      19    20     9   20      10    19                
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;//10
    cout<<j<<endl;//20
    cout<<k<<endl;//10-9+19-20+9-20+10-19=-20

    return 0;
}