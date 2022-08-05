#pragma once
#include<iostream>
#include<vector>

using namespace std; 
namespace VECTOR
{
int Vector();
}

namespace PAIR
{
	class Student
	{
	private:
		string name;
		int age;
	public:
		void setData(string nm, int a)
		{
			name = nm;
			age = a;
		}
		int getData()
		{
			cout << "Name is: " << name << endl;
			cout << "Age is: " << age << endl;
			return 0;
		}
		
	};
	void PrintPairClass();
}