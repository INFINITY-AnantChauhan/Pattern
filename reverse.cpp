#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to be reversed :";
    cin>>n;
    int reverse =0;
    while(n>0){
        int ld = n%10;
        reverse = reverse*10+ ld;
        n=n/10;
    }
    cout<<"REVERSE fo number is "<<reverse<<endl;
    return 0;
}