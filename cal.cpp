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
	double totalKB = totalBytes / 1024.0;//displays memory of 10000 accounts in Kilo Bytes
	double totalMB = totalKB / 1024.0;//dispalys memory of 10000 accounts in Mega Bytes
	int KBperAccount = (bytesperAccount1024);
	cout << "Memory for 10,000 accounts: " << totalBytes << " bytes" << endl;
	cout << "Memory for 10,000 accounts: " << totalKB << " KB" << endl;
	cout << "Memory for 10,000 accounts: " << totalMB << " MB" << endl;
	cout << "Memory of one account in MB:  " << KBperAccount << KB << endl;
	return 0;



}