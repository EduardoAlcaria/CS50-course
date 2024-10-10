#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

// Function to return Scrabble score of a letter
int get_letter_score(char letter) {
    letter = toupper(letter);
    switch(letter) {
        case 'A': case 'E': case 'I': case 'O': case 'U': case 'L': case 'N': case 'S': case 'T': case 'R':
            return 1;
        case 'D': case 'G':
            return 2;
        case 'B': case 'C': case 'M': case 'P':
            return 3;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            return 4;
        case 'K':
            return 5;
        case 'J': case 'X':
            return 8;
        case 'Q': case 'Z':
            return 10;
        default:
            return 0;
    }
}

// Function to compute the score of a word
int compute_word_score(char word[]) {
    int score = 0;
    for(int i = 0; i < strlen(word); i++) {
        score += get_letter_score(word[i]);
    }
    return score;
}

int main() {
    char word[MAX_WORD_LENGTH];
    int score1 = 0, score2 = 0;
    
    printf("Welcome to Scrabble!\n");

    // Player 1 turn
    printf("Player 1, enter your word: ");
    scanf("%s", word);
    score1 = compute_word_score(word);
    printf("Player 1 scored %d points.\n", score1);
    
    // Player 2 turn
    printf("Player 2, enter your word: ");
    scanf("%s", word);
    score2 = compute_word_score(word);
    printf("Player 2 scored %d points.\n", score2);
    
    // Determining the winner
    if (score1 > score2) {
        printf("Player 1 wins with %d points!\n", score1);
    } else if (score2 > score1) {
        printf("Player 2 wins with %d points!\n", score2);
    } else {
        printf("It's a tie! Both players scored %d points.\n", score1);
    }

    return 0;
}
