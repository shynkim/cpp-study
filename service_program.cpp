#include <iostream>
using namespace std;

int total(int *p);
void myaccounts(string *p, int *q);

int main() {

	string bank_name[4]={"�ϳ�","�츮","����","����"};
	int bank[4] = {5000,4000,7000,10000};
	int total_money=0;

	cout << "***********SWING �ڻ���� ����************" << endl;
	myaccounts(bank_name, bank);
	total_money = total(bank);
	cout << "���� SWING �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ��� " << total_money << " �Դϴ�" << endl;
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
	cout << "-----------���� �� ��������---------" << endl;
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