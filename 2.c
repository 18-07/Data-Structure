#include<stdio.h>
int main()
{
   char s1[100][100],t[100];
   int n,i,pass;
   printf("enter limit:");
   scanf("%d",&n);
   printf("enter n names of students:");
   for(i=0;i<n;i++)
   {
   scanf("%s",&s1[i]);
   }
   
   for(pass=1;pass<n;pass++)
   {
     for(i=0;i<n-pass;i++)
     {
     if(strcmp(s1[i],s1[i+1])>0)
     {
    strcpy(t,s1[i]);
     strcpy(s1[i],s1[i+1]);
     strcpy(s1[i+1],t);
     }
    }
  }  
   printf("\nsorted names of students:");
   for(i=0;i<n;i++)
   {
   printf("%s\t",s1[i]);
 }
}











