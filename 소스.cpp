#include <iostream>
using namespace std;

int main() {

	int r, num; //랜덤값을 지정받을 변수와 개수를 입력받을 변수 선언
	int number[100]; //배수를 구할 값 입력받을 배열 선언

	srand(time(NULL));
	r = rand() % 100; //나머지를 이용해 100 미만의 랜덤값 지정받음
	cout << "랜덤한 수:" << r << endl;

	cout << "특정 배수 개수:";
	cin >> num;

	for (int i = 0; i < num; i++) {  //입력받은 num 만큼 반복문을 돌려 배수 변수에 저장한다
		cout << i + 1 << "번째 특정 배수:";
		cin >> number[i];
		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (int j = number[i]; j <= r; j++) { //구하려는 배수의 범위: 배수를 구하려고 입력받은 값~랜덤값
			if (j % number[i] == 0) //0으로 나누어 떨어질 때 배수이다
				cout << j << ",";
		}
		cout << endl;
		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		
		for (int j = 1; j < number[i]; j++) { //'1~(배수-1)' 까지 출력
			cout << j << ",";
		}

		for (int j = number[i]; j <= r; j++) {
			if (j % number[i] != 0) //나머지가 발생하면 배수가 아니다
				cout << j << ",";
		}
		cout << endl;
	}

	return 0;
}