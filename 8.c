//Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void sum(int *,int ,int *);
int main(){
    int size,Sum=0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d number: ", size);
    for (int i = 0; i < size;i++)
        scanf("%d", &arr[i]);
    sum(arr, size, &Sum);
    printf("\nsum of all array elements is %d\n",Sum);
}
void sum(int *ptr,int size,int *Sum){
    for (int i = 0; i < size;i++){
        *Sum += *(ptr + i);
    }
}