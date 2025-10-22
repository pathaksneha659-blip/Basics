#include <iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter your selling price:"<<endl;
    cin>>sp;
    cout<<"Enter your celling price:"<<endl;
    cin>>cp;
    int sub=sp-cp;
    if (sub>0){
        cout<<"Congratulation you got profit"<<endl;
    }
    else if(sub<0){
        cout<<"Oh shit you got a loss"<<endl;
    }else{
        cout<<"No profit no loss "<<endl;
    }
}