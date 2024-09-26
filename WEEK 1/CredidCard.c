#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 13
#define MAX_LENGTH 19

// Function to check if the card number has valid digits and length
int is_valid_format(const char* card_number) {
    int digit_count = 0;

    for (int i = 0; i < strlen(card_number); i++) {
        if (isdigit(card_number[i])) {
            digit_count++;
        } else if (!isspace(card_number[i]) && card_number[i] != '-') {
            return 0;
        }
    }

    return (digit_count >= MIN_LENGTH && digit_count <= MAX_LENGTH);
}

// Function to check the card type based on the starting digits
const char* get_card_type(const char* card_number) {
    // Skip any non-digit characters
    while (*card_number && !isdigit(*card_number)) {
        card_number++;
    }

    // Check for specific prefixes
    if (*card_number == '4') {
        return "VISA";
    } else if (strncmp(card_number, "34", 2) == 0 || strncmp(card_number, "37", 2) == 0) {
        return "AMEX";
    } else if (strncmp(card_number, "51", 2) == 0 || strncmp(card_number, "52", 2) == 0 ||
               strncmp(card_number, "53", 2) == 0 || strncmp(card_number, "54", 2) == 0 ||
               strncmp(card_number, "55", 2) == 0 || (strncmp(card_number, "2221", 4) >= 0 && 
               strncmp(card_number, "2720", 4) <= 0)) {
        return "MASTERCARD";
    } 
     else {
        return "Unknown";
    }
}

// Function to implement Luhn's Algorithm
int luhn_check(const char* card_number) {
    int sum = 0;
    int len = strlen(card_number);
    int should_double = 0;

    for (int i = len - 1; i >= 0; i--) {
        char c = card_number[i];

        if (!isdigit(c)) {
            continue;
        }

        int digit = c - '0';

        if (should_double) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        should_double = !should_double;
    }

    return (sum % 10 == 0);
}

int main() {
    char card_number[100];

    printf("Enter the credit card Number: ");
    scanf("%s", card_number);

    // Check if the card number format is valid
    if (!is_valid_format(card_number)) {
        printf("The card number has an invalid format (length or non-digit characters).\n");
        return 1;
    }

    // Determine the card type by the starting digits
    const char* card_type = get_card_type(card_number);
    printf("Card Type: %s\n", card_type);

    // Check if the card number passes the Luhn algorithm
    if (luhn_check(card_number)) {
        printf("\n");
    } else {
        printf("The card number is invalid.\n");
    }

    return 0;
}
