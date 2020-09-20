#include <iostream>
using namespace std;
int main(){   
    string name;
    cout<<"this is loop example in c++"<<endl;
    cout<<"Enter your name : ";
    cin>>name;
    cout<< "Hello there : "<<name<<" ! Welcome to loop tutorial in cpp."<<endl;
    cout << "Loop starts here : "<<endl;
    int i=0;
    for(i;i<100;i++){
        cout<<i<<" ";
    }
    cout<<""<<endl;
    cout<<"While loop :"<<endl;
    bool b=true;
    while(b){
        cout<<i++<<" ";
        if(i==200){
            b=false;
        }
    }
} 


