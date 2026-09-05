

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
    double hours, rate, pay, yearly, percentage, netpay, netYearly;
    string answer;

    cout << "How many hours did work? ";
    cin >> hours;
    cout << "How much do you get paid per hour? ";
    cin >> rate;
    pay = hours * rate; 
    yearly = pay * 52;
    cout.imbue(locale(""));
    cout << fixed << setprecision(2);
    cout << "You have earned $" << pay << " this week." << endl;
    cout << "For an entire year that would be $" << yearly << endl 
    cout << "Would you like the total after taxes & deductions?";
    cout << " Yes or No?: ";
    cin >> answer;

    if (answer == "Yes" or answer == "yes")
    {
        cout << "What percentage would you like me to deduct?: ";
        cin >> percentage;

        netpay = pay - (pay * percentage / 100);
        netYearly = yearly - (yearly * percentage / 100);
        cout << "Net Pay for the Week: $" << netpay << endl;
        cout << "Net Pay for the Year: $" << netYearly << endl;
    }
    else if (answer == "No" or answer == "no")
    {
        cout << "Okay, no deductions will be calculated. Thank you" << endl;
    }
    else
    {
        cout << "Invalid answer. Please enter Yes or No." << endl;
    }

    return 0;
}

