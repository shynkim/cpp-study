#include <iostream>
using namespace std;

class Shape {
private:
	string NAME;
	int A; //가로1
	int B; //세로
	int C; //가로2

public:
	Shape(){}
	~Shape(); //소멸자 함수 생성
	Shape(int a , int b) { //사각형, 타원 길이 값 받음
		A = a;
		B = b;
		C = 0;
	}

	Shape(int a , int b , int c ) { //사다리꼴 길이 값 받음
		A = a;
		B = b;
		C = c;
	}

	void AreaOval();
	void AreaLadder();
	void AreaRect();

	void setTwo(int a,int b) { //사각형, 타원 길이 수정 함수
		A = a;
		B = b;
	}
	void setThree(int a,int b,int c) { //사다리꼴 길이 수정 함수
		A = a;
		B = b;
		C = c;
	}
};

void Shape::AreaOval() {
	cout << "타원의 넓이는 " << A * B * 3.14 << "이다" << endl;
	NAME = "Circle"; //NAME을 변경시켜 ~Shpae()함수에서 사용하도록 한다
}
void Shape::AreaLadder() {
	cout << "사다리꼴의 넓이는 " << (A + B) * C / 2 << "이다" << endl;
	NAME = "Ladder";
}
void Shape::AreaRect() {
	cout << "사각형의 넓이는 " << A * B << "이다" << endl;
	NAME = "Rectangular";
}
Shape::~Shape() {
	cout << "Shape 소멸"<< NAME << "클래스" << endl;
}

int main() {

	Shape a;
	a.setTwo(2,3);
	a.AreaOval();

	Shape b(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4);
	c.AreaLadder();
	c.setThree(5,10,6); //사다리꼴 길이 값 변경
	c.AreaLadder();

	return 0;
}