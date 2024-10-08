#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(const char *text);
int count_words(const char *text);
int count_sentences(const char *text);
float calculate_coleman_liau_index(int letters, int words, int sentences);
void classify_readability_level(float index);

int main() {
    char text[1000];

    // Input the text
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    // Count letters, words, and sentences
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Calculate the Coleman-Liau index
    float index = calculate_coleman_liau_index(letters, words, sentences);

    // Classify and display the readability level
    classify_readability_level(index);

    return 0;
}

int count_letters(const char *text) {
    int letters = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            letters++;
        }
    }
    return letters;
}

int count_words(const char *text) {
    int words = 0;
    int in_word = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    if (in_word) {
        words++;
    }
    return words;
}

int count_sentences(const char *text) {
    int sentences = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }
    return sentences;
}

float calculate_coleman_liau_index(int letters, int words, int sentences) {
    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;
    return 0.0588 * L - 0.296 * S - 15.8;
}

void classify_readability_level(float index) {
    int grade_level = round(index);
    if (grade_level < 1) {
        printf("Readability level: Before Grade 1\n");
    } else if (grade_level >= 16) {
        printf("Readability level: Grade 16+\n");
    } else {
        printf("Readability level: Grade %d\n", grade_level);
    }
}
