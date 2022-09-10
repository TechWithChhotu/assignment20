// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main(){
    int a, b, *aptr, *bptr;
    aptr = &a;
    bptr = &b;
    printf("Enter two number: ");
    scanf("%d%d", aptr, bptr);
    if(*aptr>*bptr)
        printf("\ngrater is %d", *aptr);
    else if(*bptr>*aptr)
        printf("\ngrater is %d", *bptr);
    else
        printf("\nboth are equal");
}