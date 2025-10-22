#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if (n>99 && n<10000){
        cout<<"Its a three digit number"<<endl;
    }
    else {
        cout<<"Its not a three digit number"<<endl;
    }
    return 0;

}