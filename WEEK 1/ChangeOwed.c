#include <stdio.h>

void calculateChange(int amount, int coins[], int n);

int main() {
    int coins[] = {25, 10, 5, 1};  
    int n = sizeof(coins) / sizeof(coins[0]); 
    int amount;

    printf("change owed: ");
    scanf("%d", &amount);

    calculateChange(amount, coins, n);

    return 0;
}

void calculateChange(int amount, int coins[], int n) {
    int coinCount[n]; 
    for (int i = 0; i < n; i++) {
        coinCount[i] = 0; 
    }

    for (int i = 0; i < n; i++) {
        if (amount >= coins[i]) {
            coinCount[i] = amount / coins[i]; 
            amount = amount % coins[i];  
        }
    }


    printf("Minimum coins needed:\n");
    for (int i = 0; i < n; i++) {
        if (coinCount[i] > 0) {
            printf("%d coin(s) of %d\n", coinCount[i], coins[i]);
        }
    }

    if (amount != 0) {
        printf("Remaining amount that couldn't be changed: %d\n", amount);
    }
}