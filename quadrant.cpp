#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x quadrant"<<endl;
    cin>>x;
    cout<<"Enter the y quadrand"<<endl;
    cin>>y;
    if (x>0 && y>0){
        cout<<"The point is in first quadrant"<<endl;
    }else if(x<0 && y>0){
        cout<<"The point is in second quadrant "<<endl;
    }else if(x<0 && y<0){
        cout<<"The point is in third quadrant"<<endl;
    }else if(x>0 && y<0){
        cout<<"The point is in fourt quadrant"<<endl;
    }else{
        cout<<"Something went wrong try again"<<endl;
    }
    return 0;
}