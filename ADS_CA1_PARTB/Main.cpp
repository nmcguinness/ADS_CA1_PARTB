#include <iostream>
#include <list>
#include <vector>
using namespace std;

/************************* Q1 *************************/
//paste code from Moodle here...

class Pair {
private:
	int first;
	int second;

public:
	Pair(int first, int second) : first(first), second(second) {};
	int getFirst() const { return this->first; }
	int getSecond() const { return this->second; }
};

//returns a pair (largest, largestIndex) from the data in a list

Pair getLargest(list<int> list, int minValue) {
	int largest = minValue;
	int largestIndex = -1;
	int index = 0;

	for (int value : list) {
		if (value > largest) {
			largest = value;
			largestIndex = index;
		}
		index++;
	}
	return Pair(largest, largestIndex);
}

void Q1() {
}
/************************* Q2 *************************/

//paste code from Moodle here...
bool is_reverse_multiple(list<int>::iterator beginItA, list<int>::iterator endItA, list<int>::reverse_iterator endItB) {
	//add code here...
}

vector<double*> reverse_and_abs(vector<double*>::reverse_iterator endVec, vector<double*>::reverse_iterator startVec) {
	//add code here...
}

void Q2() {
	list<int> listA = { 1, 2, 3 };
	list<int> listB = { 6, 4, 2 };
	//add code to invoke is_reverse_multiple()...
}

void Q2()
{
	//add code here...
}

/************************* Q3 *************************/
//see code from Q2 and see UnitTestsMain project and Q3 in Moodle...

int main()
{
	cout << "Running Q1..." << endl;
	Q1();

	cout << "Running Q2..." << endl;
	Q2();
}