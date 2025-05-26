#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest, total;

    cout << "Principal: ";
    cin >> principal;
    cout << "Interest Rate: ";
    cin >> rate;
    cout << "Time: ";
    cin >> time;

    interest = principal * (rate / 100) * time;
    total = principal + interest;

    cout << "Interest Earned: " << interest << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}