//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int size);
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter five number: ");
    for (int i = 0; i < size;i++)
        scanf("%d", &arr[i]);
    sort(arr,size);
    printf("\n\nafter sorting array elements: ");
    for (int i = 0; i < size;i++)
        printf(" %d ", arr[i]);
}
void sort(int *arr,int size){

    for (int i = 0; i < size;i++){
        for (int j = i + 1; j < size;j++){
            if(*(arr+i)>*(arr+j)){
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j )= temp;
            }
        }
    }
        //printf("%d ", *arr+i);
}