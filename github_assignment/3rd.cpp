#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a number a";
    cin>>a;
    cout<<"enter a number b";
    cin>>b;
    cout<<"rnter a number c";
    cin>>c;
    if(a>b&&a>c){
        cout<<"a is greater"<<endl;}
    else if(b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }



}