#include<iostream>
#include"Student.h"
using namespace std;

int main()
{
	
	private:
		int m1, m2, m3;
		
		cout<<"Enter marks of Three subjects: "<<endl;
		cin>>m1>>m2>>m3;
		
	Student s1(m1,m2,m3);
	
	s1.totalMarks();
	s1.percent();

	
	
}
