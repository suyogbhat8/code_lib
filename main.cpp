#include <iostream>

using namespace std;

long long int maxx(long long int i,long long int j,long long int k){
    int maxi=0;
    if(maxi<i)
        maxi=i;
        if(maxi<j)
            maxi=j;
        if(maxi<k)
            maxi=k;
    return maxi;
}

 int rod(int n){
 int res[n+1],t;
for(int i=2;i<=n+1;i++){
        res[i]=0;
    for(int j=1;j<i/2;j++){
       t =max(res[i],j*(i-j));
       res[i]=max(t,j*res[i-j]);
    }
}
 return res[n+1];
}

int main()
{
    cout<<"enter rod length"<<endl;
    int n;
    cin>>n;

    int res=rod(n);
   cout<< "max product is "<<res<<endl;
    return 0;
}
