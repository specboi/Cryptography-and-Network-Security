#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int CalcGCD(int);
main()
{
 int i,j,k,gcd,a = 5,b = 8,numstr[100],numcipher[100];
 char str[100],cipher[100];
  gets(str);
 //converting entered string to Capital letters
 for(i=0,j=0;i<strlen(str);i++)
 {
  if(str[i]!=' ')
  {
   str[j]=tolower(str[i]);   
   j++;
  }
  else
  {
   str[j]=' ';
   j++;
  }
 }
 str[j]='\0';
 
 
 
 gcd=CalcGCD(a);
 


 
 //Program Starts
 
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]!=' ')
  numstr[i]=str[i]-'a';
  else
  numstr[i]=-20;
 }
 
    //printf("Encryption output: "); 
    for(i=0;i<strlen(str);i++)
    {
     if(numstr[i]!=-20)
     {
     numcipher[i]=((a*numstr[i])+b)%26;
          printf("%c",(numcipher[i]+'a'));         
     }
     else
     {
          printf(" ");      
     }
    }
    printf("\n");
    printf(str);
    
 
}

int CalcGCD(int alpha)
{
 int x;
   int temp1=alpha;
   int temp2=26;

     while(temp2!=0)
      {
        x=temp2;
        temp2=temp1%temp2;
        temp1=x;
      }
     return(temp1);
}
