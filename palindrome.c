#include <stdio.h>

int main() {
    int x, original, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &x);

    original = x;

    while (x != 0) {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x = x / 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
output
Enter a number: 1
Palindrome


=== Code Execution Successful ===
