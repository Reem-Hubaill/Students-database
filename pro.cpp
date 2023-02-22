
#include <iostream>
#include <math.h>
#include <windows.h>
#include <ctime> //for time
#include <fstream>
#include<cstring>
#include"pro.h"
using namespace std;
void gotoxy(int x, int y) // The function of locating items on the screen
{COORD coord = {0,0};
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition( GetStdHandle (STD_OUTPUT_HANDLE), coord );
}

void time()
{
	gotoxy(1,10);
		time_t now=time(0);
	cout << "\n\n\t\t Current Date & Time is: "<<ctime(&now);
}

void loading()
{system("cls");
	gotoxy(24,26);
	int i;
	for (i=1; i<=5; i++)
	
	{
		cout << "\xdb\xdb\xdb\xdb\xdb";
		Sleep(100);
	}
	Sleep(500);
	cout << endl << endl;
	gotoxy(24,28);
}

void mainEntrance()
{ system("cls");
	gotoxy(1,2);
	cout<<  "\t    ##      ## ####### ##      ####### ####### #### #### #######";
    cout<<"\n\t    ##      ## ##      ##      ##      ##   ## ## ### ## ##     ";
    cout<<"\n\t    ##  ##  ## #####   ##      ##      ##   ## ##  #  ## #####  ";
    cout<<"\n\t    ##  ##  ## ##      ##      ##      ##   ## ##     ## ##     ";
    cout<<"\n\t    ########## ####### ####### ####### ####### ##     ## #######";
	gotoxy(6,9);
	cout << "     **************************************************************" << endl;
	gotoxy(6,10);
	cout << "                       SCHOOL MANAGEMENT PROJECT                   " << endl;
	gotoxy(6,11);
	cout << "     **************************************************************" << endl;
}

void login()
{
	system("cls");
	string username ;
	string password ;
	char retry;
	mainEntrance();
	time();
	gotoxy(55,10);
	cout << "(LOGIN)";
	gotoxy(20,15);
	cout << "Enter Username:  ";
	cin>> username; 
	gotoxy(20,18);
	cout<<" Enter Password:";
	cin>>password ;
	gotoxy(36,15);

	if (username == "zahraa" && password == "1234")
	{
		gotoxy(15,16);
		cout << "\n\n Username & Password Matched !! ";
		cout << "\n\n\t Access Granted...\n\n";
		cout << "\n\n\t\t Now Loading: ";
		loading();
		return;
	}
	else
	{
		system("cls");
		cout << "\n\n You entered Wrong UserName/Password ";
		cout << "\n\n\t Press 'R' or 'r' to Enter Again OR any other key to exit ...\n\n";
		cin >> retry;
			if(retry == 'r' || retry == 'R')
			{
				system("cls");
				login();
			}
			else
			{
				exit(0);
			}
	}
}
	void cha2(){
			cout << "\n\n\t\t\t##################################################################################";
			cout << "\n\n\t\t\t##\t  _________________________STUDENT PORTAL_________________________      ##";
			cout << "\n\n\t\t\t##\t 1: Display Records in Ascending Order                                  ##";
			cout << "\n\n\t\t\t##\t 2: Merit List                                                          ##";
			cout << "\n\n\t\t\t##\t 3: Know Your Rank                                                      ##";
			cout << "\n\n\t\t\t##\t 4: Search Record                                                       ##";
			cout << "\n\n\t\t\t##\t 5: Display the names of the students                                   ##";
			cout << "\n\n\t\t\t##\t 6: Return to Menu                                                      ##";
			cout << "\n\n\t\t\t##################################################################################";
			cout << "\n\n\t\t\t\t Enter your Choice: ";}
void cha(){
	system("cls");

			cout << "\n\n\t\t\t##################################################################################";
			cout << "\n\n\t\t\t##\t  ________________________TEACHER PORTAL________________________\t##";
			cout << "\n\n\t\t\t##\t 1: Insert Record                                               \t##";
			cout << "\n\n\t\t\t##\t 2: Display Records in Ascending Order                          \t##";
			cout << "\n\n\t\t\t##\t 3: Display Records in Descending Order                         \t##";
			cout << "\n\n\t\t\t##\t 4: Search Record to update                                     \t##";
			cout << "\n\n\t\t\t##\t 5: Delete Record                                               \t##";
			cout << "\n\n\t\t\t##\t 6: Check Total No. of Students                                 \t##";
			cout << "\n\n\t\t\t##\t 7: Show Merit list of Students                                 \t##";
			cout << "\n\n\t\t\t##\t 8: Return to Menu                                              \t##";
			cout << "\n\n\t\t\t##################################################################################";
			cout << "\n\n\t\t\t\t Enter your Choice: ";}

