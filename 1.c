//Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
int swap(int *ptra,int *ptrb);
int main(){
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d", &a, &b);
    printf("before swapping two number: \n\t\ta = %d\n\t\tb = %d", a, b);
    swap(&a ,&b );
    printf("\nafter swapping two number: \n\t\ta = %d\n\t\tb = %d", a, b);
}
int swap(int *ptra, int *ptrb){
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}