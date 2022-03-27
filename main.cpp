//Afham Bashir 
//09.07.2020
#include <iostream>
using namespace std;

unsigned int bin1s (unsigned int n);        //function prototype  
int count = 0;                              //global variable to track number of times the recursive function is called

int main() {                                      
	unsigned int num;                        //positive integer entered to convert to binary
	cout << "Enter number: ";
	cin >> num;
	cout << "Number of 1's in " <<num<<"'s binary respresentation: " << bin1s(num) <<endl;
  cout << "Times function bin1s was called : " << count <<endl; 
	return 0;
}

unsigned int bin1s (unsigned int n) {
  static unsigned ones = 0;              //this keep tracks of ones in the binary conversion of the number, making this varaible statics lets the variable not be reintiallizeded every time the recursive funtion is called. 
  count++;                              //increamented for every function call
    if (n%2 == 1)                       // if the numbers mod 2 is equal to 1, this will mean there is a 1 in its binary conversion
      ones++;                           //increaments the variable to track ones. 
    if (n/2 != 0) {                     // if the number can still be divided by 2, recursivly call the function. 
        bin1s(n / 2);}
  return ones;                          // returns count of ones. 
}