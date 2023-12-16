#include <iostream>
#include <Windows.h>
#include "Graph.h"
void header();
void clearScreen();
void setColor(int);
void menu();
void printMap();
void navigator();
using namespace std;

graph map; 

int main() {
	menu();
	setColor(7);
	system("cls");
	return 0;
}

void header(){
	cout<<"  ,__ __                 , _                                           "<<endl;
	cout<<" /|  |  |               /|/ \\              o                           "<<endl;
	cout<<"  |  |  |   __,    _     |   |   __,           __,  __, _|_  __   ,_   "<<endl;
	cout<<"  |  |  |  /  |  |/ \\_   |   |  /  |  |  |_|  /  | /  |  |  /  \\_/  |  "<<endl;
	cout<<"  |  |  |_/\\_/|_/|__/    |   |_/\\_/|_/ \\/  |_/\\_/|/\\_/|_/|_/\\__/    |_/"<<endl;
	cout<<"                /|                              /|                     "<<endl;
	cout<<"                \\|                              \\|                     "<<endl<<endl;
}

void clearScreen(){
	system("cls");
}

void setColor(int code) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), code);
}

void menu(){
	while(true){
		system("cls");
		char option;
		setColor(9);
		header();
		setColor(9);cout<<"A)";setColor(15);cout<<" Map"<<endl;
		setColor(9);cout<<"B)";setColor(15);cout<<" Navigator"<<endl;
		setColor(9);cout<<"C)";setColor(15);cout<<" Exit"<<endl<<endl;
		cout<<"Select option: ";
		setColor(9);
		cin>>option;
		switch(option){
			case 'A':
			case 'a': printMap();
			break;
			case 'B':
			case 'b': navigator();
			break;
			case 'C':
			case 'c': return;
			break;
			default: system("cls"); setColor(4);header();cout<<"Invalid Option! Enter Valid Option"<<endl<<endl; setColor(15);system("pause");
		}
	}
}

void printMap(){
	system("cls");
	setColor(5);
	header();
	setColor(7);
	cout<<"San francisco       Detroit"<<endl;
	cout<<"*                   *"<<endl;
	cout<<"|\\                 /|\\"<<endl;
	cout<<"| \\	          / | \\ "<<endl;
	cout<<"|  \\ Denver      /  |  \\"<<endl;
	cout<<"|   *-----------*---|---* New York   "<<endl;
	cout<<"|  /     Chicago \\  |  /"<<endl;
	cout<<"| /               \\ | /"<<endl;
	cout<<"|/                 \\|/"<<endl;
	cout<<"*                   *"<<endl;
	cout<<"Los Angeles         Washington DC"<<endl<<endl<<endl;
	cout<<"From \t\t\t To \t\t\t Distance"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Washington DC \t\t New York \t\t 226 miles"<<endl;
	cout<<"Washington DC \t\t Chicago \t\t 696 miles"<<endl;
	cout<<"Washington DC \t\t Detroit \t\t 520 miles"<<endl;
	cout<<"Washington DC \t\t Los Angeles \t\t 2668 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"New York \t\t Washington \t\t 226 miles"<<endl;
	cout<<"New York \t\t Chicago \t\t 790 miles"<<endl;
	cout<<"New York \t\t Detroit \t\t 614 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Chicago \t\t Washington DC \t\t 696 miles"<<endl;
	cout<<"Chicago \t\t New York \t\t 790 miles"<<endl;
	cout<<"Chicago \t\t Detroit \t\t 283 miles"<<endl;
	cout<<"Chicago \t\t Denver \t\t 1002 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Detroit \t\t Washington DC \t\t 790 miles"<<endl;
	cout<<"Detroit \t\t New York \t\t 614 miles"<<endl;
	cout<<"Detroit \t\t Chicago \t\t 283 miles"<<endl;
	cout<<"Detroit \t\t San Francisco \t\t 2398 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Denver \t\t\t Chicago \t\t 1002 miles"<<endl;
	cout<<"Denver \t\t\t San Francisco \t\t 1252 miles"<<endl;
	cout<<"Denver \t\t\t Los Angeles \t\t 1016 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"San Francisco \t\t Detroit \t\t 2398 miles"<<endl;
	cout<<"San Francisco \t\t Denver \t\t 1252 miles"<<endl;
	cout<<"San Francisco \t\t Los Angeles \t\t 382 miles"<<endl;
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"Los Angeles \t\t Washington DC \t\t 2668 miles"<<endl;
	cout<<"Los Angeles \t\t Denver \t\t 1016 miles"<<endl;
	cout<<"Los Angeles \t\t San Francisco \t\t 382 miles"<<endl<<endl;
	system("pause");
}

void navigator(){
	int source,destination;
	char src, dest;
s:
	system("cls");
	header();
	cout<<"Select Current Location"<<endl<<endl;
	cout<<"A) Washington DC"<<endl;
	cout<<"B) New York"<<endl;
	cout<<"C) Chicago"<<endl;
	cout<<"D) Detroit"<<endl;
	cout<<"E) Denver"<<endl;
	cout<<"F) San Francisco"<<endl;
	cout<<"G) Los Angeles"<<endl;
	cout<<"H) Main Menu"<<endl;
	cin>>src;
	switch(src){
		case 'A':
		case 'a': source = 0; 
		break;
		case 'B':
		case 'b': source = 1; 
		break;
		case 'C':
		case 'c': source = 2; 
		break;
		case 'D':
		case 'd': source = 3; 
		break;
		case 'E':
		case 'e': source = 4; 
		break;
		case 'F':
		case 'f': source = 5; 
		break;
		case 'G':
		case 'g': source = 6; 
		break;
		case 'H':
		case 'h': return; 
		break;
		default: cout<<"Invalid Option! Select Valid Option"<<endl; system("pause"); goto s;
	}
d:
	system("cls");
	header();
	cout<<"Select Destination Location"<<endl<<endl;
	cout<<"A) Washington DC"<<endl;
	cout<<"B) New York"<<endl;
	cout<<"C) Chicago"<<endl;
	cout<<"D) Detroit"<<endl;
	cout<<"E) Denver"<<endl;
	cout<<"F) San Francisco"<<endl;
	cout<<"G) Los Angeles"<<endl;
	cout<<"H) Main Menu"<<endl;
	cin>>dest;
	switch(dest){
		case 'A':
		case 'a': destination = 0; 
		break;
		case 'B':
		case 'b': destination = 1; 
		break;
		case 'C':
		case 'c': destination = 2; 
		break;
		case 'D':
		case 'd': destination = 3; 
		break;
		case 'E':
		case 'e': destination = 4; 
		break;
		case 'F':
		case 'f': destination = 5; 
		break;
		case 'G':
		case 'g': destination = 6; 
		break;
		case 'H':
		case 'h': return; 
		break;
		default: cout<<"Invalid Option! Select Valid Option"<<endl; system("pause"); goto d;
	}
	system("cls");
	if(source == destination){
		cout<<"Invalid Destination!"<<endl;
		cout<<"Current Location and Destination Location cannot be same"<<endl;
		cout<<"Select Valid Destination Location"<<endl;
		system("pause");
		goto d;
	}
	else{
		header();
		map.dijkstraAlgorithm(source,destination);
		system("pause");
		system("cls");
		header();
		cout<<"Another(Y/N): ";
		char option;
		cin>>option;
		switch(option){
			case 'y':
			case 'Y': goto s;
			break;
			case 'n':
			case 'N': return;
			default: system("cls"); cout<<"Invalid Option"<<endl; system("pause"); return;
		}
	}
}