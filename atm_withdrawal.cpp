#include <iostream>
using namespace std;

int main() {
    double balance, amount;
    int pinStatus;

    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    cout << "Enter PIN status (1 = correct, 0 = incorrect): ";
    cin >> pinStatus;

    if (pinStatus != 1) {
        cout << "Invalid PIN" << endl;
    } else if (amount <= 0) {
        cout << "Invalid Amount" << endl;
    } else if (amount > balance) {
        cout << "Insufficient Balance" << endl;
    } else {
        double remaining = balance - amount;
        if (remaining >= 500) {
            cout << "Withdrawal Successful" << endl;
        } else {
            cout << "Low Balance After Withdrawal" << endl;
        }
        cout << "Remaining Balance: " << remaining << endl;
    }

    return 0;
}
