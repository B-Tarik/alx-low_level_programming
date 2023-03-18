#include <stdio.h>
/**
 * main - main block
 * print all possible different combinations of 3 digits.
 * Return: 0
 */
int main(void) {
    int i, j, k;
    
    for(i = 0; i <= 7; i += 1) {
        for(j = i+1; j <= 8; j += 1) {
            for(k = j+1; k <= 9; k += 1) {
                putchar('0'+i);
                putchar('0'+j);
                putchar('0'+k);
                if(!(i == 7 && j == 8 && k == 9)) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    
    return (0);
}
