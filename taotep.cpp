// Tep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream"
#include "iostream"
using namespace std;
int main()
{
	int n = 5, tg;
	fstream f;
	f.open("DaySo.txt", ios::out); 
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap Gia Tri: ";
		cin >> tg;
		f<<tg<<" ";
		 
	}
	f.close();

	// doc tep
	cout << endl << "Day so trong tep la: " << endl;
	//f.open("DaySo.txt", ios::in);
	/*
	for (int i = 0; i < n; i++)
	{
		f >> tg;
		cout << tg << " ";
	}
	*/
	
	f.open("DaySo.txt");
	while (!f.eof())
	{
		f >> tg;
		if (f.eof())
			break;
		cout << tg << " ";
	}


	system("PAUSE");
    return 0;
}
