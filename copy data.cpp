#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

bool getStudentData(ifstream& studentFile, int& RollNumber, int& name, int& TotalMarks, int& CLASS,int& YEAR);
void writeStudentData(ofstream& ifFile, int RollNumber,int name,int TotalMarks);
int main()
{
	ifstream studentFile;
	studentFile.open("student.txt");
	if(!studentFile){
		cerr<<"Error opening file\n";
		exit(100);
	}
	ofstream ifFile;
	ifFile.open("inf.txt");
	if(!ifFile){
		cerr<<"Error opening file\n";
		exit(100);
	}

	int RollNumber;
	int name;
	int TotalMarks;
	int CLASS;
	int YEAR;
	while(getStudentData(studentFile, RollNumber, name, TotalMarks, CLASS,YEAR)){
		 writeStudentData(ifFile, RollNumber, name ,TotalMarks);
	}
	studentFile.close();
	ifFile.close();
	return 0;
}

bool getStudentData(ifstream& studentFile, int& RollNumber, int& name, int& TotalMarks, int& CLASS ,int& YEAR){
	studentFile>>RollNumber>>name>>TotalMarks>>CLASS>>YEAR;
	if(!studentFile){
		return false;
	}
	return true;
}
void writeStudentData(ofstream& ifFile, int RollNumber, int name, int TotalMarks){
	ifFile.fill('0');
	ifFile<<setw(2)<<RollNumber;
	ifFile.fill(' ');
	ifFile<<setw(3)<<name;
	ifFile<<' ' <<TotalMarks<<endl;
	return;
}
