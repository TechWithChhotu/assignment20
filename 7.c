// Write a program to count the number of vowels and consonants in a string using a
// pointer
#include<stdio.h>
#include<string.h>
void CountVowelConstant(char *,int *,int *);
int main(){
    char str[50];
    int TotalNumberOfVowel, TotalNumberOfConsonant;
    printf("Enter the string: ");
    fgets(str, 50, stdin);
    CountVowelConstant(str,&TotalNumberOfVowel,&TotalNumberOfConsonant);
    printf("\nTotal number fo vowels is %d", TotalNumberOfVowel);
    printf("\ntotal number of consonants is %d", TotalNumberOfConsonant);
}
void CountVowelConstant(char *ptr,int *TotalNumberOfVowel,int *TotalNumberOfConsonant){
    char vowel[] = "aeiouAEIOU";
    int CountVowel = 0,Countspace=0;
    for (int i = 0; i <= strlen(ptr); i++)
    {
        for (int j = 0; vowel[j]; j++){
            if(*(ptr+i)==vowel[j])
                CountVowel++;     
        }
        if(*(ptr+i)==32)
           Countspace++;
    }
    *TotalNumberOfVowel = CountVowel;
    *TotalNumberOfConsonant = strlen(ptr)-(Countspace+CountVowel+1);//1 - that means NULL minus
}