#include <iostream>
using namespace std;

void func1(int n, int m , int z)
    {
    double result = (n*m)/z;
    cout<<"The Result is : "<<result;
}

int main(){
    cout<<"Function program : "<<endl;
    func1(5,6,4);
}