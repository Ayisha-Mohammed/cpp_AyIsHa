#include <iostream>
using namespace std;

int main(){
   
    int n;
    cout<<"enter a number to check if it is even ";
    cin>>n;

    for(int i=0;i<=n;i++){
        if(i%2==0){
            cout<<n<<"is even";
        }

    }



    return 0; 
}