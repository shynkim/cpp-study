#include <iostream>
using namespace std;
#include "Class.h"

int main() {

	Shape a;
	a.setTwo(2, 3);
	a.AreaOval();

	Shape b(10, 20);
	b.AreaRect();

	Shape c(3, 7, 4);
	c.AreaLadder();
	c.setThree(5, 10, 6); //사다리꼴 길이 값 변경
	c.AreaLadder();

	return 0;
}