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
		cout << "캐릭터 이름:" << name << "\n캐릭터 나이:" << age << "\n캐릭터 직업:" << job << endl;
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
	
	cout << "캐릭터가 복사되었습니다" << endl;
}

int main() {

	cout << "******캐릭터 생성******" << endl;
	string n;
	int a;
	string j;
	cout << "캐릭터 이름:";
	cin >> n;
	cout << "캐릭터 나이:";
	cin >> a;
	cout << "캐릭터 직업:";
	cin >> j;
	Charactor user(n, a, j);

	cout << "******캐릭터 복사******" << endl;
	Charactor coppy(user);

	while (1) {
		int num;
		cout << "\n";
		cout << "=========캐릭터 관리=========" << endl;
		cout << "\n3.캐릭터 정보 확인\n4.캐릭터 정보 수정\n5.종료" << endl;
		cout << "번호를 선택해주세요:";
		cin >> num;
		cout << "\n";
		
		
		if (num == 3) {
			cout << "******캐릭터 정보******" << endl;
			user.show();
			coppy.show();
		}
		else if (num == 4) {
			cout << "******캐릭터 정보 수정******" << endl;
			int ans;

			cout << "수정하고 싶은 캐릭터(1 or 2):";
			cin >> ans;
			
			cout << "캐릭터 이름:";
			cin >> n;
			cout << "캐릭터 나이:";
			cin >> a;
			cout << "캐릭터 직업:";
			cin >> j;

			if (ans == 1) {
				
				Charactor user(n, a, j);
				cout << "-->";
				user.show();
				cout << "정상적으로 수정되었습니다" << endl;
			}
			else {
				
				Charactor coppy(n, a, j);
				cout << "-->";
				coppy.show();
				cout << "정상적으로 수정되었습니다" << endl;
			}
		}
		else if (num == 5)
			return 0;
		else
			cout << "다시 입력하세요" << endl;
	}
	return 0;
}