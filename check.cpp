#include <iostream>
using namespace std;
int main(){
    for(int i=2;i<=20;i++){
        if(i==2) continue;
        if(i==12) continue;
        cout<<i<<endl;
    }
    return 0;
}