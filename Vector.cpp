#include"Vector.h"

int VECTOR::Vector()
{
vector<int> v;
cout << "current capacity :" << v.capacity() << endl;

//push_back()
for (int i = 1; i <= 5; i++)
v.push_back(i);			// Vector becomes 1, 2, 3, 4, 5




//begin() and end()
cout << "\noutput of begin and end :";
for (auto it = v.begin(); it != v.end(); ++it)
cout << *it << " ";


//Rbegin() and Rend()
cout << "\noutput of rbegin and rend :";
for (auto it = v.rbegin(); it != v.rend(); it++)			//5  4  3  2  1
cout << *it <<" ";

//capacity
cout << "current capacity :" << v.capacity() << endl;
cout << "Size : " <<v.size();
cout << "\nMax_Size : " << v.max_size();	// Returns the maximum number of elements that the vector can hold.

//resize
v.resize(7);
cout << "\nResize:" << v.size();
if (v.empty() == false)
cout << "\nVector is not empty";
else
cout << "\nVector is empty";



//shrink to fit
v.shrink_to_fit();
cout << "\nAfter shrink to fit vector element are:";
for (auto it =v.begin(); it !=v.end(); it++)
cout << *it << " ";

//Emplace back()
v.emplace_back(8);
cout << "\nArray element are:" ;
for (auto it = v.begin(); it != v.end(); it++)
cout  << *it << " ";
cout << "current capacity :" << v.capacity() << endl;



v.pop_back();
cout << "Array element after pop back:";
for (auto it = v.begin(); it != v.end(); it++)
cout<< *it ;

cout << "\ncurrent capacity :" << v.capacity() << endl;


vector<int>::iterator it = v.begin();
v.insert(it + 1, 10);






vector<int> v2(5, 100);
for (auto it = v2.begin(); it != v2.end(); it++)
cout << *it << " ";


return 0;
}


void PAIR::PrintPairClass()
{
Student student;
student.setData("isha", 22);
student.getData();

pair < int, int > p1;
pair < string, int > p2;
pair < string, string > p3;
pair < string, float > p4;
pair < string, Student > p5;

p1 = make_pair(15, 8);
p2 = make_pair("August", 15);
p3 = make_pair("Prime Minister", "India");
p4 = make_pair("Software Developer", 12234.678);
p5 = make_pair("Student", student);

cout << p1.first << " " << p1.second << endl;
cout << p2.first << " " << p2.second << endl;
cout << p3.first << " " << p3.second << endl;
cout << p4.first << " " << p4.second << endl;
cout << (p5.second).getData() << endl;

}


