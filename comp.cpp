#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    bool flag=true;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag=false;
            break;

        }
    }
    if (flag==true) cout<<"prime"<<endl;
    else cout<<"composite"<<endl;
    return 0;
}

