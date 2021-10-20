//Insertion at beginning in Array
/*
Notes:

1. create a array size+1 so as to prevent data loss while shifting
2. SHIFT from the END to the beginning to prevent DATA LOSS
3. Finally after shifting insert the value to the first position.
*/
#include <stdio.h>

int main()
{
    int size,i,insertPosition,temp,newValue;
    printf("\nEnter array size: ");
    scanf("%d",&size);
    
    int array[size+1]; //size +1 beacause while shifting the values the last value will not get place
    
    printf("\nEnter array values: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    
    printf("\nEnter new value to be inserted: ");
    scanf("%d",&newValue);
    
    //!!!shift from the END to the required position to prevent values being overridden!!!
    for(i=size+1;i>=0;i--){ 
        
        //insertPosition-1 because index start from 0
        array[i] = array[i-1];
    }
    
    //finaly insert the new value
    array[0] = newValue;
    
    for(i=0;i<size+1;i++){
        printf("%d",array[i]);
    }
    
    return 0;
}
