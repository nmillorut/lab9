#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double moneyl,rate,moneyp,total,PB,interest,nb;
	cout << "Enter initial loan: ";
	cin >> moneyl;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> moneyp;
	
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
	
	int i=0;
	while (true) {
		PB=moneyl;
		interest=moneyl*(rate/100);
		total=moneyl+interest;
		nb=total-moneyp;

		if (nb>0){
			moneyl=nb;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << PB;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << moneyp;
			cout << setw(13) << left << nb;
			cout << "\n";
			++i;
		}
		else if(nb<0){
			if (total<moneyp){moneyp=total;}
			nb=0;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << PB;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << moneyp;
			cout << setw(13) << left << nb;
			cout << "\n";
			break;
		}
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	return 0;
}
