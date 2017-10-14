// sarwari-CC_pay.cpp
#include<iostream>
#include<cmath>
#include<string>
#include<math.h>
using namespace std;

  // Variable Declaration (Assignment)
  float aprInteger;
  float creditCardBalance;
  float amountMonthlyPay;
  string usersName;
  const int MONTHS_IN_A_YEAR = 12;
  void calculation();

int main()
{

  // Program Greeting
  cout << "Hello! and welcome to this program. Today I will tell you how";
  cout << " long it will take you to pay off your credit card." << '\n';
  cout << endl;

  // Bonus #1 - Get user's name
  cout << "What is your name?" << '\n';
  getline(cin, usersName);
  cout << endl;
  cout << "Welcome " << usersName << "," << '\n';

  // Input
  cout << "Enter Your current credit card balance: " << '\n';
  cin >> creditCardBalance;
  cout << endl;
  cout << "Enter your annual percentage rate as an integer: " << '\n';
  cin >> aprInteger;
  cout << endl;
  cout << "Enter the amount you are able to pay monthly: " << '\n';
  cin >> amountMonthlyPay;
  cout << endl;

 // Converted into a function
calculation();
  // Output (Bonus #2 Make Output in a table)
  cout << "Current credit card balance:           " << '\t' << creditCardBalance << '\n';
  cout << "Anual percentage rate:           " << '\t' << aprPercentage << "%" << '\n';
  cout << "Amount you are able to pay monthly: " << '\t' << amountMonthlyPay << '\n';
  cout << "Total months to pay off credit card: " << '\t' << round(totalMonthsToPayOff) << '\n';
  cout << endl << '\n';

  // Bonus #3 Tell user how long it will take with paying 10% more of your monthly payements
  // Calculations take place under the (Calculation Comment)
  cout << "If you pay 10% more of your current monthly payements:" << '\n';
  cout << "Total months to pay off credit card: " << round(totalMonthsToPayOffTenPercent) <<'\n';
  cout << endl;

  // Bonus #4 Tell user how long it will take with paying 20% more of your monthly payements
  // Calculations take place under the (Calculation Comment)
  cout << "If you pay 20% more of your current monthly payements" << '\n';
  cout << "Total months to pay off credit card: " << round(totalMonthsToPayOffTwentyPercent) <<'\n';
  return 0;
}

void calculations(){
  // Calculations (Transformation)
  float aprPercentage = (aprInteger / 100);
  float monthlyRate = (aprPercentage / MONTHS_IN_A_YEAR);
  float tenPercentOfMonthlyPay = (amountMonthlyPay * .10) + amountMonthlyPay;
  float twentyPercentOfMonthlyPay = (amountMonthlyPay * .20) + amountMonthlyPay;
  float numerator = (1 - ((creditCardBalance * monthlyRate))/amountMonthlyPay);
  float denominator = (1 + monthlyRate);
  float totalMonthsToPayOff = -log(numerator) / log(denominator);
  float numeratorTenPercent = (1 - ((creditCardBalance * monthlyRate))/tenPercentOfMonthlyPay);
  float totalMonthsToPayOffTenPercent = -log(numeratorTenPercent) / log(denominator);
  float numeratorTwentyPercent = (1 - ((creditCardBalance * monthlyRate))/twentyPercentOfMonthlyPay);
  float totalMonthsToPayOffTwentyPercent = -log(numeratorTwentyPercent) / log(denominator);
}
