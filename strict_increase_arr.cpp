#include <iostream>

using namespace std;

int main(){
     int n,fin;
      cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];

    for(int i=0;i<n;i++){
        if(ar[i+1]-ar[i]!=1){
            cout<<("Not Strictly Increasing..!");
            break;
        }
    }

}
