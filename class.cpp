#include<iostream>
using namespace std;
#include "Class.h"

Shape::~Shape() {
	cout << "Shape �Ҹ�" << NAME << "Ŭ����" << endl;
}
Shape::Shape(int a, int b) { //�簢��, Ÿ�� ���� �� ����
	A = a;
	B = b;
	C = 0;
}

Shape::Shape(int a, int b, int c) { //��ٸ��� ���� �� ����
	A = a;
	B = b;
	C = c;
}

void Shape::setTwo(int a, int b) { //�簢��, Ÿ�� ���� ���� �Լ�
	A = a;
	B = b;
}
void Shape::setThree(int a, int b, int c) { //��ٸ��� ���� ���� �Լ�
	A = a;
	B = b;
	C = c;
}
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