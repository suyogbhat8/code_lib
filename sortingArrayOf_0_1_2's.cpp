#include <iostream>
using namespace std;

int main() {
	int ar[8]={0,2,2,1,0,0,1,2};
	int *first,*mid,*last;
	first=mid=ar;
	last=&ar[7];
	while (mid<=last){
	    if (*mid==1){
	        mid++;
	    }
	    else if (*mid==0){
	        int temp=*first;
	        *first=*mid;
	        *mid=temp;
	        mid++;
	        first++;
	    }
	    else if (*mid==2){
	        int temp=*last;
	        *last=*mid;
	        *mid=temp;
	        last--;
	    }
	}
	for (int i=0;i<8;i++){
	    std::cout << ar[i] << std::endl;
	}
	
	return 0;
}