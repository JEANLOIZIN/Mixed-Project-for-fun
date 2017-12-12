/*
Vijay Fredi
3/6/12
CSC 121

This program reads a student first name, last name, and four course' scores (double type) from a provided file (grade.dat)
*/

// all the libraries we need
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	//Declare Variables
	string firstName;
	string lastName;
	char grade = ' ';
	double average;
	double test0, test1, test2,test3;
	
	//Declare File Stream variables
	ifstream inFile;
	ofstream outFile;

	//Open intput file
	inFile.open("grade.dat");

	//If the file isn't good anymore, stop the loop because the file was flawed
	switch(!inFile)
	{
		cout << "Sorry, file can not be found."
			<< "Program Terminated" << endl;
		return 1;
	}

	//Open the output file
	outFile.open("report.dat");
	
	//Read in the first and last name
	inFile >> firstName >> lastName;
	//Read in the four test scores
	inFile >> test0 >> test1 >> test2 >> test3;

	//Put a heading on the screen and in the output file
	cout << left << setw(23) << "STUDENT" << right << setw(8) << "COURSE1" << right << setw(8) << "COURSE2" << right << setw(8) << "COURSE3" << right << setw(8) << "COURSE4" << right << setw(8) << "AVG" << right << setw(10) << "GRADE"<< endl<<endl;
	outFile << left << setw(23) << "STUDENT" << right << setw(8) << "COURSE1" << right << setw(8) <<  "COURSE2" << right << setw(8)<< "COURSE3" << right << setw(8) << "COURSE4" << right << setw(8) << "AVG" << right << setw(10) << "GRADE"<< endl<<endl;

	//If the file is good, begin reading in things
	while (inFile)
	{
		inFile >> firstName >> lastName;
		inFile >> test0 >> test1 >> test2 >> test3 ;

		average = ((test0 + test1 + test2 + test3)/4);

		//Convert the average into a letter grade
		switch (static_cast<int>(average)/10)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			grade = 'F';
			break;
		case 6:
			grade = 'D';
			break;
		case 7:
			grade = 'C';
			break;
		case 8:
			grade = 'B';
			break;
		case 9:
		case 10:
			grade = 'A';
			break;
		default:
			cout << "NONE VALID TEST SCORE." << endl;
		}
		
		//Print to the screen
		cout << fixed << noshowpoint << setprecision (0) << left << setw(10)<< firstName << setw(15) << lastName << setw(8) << test0 << setw(8) << test1 << setw(8) << test2 << setw(8) << test3 << setw(8);
		cout << fixed << showpoint << setprecision(2) << average << right << setw(7) << grade << endl;
		//Print to the file
		outFile << fixed << noshowpoint << setprecision (0) << left << setw(10)<< firstName << setw(15) << lastName << setw(8) << test0 << setw(8) << test1 << setw(8) << test2 << setw(8) << test3 << setw(8);
		outFile << fixed << showpoint << setprecision(2) << average << right << setw(7) << grade << endl;
		
		
		
		

	}
		//Close both files
		inFile.close();
		outFile.close();

	//Wait for input from the user
	getch();

	return 0;
	}