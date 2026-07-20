#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    
    // Handle zero case
    if (num == 0) {
        count = 1;
    } else {
        // Count digits using while loop
        while (num > 0) {
            count++;
            num = num / 10;
        }
    }
    
    printf("Number of digits: %d\n", count);
    
    return 0;
}
