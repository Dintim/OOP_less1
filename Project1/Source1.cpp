#include <iostream>
#include <Windows.h>
#include "time.h"

class  drob
{

	int x;
	int y;
public:
	void print() {
		std::cout << (double)x / y;
	}

	//setter - модификатор
	void setY(int b) {
		if (b != 0) y = b;
		else y = 1;
	}

	void setX(int b) {
		x = b;
	}

	//getter
	int getX() {		
		return x;
	}
};



int main()
{
	time_ tt;
	tt.setT(23, 59, 45);
	while (true) {
		tt.print();
		Sleep(1000);
		tt.addS();		
		system("cls");
	}

}