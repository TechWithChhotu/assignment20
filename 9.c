//Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void display(int *,int );
int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d number: ", size);
    for (int i = 0; i < size;i++)
        scanf("%d", &arr[i]);
    display(arr,size);
}
void display(int *ptr,int size){
    printf("\narray elements in reverse order: ");
    for (int i = size-1; i >= 0;i--)
        printf(" %d ", *(ptr + i));
}