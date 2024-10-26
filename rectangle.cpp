#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"ENter no. of rows and columns in the rectangle";
    cin>>row>>col;
    for(int i =1;i<=row;i++){
        for(int j =1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
