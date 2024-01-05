//1. Write C program to check whether a string is palindrome or not 
#include<stdio.h>
#include<string.h>
int main(){
 
     char name[20],name1[20]; 
     int ans;
     printf("enetr name:");
     gets(name);
     printf("name is %s:",name);
     printf("name is %s:",name1);
     strrev(name);
     printf("name is %s:",name);
     ans=strcmp(name,name1);
     if (ans==0)
     {
        printf("Name is palidrom");
     }else{
        printf("Name is not palidrom");
     }
}
