#include <stdio.h>
#include <string.h>

const int TOTAL_LOTTERIES = 10; 
const int NUMBER_LENGTH = 7;     

int main() {
    // Predefined lottery numbers
    const char *lotteryNumbers[] = {
        "123456", "654321", "112233", "445566", "778899",
        "990011", "223344", "556677", "889900", "101010"
    };

    // Lottery ka asli winning number
    const char winningNumber[] = "445566";
    char userNumber[NUMBER_LENGTH];
    int isValid = 0;

    printf("Welcome to the Lottery Program!\n");
    printf("Here are the 10 lottery numbers:\n");

    // Display all lottery numbers jo list mai hai
    for (int i = 0; i < TOTAL_LOTTERIES; i++) {
        printf("%d. %s\n", i + 1, lotteryNumbers[i]);
    }

    do {
        printf("\nSelect one lottery number from the above list and enter it: ");
        scanf("%6s", userNumber);

        //yeh no. list mai hai ki nhi usko check krne ke liye
        for (int i = 0; i < TOTAL_LOTTERIES; i++) {
            if (strcmp(lotteryNumbers[i], userNumber) == 0) {
                isValid = 1;
                break;
            }
        }

        if (!isValid) {
            printf("Invalid input. Please enter a number from the provided list.\n");
        }

    } while (!isValid);

    // Check if the user-entered number is the winning number or not
    if (strcmp(userNumber, winningNumber) == 0) {
        printf("\nCongratulations! Your number %s is the winning lottery number!\n", userNumber);
    } else {
        printf("\nSorry! Better luck next time. Your number %s did not win.\n", userNumber);
    }

    return 0;
}