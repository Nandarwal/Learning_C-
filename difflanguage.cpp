#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"input a character";
    cin>>button;

    //if(button=='a'||'A'){
      //  cout<<"hello"<<endl;
    //}

    //else if(button == 'b' || 'B'){
    //    cout<<"namaste"<<endl;
    //}

    //else if(button == 'c' || 'C'){
      //  cout<<"ciao"<<endl;
    //}

    //else if(button == 'd' || 'D'){
      //  cout<<"salut"< <endl;
    //}

    //else if(button == 'e' || 'E'){
      //  cout<<"hola"<<endl;
    //}

    //else{
      //  cout<<"no thank you"<<endl;
    //}

    switch(button){
        case 'a':
            cout<<"hello"<<endl;
            break;

        case 'b':
            cout<<"namaste"<<endl;
            break;
        
        case 'c':
            cout<<"ciao"<<endl;
            break;

        case 'd':
            cout<<"hola"<<endl;
            break;

        case 'e':
            cout<<"salut"<<endl;
            break;

        default:
            cout<<"no thanks"<<endl; 
            break;
    }
    
    return 0;
}