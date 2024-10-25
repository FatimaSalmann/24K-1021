#include <stdio.h>
int main() {
	int i, index;
	int arr[5], duplicate=-1;
	
	// input into array
	printf("\n Enter 5 integers \n");
	  for (i=0;i<5;i++){
	  printf("element %d:", i+1);
	  scanf("%d",&arr[i]);}
	  
	// finding duplicate
	for (i=0;i<5;i++){
	index =(arr[i]); // taking absolute value
	   if(arr[index]<0){
	      duplicate=index;
	      break;
	  }
	    else {
	    	arr[index]=-arr[index]; //
		}
	}
	// Display the result
    if (duplicate != -1) {
        printf("Number %d occurs more than once.\n", duplicate);
    } else {
        printf("No duplicates found.\n");
    }
    return 0;
	
}
