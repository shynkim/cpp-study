#include <iostream>
using namespace std;

class Box {
private: // private은 클래스 내부에서만 쓸 수 있다
	int width; //가로길이
	int length; //세로길이
	char lf; //문자
public:
	void setSize(int w,int h) {
		width = w; 
		length = h;
	}
public:
	Box(int x=0, int y=0) {
		width = x; 
		length = y;
	}
public:
	void setFil(char f) {
		lf = f; 
	}
public:
	void draw() {
		for (int i = 0; i < length; i++) { //가로*세로 만큼 출력
			for (int j = 0; j < width; j++) {
				cout << lf; 
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main(void) {

	Box s1(10,2); 
	s1.setSize(3,4); //사이즈를 변경한다
	s1.setFil('*');
	s1.draw();

	Box s2(8,2);
	s2.setSize(6,10); //사이즈를 변경한다
	s2.setFil('^');
	s2.draw();

	return 0;
}
