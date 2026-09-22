#include <stdio.h>
#include <string.h>
void reverseString(char *str) {
    if (str == NULL) return; 

    int left = 0;
    int right = strlen(str) - 1;
    char temp;
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char myString[100];

    printf("Enter a string to reverse: ");
    fgets(myString, sizeof(myString), stdin);

    myString[strcspn(myString, "\n")] = '\0';

    printf("Original String: %s\n", myString);

    reverseString(myString);

    printf("Reversed String: %s\n", myString);

    return 0;
}
