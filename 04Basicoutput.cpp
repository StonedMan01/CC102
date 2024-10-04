#include <iostream>

using namespace std;

int main ()
{
	string nickname, school, course_year;
	
	
	cout << "Nickname\t:\t";
	cin >>	nickname;
	
	cout << "Course-Year level\t";
	cin >>	course_year;
	
	cout << "Your School\t:\t";
	cin >>	school;
	cout << endl;
	
	cout << "Wow congrats " << nickname << "! " << course_year << " is a nice course. And you are studying in " << school << " which is one of the Center of excellence in Tertiary Education";
	return 0;
}
