#include <iostream>
using namespace std;

class Box {
private: // private�� Ŭ���� ���ο����� �� �� �ִ�
	int width; //���α���
	int length; //���α���
	char lf; //����
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
		for (int i = 0; i < length; i++) { //����*���� ��ŭ ���
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
	s1.setSize(3,5); //����� �����Ѵ�
	s1.setFil('*');
	s1.draw();

	Box s2(8,2);
	s2.setSize(6,10); //����� �����Ѵ�
	s2.setFil('^');
	s2.draw();

	return 0;
}