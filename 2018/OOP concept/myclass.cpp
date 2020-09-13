#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
	int id;
	double gpa;
	void Display(){
		cout<<id<<" "<<gpa<<endl;
	}

	void setValue(int x, double y){
		id = x;
		gpa = y;
	}
	
};

int main(int argc, char const *argv[])
{
	Student Del,War;
	Del.setValue(1304104,3.07);
	Del.Display();

	War.setValue(1304105,3.21);
	War.Display();
	
	return 0;
}