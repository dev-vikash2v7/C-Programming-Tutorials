#include "stdio.h"

int main()
{
	int a[]={6,8,1,10,9,7,0},i,j,k,n=7;
	
	for(i=0;i<n/2 ;i++){
	    
	    k = a[i];
	    a[i] = a[n-1-i];
	    a[n-1-i] = k;
	    
	    }
	    
	    	for(i=0;i<n ;i++){
	    
	    printf("%d  ",a[i]);
	   
	    
	    }
	
	
	return 0;
}