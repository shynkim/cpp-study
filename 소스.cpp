#include <iostream>
using namespace std;

int main() {

	int r, num; //�������� �������� ������ ������ �Է¹��� ���� ����
	int number[100]; //����� ���� �� �Է¹��� �迭 ����

	srand(time(NULL));
	r = rand() % 100; //�������� �̿��� 100 �̸��� ������ ��������
	cout << "������ ��:" << r << endl;

	cout << "Ư�� ��� ����:";
	cin >> num;

	for (int i = 0; i < num; i++) {  //�Է¹��� num ��ŭ �ݺ����� ���� ��� ������ �����Ѵ�
		cout << i + 1 << "��° Ư�� ���:";
		cin >> number[i];
		cout << "<Ư������� ����ϴ� ���α׷�>" << endl;
		for (int j = number[i]; j <= r; j++) { //���Ϸ��� ����� ����: ����� ���Ϸ��� �Է¹��� ��~������
			if (j % number[i] == 0) //0���� ������ ������ �� ����̴�
				cout << j << ",";
		}
		cout << endl;
		cout << "<Ư����� ���� ����ϴ� ���α׷�>" << endl;
		
		for (int j = 1; j < number[i]; j++) { //'1~(���-1)' ���� ���
			cout << j << ",";
		}

		for (int j = number[i]; j <= r; j++) {
			if (j % number[i] != 0) //�������� �߻��ϸ� ����� �ƴϴ�
				cout << j << ",";
		}
		cout << endl;
	}

	return 0;
}