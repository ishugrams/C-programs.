#include<stdio.h>


void DisplayAsCII()
{ 
    int i = 0;

    printf("________________________________________________\n");
    printf("AsCII table\n");
    printf("________________________________________________\n");

    printf("Character\t  Decimal\t  Hex\t Ocatal");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t %d \t %x \t %o \t",i,i,i,i);
    }
    printf("_________________________________________________\n");

}
int main()
{ 
    DisplayAsCII();
    return 0;
}