#include<iostream>
using namespace std;

class member {
public:
	string name;
	string id;
	string pw;

	void setName(int x); //ȸ������
	void setId(int x);
	void setPassword(int x);

	void getid(int* i); //�α���
	int getPassword(int* i);
	string getName(int* i);
};

class member list[100];

void setName(int x) {
	cout << "---------------" << endl;
	cout << "�̸�:";
	cin >> list[x].name;
}
void setId(int x) {
	cout << "���̵�:";
	cin >> list[x].id;
}
void setPassword(int x) {
	cout << "��й�ȣ:";
	cin >> list[x].pw;
}

void getid(int* i) {
	string identy;
	cout << "���̵�:";
	cin >> identy;
	for (int j = 0; j < 100; j++) {
		if (identy == list[j].id) 
			*i = j; //a�� j�� ����
	}
}

int getPassword(int* i) {
	string password;
	cout << "��й�ȣ:";
	cin >> password;
	if (password == list[*i].pw) {//password�� list.pw[a]�� ������ ����
		cout << "\n�α��� ����\n" << endl;
		return 0;
	}
	else
		return 1;
}

string getName(int* i) {
	return list[*i].name;//list[a].name ����
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
	css[0].name = "c++���α׷���";
	css[1].name = "linux ���α׷���";
	css[2].name = "������";
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
	cout << "�߰��� �м� ��ȣ>>";
	cin >> n;
	mine[m] = css[n-1];
	m++;
}

void put_bag() {
	for(int i=0;i<3;i++)
		cout << "[" << i << "]" << mine[i].name << ">>" << mine[i].number << endl;
}

int main() {
	int i = 0; //ȸ������
	int* p = &i;

	int a; //�α���
	int* q = &a;

	while (1) {
		int num;
		cout << "------���￩�ڴ��б� ���������ý���------" << endl;
		cout << "1.ȸ������ \n2.�α���" << endl;
		cout << "��ȣ�� �Է��ϼ���>>";
		cin >> num;
		if (num == 1) { //ȸ������
			setName(i);
			setId(i);
			setPassword(i);
			i++; // i�� 1�� �������Ѽ� ���ʴ�� list[i]�� ����
			cout << "===ȸ������ ����===" << endl;
			cout << endl;
		}
		else if (num == 2) { //�α���
			getid(&a);
			int tf = getPassword(&a); //tf�� getpassword�Լ� ���ϰ� ����
			if (tf == 0) {
				cout << getName(&a) << "�� ȯ���մϴ�" << endl;
				int n;
				while (1) {
					cout << "==============" << endl;
					cout << "1.��ٱ���\n2.���Ǵ��\n3.������û Ȯ��\n4.�α׾ƿ�" << endl;
					cout << "��ȣ�� �Է��ϼ���:";
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
				cout << "�α��� ����" << endl;
		}
		else 
			cout << "1 �Ǵ� 2�� �Է��ϼ���" << endl;
	}


	return 0;
}
