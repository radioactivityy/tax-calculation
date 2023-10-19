#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, index = 0;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, index);
        binary /= 10;
        index++;
    }

    return decimal;
}

int main() {
    int choice, decimal, result;
    long long binary;

    printf("Decimal to Binary and Binary to Decimal Converter\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } else if (choice == 2) {
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        result = binaryToDecimal(binary);
        printf("Decimal representation: %d\n", result);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
