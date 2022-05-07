#include <iostream>
using namespace std;

int total(int *p);
void myaccounts(string *p, int *q);

int main() {

	string bank_name[4]={"하나","우리","신한","국민"};
	int bank[4] = {5000,4000,7000,10000};
	int total_money=0;

	cout << "***********SWING 자산관리 서비스************" << endl;
	myaccounts(bank_name, bank);
	total_money = total(bank);
	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << " 입니다" << endl;
	cout << "*******************************" << endl;

	return 0;
}

int total(int *p) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum = sum + *(p + i);
	}
	return sum;
}

void myaccounts(string *p, int *q) {
	cout << "-----------은행 별 계좌정보---------" << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(p + i) << "|" ;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << *(q + i) << "|";
	}
	cout << endl;
	cout << "------------------------------" << endl;
}