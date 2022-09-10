//  Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
void display(char *);
int main(){
    char str[50];
    printf("Enter your string:  ");
    fgets(str, 50, stdin);
    display(str);
    return 0;
}
void display(char *ptr){
    printf("string: ");
    for(int i = strlen(ptr) - 1; i >= 0;i--)
        printf("%c", *(ptr+i));
}