#pragma once
class time_
{
	int hour;
	int minute;
	int second;

public:
	void setH(int a) {
		if (a >= 0 && a < 24) hour = a;		
		else hour = 0;
	}
	void setM(int b) {
		if (b >= 0 && b < 60) minute = b;		
		else minute = 0;
	}
	void setS(int c) {
		if (c >= 0 && c < 60) second = c;		
		else second = 0;
	}
	void setT(int a, int b, int c) {
		setH(a);
		setM(b);
		setS(c);
	}

	void addH() {		
		hour++;
		if (hour == 24) hour = 0;
	}

	void addM() {
		minute++;
		if (minute == 60) {
			addH();
			minute = 0;
		}
	}

	void addS() {
		second++;
		if (second == 60) {
			addM();
			second = 0;
		}		
	}

	int getH() {
		return hour;
	}
	int getM() {
		return minute;
	}
	int getS() {
		return second;
	}

	void print() {
		if (hour < 10) std::cout << "0";
		std::cout << hour << ":";
		if (minute < 10) std::cout << "0";
		std::cout << minute << ":";
		if (second < 10) std::cout << "0";
		std::cout << second;
	}

};
