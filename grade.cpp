#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of student:"<<endl;
    cin>>marks;
    if (marks>>80 && marks<<101){
        cout<<"Grade A"<<endl;
    }else if (marks<<80 && marks>>70){
        cout<<"Grade B"<<endl;
    }else if (marks<<70 && marks>>60){
        cout<<"Grade C"<<endl;
    }else if (marks<<60 and marks>>50){
        cout<<"Grade D"<<endl;
    }else {
        cout<<"Fail hai BC"<<endl;
    }
    return 0;

}