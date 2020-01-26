#include <iostream>

using namespace std;

int main(){
        int c,temp;
        cin>>c;
        int ar[c];
        for(int i=0;i<c;i++)
            cin>>ar[i];

        for(int i=0;i<c-1;i++){
            for(int j=i;j<c;j++){
                if(ar[i]>ar[j]){
                    temp=ar[j];
                    ar[j]=ar[i];
                    ar[i]=temp;
                }
            }
        }
        for(int i=0;i<c;i++)
            cout<<(ar[i]);

}



