#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int numOfStudents;
	string input;

	cout << "How many students are enrolled this semester?" << endl;
	cin >> numOfStudents;

	cout << "The number of students this semester is " << numOfStudents << endl;

	vector<string> studentArr;
	cout << "Input Student Details:" << endl;

	for (int ctr = 0; ctr < numOfStudents;ctr++)
	{
		cin >> input;
		studentArr.push_back(input);
	}

	cout << "Display Student list:" << endl;

	for (int iterator = 0; iterator < studentArr.size();iterator++)
	{
		cout << studentArr.at(iterator) << endl;
	}
	return 0;
}

/*

	1.define count of students enrolled in semester
	2.declare array/vector
	3.get student name from user
	4.insert the student's name to array/vector
	5.display the list of names from array
*/