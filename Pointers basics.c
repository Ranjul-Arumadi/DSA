#include <stdio.h>
int main()
{
    int a=1;
    //pointer variable name is p and int because it is going to store address of an integer variable named 'a'
    //int does not mean that the pointer variabe data type is int
    //address of variabes are hexadecimal and never integer
    int * p = &a;
    printf("\na=%d",a);
    //address of pointer varible can be diaplyed using %p
    printf("\np address=%p",p);
    //printing the value using pointer
    //value is printed using the DEFERENCE OPERATOR *
    //using * ,p prints the value that is stored in the address present in p
    printf("\np value=%d",*p);

    return 0;
}
