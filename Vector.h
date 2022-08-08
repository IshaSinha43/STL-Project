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
			cout<< "Name is: " << name << endl;
			cout << "Age is: " << age << endl;
			return 0;
		}
		
	};
	void PrintPairClass();
}
namespace TASKVECTOR {


	class EmployeeInfo
	{
	public:
		int EmpId;
		string EmpName;
		string Addr;
	
	};

	class Vector{
	
		
	public:
		Vector();
		vector<EmployeeInfo*>List;

		void Add(EmployeeInfo* add) {
			List.push_back(add);

		}
		void pop(EmployeeInfo* pop) {
			List.pop_back();

		}
		void  at(EmployeeInfo* at) {
			List.at(int x);
		}
		void Rev()
		{
			List.reverse();
		}
		void clear(EmployeeInfo* clear) {
			List.clear();
		}
		void Size()
		{
			
			cout << "Size is: " << List.size() << endl;
		}
	
		Vector(const Vector& obj);
		
		~Vector();

		
	};
	

}