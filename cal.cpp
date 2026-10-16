#include <iostream>
using namespace std;
int main()
{
	int accountPin;
	float totalamount;
	double transactionamount;
	char accountTitle;
	bool isActive = true;
	accountPin = 1050;
	totalamount = 2000.0;
	transactionamount = 75.5;
	accountTitle = 'D';
	cout << "size of int" << sizeof(accountPin) << "bytes" << endl;
	cout << "size of float" << sizeof(totalamount) << "bytes" << endl;
	cout << "size of double" << sizeof(transactionamount) << "bytes" << endl;
	cout << "size of char" << sizeof(accountTitle) << "bytes" << "\n";
	cout << "size of bool" << sizeof(isActive) << "bytes";
	int bytesPerAccount = sizeof(accountPin) + sizeof(transactionamount) + sizeof(accountTitle) + sizeof(isActive);
	cout << "Memory for one account" << bytesPerAccount;
	int totalBytes = bytesPerAccount * 10000;
	double totalKB = totalBytes / 1024.0;
	double totalMB = totalKB / 1024.0;
	cout << "Memory for 10,000 accounts: " << totalBytes << " bytes" << endl;
	cout << "Memory for 10,000 accounts: " << totalKB << " KB" << endl;
	cout << "Memory for 10,000 accounts: " << totalMB << " MB" << endl;
	return 0;



}
