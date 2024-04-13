#include<stdio.h>
int main()
{
    char Alpabet=65,User_input;

    printf("Enter a Alpabet ");
    scanf("%c",&User_input);
        
    int num=(int)User_input;
    if((num<65&&num<90) || (num<97&&num<122))
    {
        printf("It's not a Alpabet \n");
        return 0;
    }
    while(num!=Alpabet)
    {
        Alpabet++;
    }
    if(num==Alpabet)
    {
        printf("it a alpabet\n");
    }
    else
    {
        printf("it a not a alpabet\n");
    }
    return 0;

}
