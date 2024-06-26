#include<stdio.h>

heapify(int a[], int n, int i) 
{ 
	int root,l,r,t;
    
	root = i; 
    l = 2*i + 1; 
    r = 2*i + 2;    																
    if (l<n && a[l] > a[root]) 
        root = l; 
      if (r<n && a[r] > a[root]) 
        root = r; 
      if (root != i) 
    { 
        t=a[i];
		a[i] = a[root]; 
  		a[root] = t;
        heapify(a, n, root); 
    } 
} 
heapsort(int a[], int n) 
{ 
	int i,t;
    for(i=n/2-1; i>=0; i--) 
        heapify(a, n, i); 
      for(i=n-1; i>=0; i--) 
    { 
        t= a[0];
		a[0]= a[i]; 
  		a[i] = t;
        heapify(a, i, 0); 
    } 
} 


int main()
{
      int a[50],i,n;
      printf("Enter total number of elements:");
      scanf("%d", &n);
	  
      printf("Enter the elements:\n");
      for(i = 0; i < n; i++)
          	scanf("%d", &a[i]);
	
	  heapsort(a,n);
	  
      printf("\n\nAfter Heap sort:\n");
	  
      for(i = 0;i < n; i++)
	 		printf("%d\t", a[i]);
			
	return 0;
}
