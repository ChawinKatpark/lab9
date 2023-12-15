#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan, rate, can;
int year = 1, i = 0;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> can;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	double realrate = (rate*loan)/100;
	double total = loan+realrate;
	double last = total-can;
	
	while (last > 0) {
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << realrate;
    cout << setw(13) << left << total;
	if (can > total) {
	    can = total;
    }
    cout << setw(13) << left << can;	 
    cout << setw(13) << left << last;
    last = total-can;
    cout << "\n";
    
    year = year+1;
    loan = last;
    realrate = (rate*loan)/100;
    total = loan+realrate;
    last = total-can;
	}
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << realrate;
    cout << setw(13) << left << total;
	if (can > total) {
	    can = total;
	    last = total-can;
    }
    cout << setw(13) << left << can;	 
    cout << setw(13) << left << last;
    cout << "\n";
	
	return 0;
}
