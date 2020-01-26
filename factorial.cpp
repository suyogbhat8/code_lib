#include <iostream>

using namespace std;
int fact(int n){
if(n==1){
    return n;
}
    else{
        return fact(n-1)*n;
    }
}

int main(){
    int n,res;
    cin>>n;
    res=fact(n);
    cout<<res;
    return 0;

}

