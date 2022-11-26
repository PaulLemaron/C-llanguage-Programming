#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1;

    printf("Enter your number: ",num1);
    scanf("%d");
    int rem1=num1%2;

    if(rem1==0){
    printf("%d is an even number\n",num1);
    }else{
    printf("%d is an odd number\n"),num1;
    }

    printf("Hello world!\n");
    //return 0;
}
