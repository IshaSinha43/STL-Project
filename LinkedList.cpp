#include "Linkedlist.h"

void LIST::PrintList()
{

	list<int>l1{11,66, 22,55, 33,66,99};
	l1.push_back(44);


	for (auto it = l1.begin(); it != l1.end(); it++)
		cout << *it << " ";
	
	
	l1.pop_front();
	for (auto it = l1.begin(); it != l1.end(); it++)
		cout <<"\n" << *it << " ";

	l1.sort();
	list <int>::iterator it1 = l1.begin();
	cout << "\nsorting elements are:";
	while (it1 != l1.end())
	{
		
		cout << * it1 << " ";
		it1++;
	}
	cout << endl;



	l1.reverse();
	cout << "\nReverse elements are:";
	list<int>::iterator it4 = l1.begin();
	while (it4 != l1.end())
	{
		cout << *it4 << " ";
		it4++;
	}




	list<string>l2{ "\ndelhi","mumbai","varanasi" };
	l2.push_back("Bihar");
	list <string>::iterator it6 = l2.begin();
	while (it6 != l2.end())
	{
		cout << *it6<<" ";
		it6++;
	}



	

	l2.remove("mumbai");
	list <string>::iterator it3 = l2.begin();
	while (it3 != l2.end())
	{
		cout << *it3 << " ";
		it3++;
	}
	



	cout << endl;


	l2.clear();
	cout << "All element arte deleted ";
	list <string>::iterator it5 = l2.begin();
	while (it5 != l2.end())
	{
		cout << *it5 << " ";
		it5++;
	}
}
