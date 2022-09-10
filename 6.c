// Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<string.h>
int main(){
    char str[50],*ptr;
    ptr = str;
    printf("Enter a string: ");
    fgets(ptr, 50, stdin);
   int length= strlen(ptr);
    printf("length of entred string is %d", length);
}