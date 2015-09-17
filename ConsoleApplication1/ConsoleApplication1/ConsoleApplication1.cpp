// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include "QuickSort.h"
#include "Point.h"
using namespace std;
void test(int);
void fileRW();
char& replace(int m);
void replace(char a[7], int m, char n);
char s[80] = "Hello there";
int _tmain(int argc, _TCHAR* argv[])
{
	QuickSort q;
	q.go();
	Point p(6,4);
	cout <<"\n"<< p <<"\n";
	int x = 0;

	//test(x);
	//fileRW();
	cout << s << endl;
	replace(5) = 'x';
	cout << s << endl;
	system("pause");
	return 0;
}

void test(int x){
	cout << x << "\n";
	int  a, b;
	cin >> a >> b;
	cout << "a:" << a << " b:" << b << endl;
}

void fileRW(){
	ifstream inFile;
	ofstream outFile;
	outFile.open("my.dat",ios::out);
	char univ[] = "NanjingUn", name[15];
	int course = 2401, number;
	outFile << univ << endl;
	outFile << course << endl;
	inFile.open("my.dat",ios::in|ios::_Nocreate);
	if (!inFile){
		cerr << "cannot open file" << endl;
		exit(1);
	}
	char c;
	inFile >> name >> c >> number;
	outFile << "name:" << name << endl;
	outFile << "number:" << number << endl;

}

char& replace(int m){
	return s[m];
}
