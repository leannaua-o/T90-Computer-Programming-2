#include<stdio.h>
void convert(int, int);

int main()
{
        int num;
        printf("Enter decimal integer: ");
        scanf("%d", &num);
        if(num>0){
            
            printf("Binary: ");
            convert(num, 2);
            printf("\n");
            printf("Octal: ");
            convert(num, 8);
            printf("\n");
            printf("Hexadecimal: ");
            convert(num, 16);
            printf("\n");
            
        }else{
            
            printf("Invalid Input");
        }
      
        return 0;
}

void convert (int num, int base)
{
        int rem = num%base;

        if(num==0)
                return;
        convert(num/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}