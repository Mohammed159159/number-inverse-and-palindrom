#include<stdio.h>

int main() {

    int num;
    printf(" Enter A Number: ");
    scanf(" %d", &num);

    // printf(" The revers of the number is: ");
    int acc;
    int rev = 0;
    int c = num;
    while (num > 0) {
        acc = num % 10;             //creative :)
        num = num / 10;
        // printf("%d");
        rev = rev * 10 + acc;
    }


    printf(" The reverse of the number is %d", rev);

    if (rev == c)
        printf(" \n Also the Number %d is Palindrom of %d", rev, c);
    else printf("\n But the Number %d is not Palindrom of %d", rev, c);
}