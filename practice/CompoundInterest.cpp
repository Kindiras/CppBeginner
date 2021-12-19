/*************************************************
FINANCIAL SIMULATION

You have a bank account whose annual interest
rate depends on the amount of money you have
in your account at the beginning of each year.
Your annual rate starts at 3%, and grows by an
additional half a percent for each thousand
dollars in your account up to, but not exceeding
8%. Interest in this account is compounded monthly
at the annual rate.  Each year you also make a
transaction (before the bank figures out what
your rate is).  Write a program that simulates
these financial interactions for 5 years.  At
the beginning of each year it should ask the
user whether he wants to make a deposit or
withdrawl and for how much.  At the end, it
should print out the balance at the end of the
5th year.
*************************************************/



#include <iostream>
using namespace std;

#include <iostream>

double transaction(double);
double rate(double);
double compound(double);

int main()
{
  // Simulate 5 years
  double B = 0.0;
  for(int i = 0; i < 5; i++)
  {
    B = transaction(B);
    double r = rate(B);
    B = B*compound(r);
  }

  // Print out final balance
  cout << "Balance = "
       <<  B << endl;

  return 0;
}

/*******************************************
 ** Interacts with user to perform transaction
 ** and returns new balance.
 *******************************************/
double transaction(double B)
{
  // Get type of transaction
  char act;
  cout << "Enter w: withdrawl d:deposit ";
  cin >> act;

  // Get amount of transaction
  double A;
  cout << "Enter amount: ";
  cin >> A;

  // Get new Balance figure
  if (act == 'w')
    B = B - A;
  else
    B = B + A;

  return B;
}

/*******************************************
 ** Computes iunterest rate based on Balance.
 *******************************************/
double rate(double B)
{
  // Get # of thousands
  int T = B/1000;

  // Calc rate
  double r = 3 + T*0.5;
  if (r > 8)
    r = 8;

  return r;
}

/*******************************************
 ** Gives the value of one dollar after a
 ** year of monthly compounded interest at
 ** annual rate r.
 *******************************************/
double compound(double r)
{
  // Sim. year with monthly compounding
  double R = r/100, total = 1.0;
  for(int i = 0; i < 12; i++)
    total = total*(1 + R/12);

  return total;
}
