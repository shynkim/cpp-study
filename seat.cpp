#include<iostream>
using namespace std;

int main() {
	int answer;
	int seat[3][10] = {};       //�¼� �迭 ��� 0���� �ʱ�ȭ
	int x, y;       //���� �¼� ��ǥ��
	int a, b;        //����ڰ� ���� ��ǥ��

	while (1) {                                //�¼����� ���θ� ���� ���� 0�̸� �����ϰ� 1�̸� break������ while���� �������´�
		cout << "�¼� �����Ͻðڽ��ϱ�? (0 �̳� 1 ����)";
		cin >> answer;
			if (answer == 0) {
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "------------------------------------" << endl;
			for (int i = 0; i < 3; i++) {        //���� �¼� ���
				for (int j = 0; j < 10; j++) {
					cout << seat[i][j] << " ";      
				}
				cout << "\n";
			}
			cout << "�, ���° �¼��� �����Ͻðڽ��ϱ�?:";
			cin >> a; 
			cin >> b;
			x = a - 1;             //����ڰ� ���� ��ǥ�� 1���� ���������� ���� �迭�� 0���� �����̹Ƿ� 1�� ����� �Ѵ�
			y = b - 1;
			if (seat[x][y] == 1) {          //�Է¹��� ��ǥ�� ����ִ� ���� 1�̸� �̹� ����� �¼�
				cout << "�̹� ����� �ڸ��Դϴ�" << endl;
			}
			else {       //1�� �ƴ� ��� ���� ����
				seat[x][y] = 1; 
				cout << "����Ǿ����ϴ�" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "------------------------------------" << endl;
				for (int i = 0; i < 3; i++) {    
					for (int j = 0; j < 10; j++) {
						cout << seat[i][j] << " ";
					}
					cout << "\n";
				}
			}
		}
		else {
			cout << "�¼� ���� ����";
			break; //break������ while���� �������´�
		}

	}

	return 0;
	}
