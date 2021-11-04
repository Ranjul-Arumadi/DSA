#include <string.h>
#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5};
    int *q;
    //this works because arrays first index is same as its address value
    q=a;
    printf("\na address=%p",a);
    printf("\narray a first index value= %d",*q);
    
    //printing all the array values using loop and pointers
    for(int i=0;i<3;i++){
        //*q++ increments the address stored in q as-
        //suppose base=100 then q=104,108,112 etc ..based on size of data typedef
        //here int for increment by 4
        //if char increment by 1 etc
        printf("\na[%d]=%d",i,*q++);
    }
    
    int *qq;
    qq = a;
    printf("\n\nqq1=%d",*qq);
    //doing *qq+2 is NOT value of add. in qq +2 !!!
    //it means increment the address value twice i.e 100+4+4 = 108 
    //this is similiar to doind *qq++ TWICE
    printf("\nqq2=%d",*(qq+2)); //gives 3 which is the data at add. (100+4+4)
    
    int *pp;
    pp=a;
    
    //here *++pp increments the address value stored in pp as SAY 100+4
    //+9 meand add the value of 9 to the final address values DATA VALUE
    //i.e (*++pp)+ 8    
    //=> *pp means *(100+4) equals 2
    //and +8 ADDS 8 to the data value 2 !
    printf("\n\npp=%d",*(++pp)+8);
    
    char c[] = "abc";
    char *cp;
    cp=c;
    //lopping the char array using pointers
    for(int j=0;j<strlen(c);j++){
        printf("\nc value at index %d:%c",j,*cp++);
    }

    return 0;
}
