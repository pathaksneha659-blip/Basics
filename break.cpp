#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int f=1;
        if(n%i==0){
            f=i;
        }
        cout<<f;
    }
    return 0;

}