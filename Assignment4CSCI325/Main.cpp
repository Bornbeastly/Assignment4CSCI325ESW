// Erik Worley
// 10/3/18
// Main.cpp
// Calls functions created in Vector files.
#include <iostream>
#include <fstream>
#include "Vector.cpp"
using namespace std;

int main()
{
	Vector my_vec;
	my_vec.push_back(5);
	cout << my_vec[0];

	cin.ignore();
	cin.get();
	return 0;
}