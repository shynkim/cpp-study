#include <iostream>
using namespace std;

class Shape {
private:
	string NAME;
	int A; //����1
	int B; //����
	int C; //����2

public:
	Shape(){}
	~Shape(); //�Ҹ��� �Լ� ����
	Shape(int a , int b) { //�簢��, Ÿ�� ���� �� ����
		A = a;
		B = b;
		C = 0;
	}

	Shape(int a , int b , int c ) { //��ٸ��� ���� �� ����
		A = a;
		B = b;
		C = c;
	}

	void AreaOval();
	void AreaLadder();
	void AreaRect();

	void setTwo(int a,int b) { //�簢��, Ÿ�� ���� ���� �Լ�
		A = a;
		B = b;
	}
	void setThree(int a,int b,int c) { //��ٸ��� ���� ���� �Լ�
		A = a;
		B = b;
		C = c;
	}
};

void Shape::AreaOval() {
	cout << "Ÿ���� ���̴� " << A * B * 3.14 << "�̴�" << endl;
	NAME = "Circle"; //NAME�� ������� ~Shpae()�Լ����� ����ϵ��� �Ѵ�
}
void Shape::AreaLadder() {
	cout << "��ٸ����� ���̴� " << (A + B) * C / 2 << "�̴�" << endl;
	NAME = "Ladder";
}
void Shape::AreaRect() {
	cout << "�簢���� ���̴� " << A * B << "�̴�" << endl;
	NAME = "Rectangular";
}
Shape::~Shape() {
	cout << "Shape �Ҹ�"<< NAME << "Ŭ����" << endl;
}

int main() {

	Shape a;
	a.setTwo(2,3);
	a.AreaOval();

	Shape b(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4);
	c.AreaLadder();
	c.setThree(5,10,6); //��ٸ��� ���� �� ����
	c.AreaLadder();

	return 0;
}