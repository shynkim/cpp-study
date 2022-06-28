#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Charactor {
	string name;
	int age;
	string job;
public:
	Charactor();
	Charactor(const string n, int a, string j);
	Charactor(const Charactor& c);
	
	void show() {
		cout << "ĳ���� �̸�:" << name << "\nĳ���� ����:" << age << "\nĳ���� ����:" << job << endl;
	}
};

Charactor::Charactor() {
	name = "";
	age = 0;
	job = "";
}

Charactor::Charactor(const string n, int a, string j) {
	name = n;
	age = a;
	job = j;
}

Charactor::Charactor(const Charactor& c) {
	name = c.name;
	age = c.age;
	job = c.job;
	
	cout << "ĳ���Ͱ� ����Ǿ����ϴ�" << endl;
}

int main() {

	cout << "******ĳ���� ����******" << endl;
	string n;
	int a;
	string j;
	cout << "ĳ���� �̸�:";
	cin >> n;
	cout << "ĳ���� ����:";
	cin >> a;
	cout << "ĳ���� ����:";
	cin >> j;
	Charactor user(n, a, j);

	cout << "******ĳ���� ����******" << endl;
	Charactor coppy(user);

	while (1) {
		int num;
		cout << "\n";
		cout << "=========ĳ���� ����=========" << endl;
		cout << "\n3.ĳ���� ���� Ȯ��\n4.ĳ���� ���� ����\n5.����" << endl;
		cout << "��ȣ�� �������ּ���:";
		cin >> num;
		cout << "\n";
		
		
		if (num == 3) {
			cout << "******ĳ���� ����******" << endl;
			user.show();
			coppy.show();
		}
		else if (num == 4) {
			cout << "******ĳ���� ���� ����******" << endl;
			int ans;

			cout << "�����ϰ� ���� ĳ����(1 or 2):";
			cin >> ans;
			
			cout << "ĳ���� �̸�:";
			cin >> n;
			cout << "ĳ���� ����:";
			cin >> a;
			cout << "ĳ���� ����:";
			cin >> j;

			if (ans == 1) {
				
				Charactor user(n, a, j);
				cout << "-->";
				user.show();
				cout << "���������� �����Ǿ����ϴ�" << endl;
			}
			else {
				
				Charactor coppy(n, a, j);
				cout << "-->";
				coppy.show();
				cout << "���������� �����Ǿ����ϴ�" << endl;
			}
		}
		else if (num == 5)
			return 0;
		else
			cout << "�ٽ� �Է��ϼ���" << endl;
	}
	return 0;
}