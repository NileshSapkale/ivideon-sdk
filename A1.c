#include<stdio.h>
int main()
{
    //new for learning git
   char str[]={'A','E','I','O','U','a','e','i','o','u'};char Ustr[0];
   printf("Enter Character: ");
   scanf("%c",Ustr);
    int i=0,check=1;
   while(i!=9)
   {
       if(str[i]==Ustr[0])
       {
           check=0;
           break;
       }
       else
       {
           check=1;
       }
       i++;
   }
  
   if(check!=1)
   {
       printf("Charcter is Vowel! \n");
   }
   else
   {
       printf("Character is Consonant! \n");
   }
   return 0;
}
