#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;

class Student 
{
public:
	Student();
	Student(string , int );
	void setName(string );
	void setScore(int sc);
	string getName();
	int getScore();

private:
	string name;
	int score;
};

Student::Student() {
		name = " ";
		score = 0;
	}

Student::Student(string na, int sc) {
		name = na;
		score = sc;
	}
	void Student::setName(string na) {
		name = na;

	}
	void Student::setScore(int sc) {
		score = sc;

	}
	string Student::getName() {
		return name;
	}
	int Student::getScore() {

		return score;
	}
	
int main() 
{
	string name;
	int score;
	Student student1("John", 90);
	Student student2("Mary", 80);
	cin>>name>>score;
	student1.setName(name);
	student2.setScore(score);
	cout << student1.getName() << " " << student1.getScore() << endl;
	cout << student2.getName() << " " << student2.getScore() << endl;
	return 0;

}
