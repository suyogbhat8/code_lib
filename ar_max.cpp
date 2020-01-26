#include <iostream>

using namespace std;

int main()
{
    int n,fin;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
        cin>>ar[i];
        fin=ar[0];
    for(int i=1;i<n;i++){
        if(fin<ar[i]){
            fin=ar[i];
        }
    }
    cout<<fin<<endl;
    return 0;
}
