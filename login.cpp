#include<iostream>
using namespace std;

class member {
public:
	string name;
	string id;
	string pw;

	void setName(int x); //회원가입
	void setId(int x);
	void setPassword(int x);

	void getid(int* i); //로그인
	int getPassword(int* i);
	string getName(int* i);
};

class member list[100];

void setName(int x) {
	cout << "---------------" << endl;
	cout << "이름:";
	cin >> list[x].name;
}
void setId(int x) {
	cout << "아이디:";
	cin >> list[x].id;
}
void setPassword(int x) {
	cout << "비밀번호:";
	cin >> list[x].pw;
}

void getid(int* i) {
	string identy;
	cout << "아이디:";
	cin >> identy;
	for (int j = 0; j < 100; j++) {
		if (identy == list[j].id) 
			*i = j; //a에 j값 저장
	}
}

int getPassword(int* i) {
	string password;
	cout << "비밀번호:";
	cin >> password;
	if (password == list[*i].pw) {//password가 list.pw[a]와 같으면 성공
		cout << "\n로그인 성공\n" << endl;
		return 0;
	}
	else
		return 1;
}

string getName(int* i) {
	return list[*i].name;//list[a].name 리턴
}

class cart {
public:
	string name;
	int number;
	void print();
	void bag_course();
	void put_bag();
};
class cart css[3];
class cart mine[3];

void print() {
	css[0].name = "c++프로그래밍";
	css[1].name = "linux 프로그래밍";
	css[2].name = "리버싱";
	css[0].number = 1;
	css[1].number = 2;
	css[2].number = 3;
	for (int i = 0; i < 3; i++) {
		cout << "[" << i << "] " << css[i].name << " >> " << css[i].number << endl;
	}
}

int m = 0;
void bag_course() {
	int n;
	cout << "추가할 학수 번호>>";
	cin >> n;
	mine[m] = css[n-1];
	m++;
}

void put_bag() {
	for(int i=0;i<3;i++)
		cout << "[" << i << "]" << mine[i].name << ">>" << mine[i].number << endl;
}

int main() {
	int i = 0; //회원가입
	int* p = &i;

	int a; //로그인
	int* q = &a;

	while (1) {
		int num;
		cout << "------서울여자대학교 종합정보시스템------" << endl;
		cout << "1.회원가입 \n2.로그인" << endl;
		cout << "번호를 입력하세요>>";
		cin >> num;
		if (num == 1) { //회원가입
			setName(i);
			setId(i);
			setPassword(i);
			i++; // i를 1씩 증가시켜서 차례대로 list[i]에 저장
			cout << "===회원가입 성공===" << endl;
			cout << endl;
		}
		else if (num == 2) { //로그인
			getid(&a);
			int tf = getPassword(&a); //tf애 getpassword함수 리턴값 저장
			if (tf == 0) {
				cout << getName(&a) << "님 환영합니다" << endl;
				int n;
				while (1) {
					cout << "==============" << endl;
					cout << "1.장바구니\n2.강의담기\n3.수강신청 확인\n4.로그아웃" << endl;
					cout << "번호를 입력하세요:";
					cin >> n;
					if (n == 1) {
						print();
					}
					else if (n == 2) {
						bag_course();
					}
					else if (n == 3) {
						put_bag();
					}
					else if (n == 4) {
						break;
					}
				}
			}
			else 
				cout << "로그인 실패" << endl;
		}
		else 
			cout << "1 또는 2만 입력하세요" << endl;
	}


	return 0;
}
