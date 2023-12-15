#include <iostream>
#include <Windows.h>
#include "Graph.h"
void clearScreen();
void setColor(int);
using namespace std;
int main() {
	graph map;
	setColor(4);
	map.dijkstraAlgorithm(3,4);
	setColor(2);
	return 0;
}
void clearScreen(){
	system("cls");
}

void setColor(int code) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code);
}