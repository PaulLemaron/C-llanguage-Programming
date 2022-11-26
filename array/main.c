#include <stdio.h>
#include <stdlib.h>

int main()
{

    int myNum[]={12,34,56,75};
    int i;
    myNum[1]=23;

    printf("%d\n",myNum[1]);

    for(i=0;i<4;i++){
        printf("%d\n",myNum[i]);


    }

    //Strings
    char greeting[]="Hello world!";

    printf("%s\n",greeting);

    return 0;
}
