//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
void swapstring(char *,char *);
int main()
{
	char str1[50],str2[50];
	printf("Enter your name: ");
	fgets(str1, 50, stdin);
    printf("Enter your name: ");
	fgets(str2, 50, stdin);
	swapstring(str1,str2);
    printf("\n\t\tafter swapping \nfirst string: %ssecond string: %s", str1,str2);
    return 0;
}
void swapstring(char *str1ptr,char *str2ptr){
	int l= strlen(str1ptr);
    char temp[l];
    strcpy(temp, str1ptr);
    strcpy(str1ptr, str2ptr);
    strcpy(str2ptr, temp);
}