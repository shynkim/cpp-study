#include<iostream>
using namespace std;

int main() {
	int answer;
	int seat[3][10] = {};       //좌석 배열 모두 0으로 초기화
	int x, y;       //실제 좌석 좌표값
	int a, b;        //사용자가 보는 좌표값

	while (1) {                                //좌석예약 여부를 묻고 답이 0이면 진행하고 1이면 break문으로 while문을 빠져나온다
		cout << "좌석 예약하시겠습니까? (0 이나 1 선택)";
		cin >> answer;
			if (answer == 0) {
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "------------------------------------" << endl;
			for (int i = 0; i < 3; i++) {        //현재 좌석 출력
				for (int j = 0; j < 10; j++) {
					cout << seat[i][j] << " ";      
				}
				cout << "\n";
			}
			cout << "몇열, 몇번째 좌석을 예약하시겠습니까?:";
			cin >> a; 
			cin >> b;
			x = a - 1;             //사용자가 볼때 좌표는 1부터 시작이지만 실제 배열은 0부터 시작이므로 1씩 빼줘야 한다
			y = b - 1;
			if (seat[x][y] == 1) {          //입력받은 좌표에 들어있는 값이 1이면 이미 예약된 좌석
				cout << "이미 예약된 자리입니다" << endl;
			}
			else {       //1아 아닐 경우 예약 진행
				seat[x][y] = 1; 
				cout << "예약되었습니다" << endl;
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
			cout << "좌석 예약 종료";
			break; //break문으로 while문을 빠져나온다
		}

	}

	return 0;
	}

