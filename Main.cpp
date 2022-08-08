
#include <iostream>
#include<vector>
#include "Vector.h"
#include"LinkedList.h"
//using namespace std;

int main()
{
	////VECTOR::Vector();
	////PAIR::PrintPairClass();
	////LIST::PrintList();
	
	TASKVECTOR:: Vector V1;
	//V1.Add(EmployeeInfo);
	//V1.at(EmployeeInfo);
	//V1.clear(EmployeeInfo);
	TASKVECTOR::EmployeeInfo* tempInfo = new TASKVECTOR::EmployeeInfo();
	V1.Add();
	V1.pop();

	
	V1.Size();
	
	
	TASKVECTOR::Vector V = V1;
	V.Size();

	return 0;
}
	