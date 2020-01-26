#include <iostream>

using namespace std;

int fact(int n){
if(n==1||n==0){
    return 1;
}
    else{
        return fact(n-1)*n;
    }
}


int main(){
    int n,r;
    cin>>n>>r;
    int nume,denom,res,comb;
    nume=fact(n);
    denom=fact(n-r);
    comb=fact(r);
    res=nume/denom;
    cout<<"permutation :"<<res<<endl;
    res=res/comb;
    cout<<"combination :"<<res;

}

