#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000


int isNonDecreasing(int number) {
    int prevDigit = 10; 
    while (number > 0) {
        int digit = number % 10;
        if (digit > prevDigit) {
            return 0; 
        }
        prevDigit = digital;
        number /= 10;
    }
    
    return 1; 
}

int main() {
    char line[MAX_SIZE];
    int numbers[MAX_SIZE], count = 0;
    
    
    printf("Nhap dãy so (k?t thúc b?ng EOF):\n");
    while (fgets(line, sizeof(line), stdin)) {
        char *token = strtok(line, " \n");
        while (token != NULL) {
            int num = 0;
            
            for (int i = 0; token[i] != '\0'; i++) {
                if (isdigit(token[i])) {
                    num = num * 10 + (token[i] - '0');
                }
            }
            numbers[count++] = num;
            token = strtok(NULL, " \n");
        }
    }
    
    
    int freq[MAX_SIZE] = {0};
    
    
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i])) {
            freq[numbers[i]]++;
        }
    }
    
    
    printf("Các so không giam và so lon xuat hien:\n");
    for (int i = 0; i < count; i++) {
        if (isNonDecreasing(numbers[i]) && freq[numbers[i]] > 0) {
            printf("S? %d xuat hien %d l?n\n", numbers[i], freq[numbers[i]]);
            freq[numbers[i]] = 0; 
        }
    }

    return 0;
}
