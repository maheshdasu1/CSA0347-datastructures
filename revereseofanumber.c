#include <stdio.h>
#include <conio.h>

int main() {
    int num, reversed = 0, remainder;
    clrslr();
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
