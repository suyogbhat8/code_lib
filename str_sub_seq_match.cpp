#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   string s1;
   string s2;
    cin>>s1;
    cin>>s2;
    int n1,n2;
    n1=s1.length();
    n2=s2.length();
    int m[n1+1][n2+1];
    for(int i=0;i<n1+1;i++)
        m[i][0]=0;
    for(int i=0;i<n2+1;i++)
        m[0][i]=0;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(s1[i]==s2[j]){
              m[i+1][j+1]=m[i][j]+1;

            }
            else

                m[i+1][j+1]=max(m[i][j+1],m[i+1][j]);
        }
    }

    for(int i=0;i<n1+1;i++){
        for(int j=0;j<n2+1;j++)
            cout<<m[i][j]<<"\t";
    cout<<"\n";
    }
    cout<<"max len is :"<<m[n1][n2]<<endl;


}
