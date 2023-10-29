#include<iostream>
#include"Student.h"

using namespace std;


	double total=0;
	double percent=0;

public: 

	Student(int studid, int m1, int m2, int m3)
	{
		this->studid=studid;
		this->m1=m1;
		this->m2=m2;
		this->m3=m3;
	}


	void totalMarks()
	{
		total=m1+m2+m3;
		
		cout<<"Total Marks: "total<<endl;
	}
	
	void percent()
	{
		percent=total/3;
		
		cout<<"Percentage: "percent<<endl;
	}
