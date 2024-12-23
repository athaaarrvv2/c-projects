#include <iostream>
#include <string>

using namespace std;

int main() {
    // Predefined lottery numbers
    const int TOTAL_LOTTERIES = 10;
    string lotteryNumbers[TOTAL_LOTTERIES] = {
        "123456", "654321", "112233", "445566", "778899",
        "990011", "223344", "556677", "889900", "101010"
    };
    // Lottery ka asli winning number
    string winningNumber = "445566";
    string userNumber;
    bool isValid = false;

    cout << "Welcome to the Lottery Program!\n";
    cout << "Here are the 10 lottery numbers:\n";
    
     //for loop taaki ek ek krke saare no. check ho   
    for (int i = 0; i < TOTAL_LOTTERIES; i++) {
        cout << i + 1 << ". " << lotteryNumbers[i] << "\n"; 
    }
    // Ask user to select a number with validation ki voh no. list mai hai bhi ki nhi
    do {
        cout << "\nSelect one lottery number from the above list and enter it: ";
        cin >> userNumber;

        // Check krne ke loye ki user ne jo no. daala hai voh exist krta bhi hai ki nhi
        for (int i = 0; i < TOTAL_LOTTERIES; i++) {
            if (lotteryNumbers[i] == userNumber) {
                isValid = true;
                break;
            }
        }

        if (!isValid) {
            cout << "Invalid input. Please enter a number from the provided list.\n";
        }

    } while (!isValid);

    // Check krne ke liye ki user k=ne jo no. daala voh winning no. hai ki nhi
    if (userNumber == winningNumber) {
        cout << "\nCongratulations! Your number " << userNumber << " is the winning lottery number!\n";
    } else {
        cout << "\nSorry! Better luck next time. Your number " << userNumber << " did not win.\n";
    }

    return 0;
}