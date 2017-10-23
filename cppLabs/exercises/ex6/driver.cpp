// Driver.cpp
// Create two priority queues, and use the << operator to show information on
//  each account as you pop the accounts from each priority queue.

#include <queue>
#include <vector>
#include "bank.h"
#include "staff.h"

using namespace std;

int main(){
  cout << "Savings accounts Examinations: " << endl;

  priority_queue <Savings, vector<Savings>, Bank> ba;
  ba.push(Savings("Finn", 6890, 234));
  ba.push(Savings("Jake", 9432, 100));
  ba.push(Savings("Princess BubbleGum", 9113, 150));
  ba.push(Savings("Ice King", 7324, 450));

  cout << "Bank Accountants examination in Ascending Order of Account Number: " << endl;
  while(ba.size() > 0){
    cout << ba.top() << endl;
    ba.pop();
  }

  priority_queue <Savings, vector<Savings>, Staff> ss;
  ss.push(Savings("Tommy", 6432, 2590));
  ss.push(Savings("Chucky", 9654, 1070));
  ss.push(Savings("Angelica", 9235, 1293));
  ss.push(Savings("Liza", 3247, 432));

  cout << "Sales Staff examination in Descending Order of Balance: " << endl;
  while(ss.size() > 0){
    cout << ss.top() << endl;
    ss.pop();
  }

  return 0;
}
