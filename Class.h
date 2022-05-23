#ifndef circle_H
#define circle_H

class Shape {
private:
	string NAME;
	int A; //가로1
	int B; //세로
	int C; //가로2

public:
	Shape() {};
	~Shape(); //소멸자 함수 생성
	Shape(int a, int b); //사각형, 타원 길이 값 받음
	Shape(int a, int b, int c); //사다리꼴 길이 값 받음

	void AreaOval();
	void AreaLadder();
	void AreaRect();

	void setTwo(int a, int b); //사각형, 타원 길이 수정 함수
	void setThree(int a, int b, int c); //사다리꼴 길이 수정 함수

};

#endif circle_H
