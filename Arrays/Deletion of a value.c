//Deletion of a value from the Array
/*
Notes:

1. Get the index by doing LINEAR SEARCH
2. from the index to end-1 do shifting like a[i] = a[i+1]
3. display till size-1 as last value is not needed
*/
#include <stdio.h>

int main()
{
    int size,i,deleteValue,deletePosition;
    printf("\nEnter array size: ");
    scanf("%d",&size);
    
    int array[size];
    
    printf("\nEnter array values: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    
    printf("\nEnter value to be deleted: ");
    scanf("%d",&deleteValue);
    
    //find the value and get the index LINEAR SEARCH
    for(i=0;i<size;i++){
        if(array[i]==deleteValue){
            deletePosition=i;
            break;
        }    
    }
    
    for(i=deletePosition;i<size-1;i++){ //size-1 as i<size will create with a[i] = a[i+1] at the last index
        array[i]=array[i+1];
    }
    
    //print till size-1 as last value is not needed
    for(i=0;i<size-1;i++){
        printf("%d",array[i]);
    }
    
    return 0;
}
