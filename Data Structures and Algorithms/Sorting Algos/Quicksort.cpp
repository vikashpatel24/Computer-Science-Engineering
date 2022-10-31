#include<bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e){
         int pivot=a[e];
         int pIndex=s;

         for(int i=s;i<e;i++){
         	  if(a[i]<=pivot){
         	  	swap(a[i],a[pIndex]);
         	    pIndex++;
         	  }
         }
        // cout<<pivot<<endl;
        swap(a[pIndex],a[e]) ;

         return pIndex;
}


void  QuickSort(int *a,int s,int e){
      
    if(s<e){

   int  p_index=partition(a,s,e);

    QuickSort(a,s,p_index-1);
    QuickSort(a,p_index+1,e);
  }

}


int main(){
	
 int a[]={7,2,1,6,8,5,3,4};
 int n =sizeof(a)/sizeof(a[0]);

 QuickSort(a,0,7);

for(int i=0;i<n;i++)

	cout<<a[i]<<" ";


	return 0;

}



