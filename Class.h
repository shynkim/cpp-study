#ifndef circle_H
#define circle_H

class Shape {
private:
	string NAME;
	int A; //����1
	int B; //����
	int C; //����2

public:
	Shape() {};
	~Shape(); //�Ҹ��� �Լ� ����
	Shape(int a, int b); //�簢��, Ÿ�� ���� �� ����
	Shape(int a, int b, int c); //��ٸ��� ���� �� ����

	void AreaOval();
	void AreaLadder();
	void AreaRect();

	void setTwo(int a, int b); //�簢��, Ÿ�� ���� ���� �Լ�
	void setThree(int a, int b, int c); //��ٸ��� ���� ���� �Լ�

};

#endif circle_H
