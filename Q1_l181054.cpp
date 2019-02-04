// q1OOPlab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
#include "Header.h";
#include <fstream>;
//funtion prototypes
//to read file
void readDataFromFile(gitHubUser * users, string filepath);
//to get educational background information
void setEduBckGrnd(gitHubUser &user);
void remove(gitHubUser &user);

int menu();

string newfolder;
int main()
{
	menu();

	return 0;
}
void readDataFromFile(gitHubUser * users, string filepath)
{

	ifstream infile;//to read file
	infile.open("fileinput.txt");
	if (!infile) {
		cout << "Unable to open file datafile.txt";
		exit(1);   // call system to stop
	}
	int a;
	infile >> a;
	users = new gitHubUser[a];
	for (int i = 0; i < a; i++)
	{
		infile >> users[i].firstName;
		cout << users[i].firstName << endl;
		infile >> users[i].userName;
		cout << users[i].userName << endl;
		infile >> users[i].email;
		cout << users[i].email << endl;
		infile >> users[i].folderCount;
		cout << users[i].folderCount << endl;
		users[i].gitHubFolders = new string[users[i].folderCount];
		for (int j = 0; j < users[i].folderCount; j++)
		{
			infile >> *(users[i].gitHubFolders);
			cout << *(users[i].gitHubFolders) << endl;
		}

	}
	setEduBckGrnd(users[0]);
	setEduBckGrnd(users[1]);

}

void setEduBckGrnd(gitHubUser &user)
{

	cout << user.firstName << " " << "Enter your institute name" << endl;
	cin >> *(user.institute_name);
	cout << *(user.institute_name) << endl;;
	cout << user.firstName << " " << "Enter your qualification level" << endl;
	cin >> *(user.qualification_level);
	cout << *(user.qualification_level) << endl;
}
void remove(gitHubUser &user)
{

	gitHubUser *users2 = nullptr;
	readDataFromFile(users2, "fileinput.txt");
	*user.institute_name = "0";
	cout << "you've removed institute name" << endl;
	*user.qualification_level = "0";
	cout << "you've removed qualification level" << endl;
}

//void print(gitHubUser *user)
//{
//
//	for (int i = 0; i < 1; i++)
//	{
//		cout << user[i].firstName << endl;
//		cout << user[i].userName << endl;
//		cout << user[i].email << endl;
//		cout << user[i].folderCount << endl;
//		user[i].gitHubFolders = new string[user[i].folderCount];
//		for (int j = 0; j < user[i].folderCount; j++)
//		{
//			cout << *(user[j].gitHubFolders) << endl;
//		}
//
//	}
//
//}
int menu()
{
	int n = -1;
	cout << "THIS IS A MENU DRIVEN PROGRAM" << endl;
	cout << "CHOOSE YOUR DESIRED OPTION " << endl;
	cout << "***************************" << endl;
	cout << "Enter 0 to exit" << endl;
	cout << "Enter 1 to read from file and to get educational background" << endl;
	cout << "Enter 2 remove educational background" << endl;
	cout << "Enter 3 to create a backup" << endl;


	while (n != 0)
	{
		cout << "Enter your choice" << endl;
		cin >> n;

		if (n == 0)
		{
			return 0;
		}
		else if (n == 1)
		{
			gitHubUser *users1 = nullptr;
			gitHubUser user;
			readDataFromFile(users1, "fileinput.txt");

		}
		else if (n == 2)
		{
			gitHubUser user1;
			remove(user1);

		}

	}

}