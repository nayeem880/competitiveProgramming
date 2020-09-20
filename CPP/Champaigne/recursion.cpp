#include <iostream>
using namespace std;

void recur(int i){
     cout<<i<<" ";
     if(i<=0){
         return;
     }
     else{
     recur(i-1);
     }
}
    
int main(){
    cout<<"Recursion program !"<<endl;
    recur(30);
}