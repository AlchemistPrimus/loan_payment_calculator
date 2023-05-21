#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

double interestOnlyLoan(long principal, double interestRate, int numberOfYearlyPayments){
    return principal * (interestRate / numberOfYearlyPayments);
}

double armotizingLoans(long principal, double periodicInterestRate, int loanTermPeriod){
    double rate = periodicInterestRate / 12;
    double intermediateCalculation = pow(1+rate, loanTermPeriod) - 1;
    double intermediateCalculation2 = rate * pow(1+rate, loanTermPeriod);
    return principal / intermediateCalculation / intermediateCalculation2;
}

int main(){
    cout << "LOAN PAYMENT CALCULATOR" << endl <<
        "==============================" << endl <<
        "Select the type of loan to calculate:" << endl <<
        "1. Interest Only Loans" << endl <<
        "2. Armotizing Loans\n";
    int choice;
    cin >> choice;

    switch (choice){
        case 1:{
            cout << "Computing interest only loans." << endl <<
                "Here loan payments go entirely to your interest for your interest only period" << endl <<
                "-----------------------------------------------------------------------------" << endl <<
                "Enter your principal amount:";
            long principal_;
            cin >> principal_;

            cout << "Enter your interest rate:";
            double interestRate_;
            cin >> interestRate_;

            cout << "payment period in months:";
            int duration;
            cin >> duration;

            double amount = interestOnlyLoan(principal_, interestRate_, 12);
            double totalPayment = amount * duration;
            cout << "Your monthly payment for interest only loan is: " << amount << endl;
            cout << "Expected total payment for the loan is: " << totalPayment <<endl;
            }
            break;
        case 2:{
            cout << "Computing armotized loans." << endl <<
                "This is an installment loan and you must make regulay payments over a specific duration." << endl <<
                "------------------------------------------------------------------------------" << endl <<
                "Enter your principal amount:";
            long principal_;
            cin >> principal_;

            cout << "Enter your peridic interest rate:";
            double periodicRate;
            cin >> periodicRate;

            cout << "Enter loan term period:";
            int loanTermDuration;
            cin >> loanTermDuration;

            cout << "How long do you expect to pay this loan in months?";
            int myduration;
            cin >> myduration;

            double monthlyAmount = armotizingLoans(principal_, periodicRate, loanTermDuration);
            double totalPay = monthlyAmount * myduration;
            cout << "Your monthly armotized loan payment is:" << monthlyAmount << endl;
            cout << "Expected total payment for the loan is:" << totalPay << endl;
            }
            break;
        default:
            cout << "Invalid option. Enter 1 or 2 to continue.";
            cout << "Exiting the system";
            break;
    }
    return 0;
}
