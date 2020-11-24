#include <iostream>
#include <list>
#include <vector>
using namespace std;

/************************* Q1 *************************/
//paste code from Moodle here...

template <typename F, typename S>
class Pair {
private:
	F first;
	S second;

public:
	Pair(F first, S second) : first(first), second(second) {};
	F getFirst() const { return this->first; }
	S getSecond() const { return this->second; }
};

//returns a pair (largest, largestIndex) from the data in a list

template <typename T>
Pair<T, int> getLargest(list<T> list, int minValue) {
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
	return Pair<T, int>(largest, largestIndex);
}

void Q1() {
	list<int> listA = { 1, 2, 3, 4, 5, 6, 7 };
	Pair<int, int> largestPair = getLargest(listA, -1);
	cout << largestPair.getFirst() << "," << largestPair.getSecond() << endl;
}
/************************* Q2 *************************/

//paste code from Moodle here...
bool is_reverse_multiple(list<int>::iterator beginItA, list<int>::iterator endItA, list<int>::reverse_iterator endItB) {
	//add code here...
	for (auto it = beginItA; it != endItA; it++) {
		int x = *it;
		int y = *endItB;

		if (y % x != 0)
			return false;

		endItB++;
	}

	return true;
}

vector<double> reverse_and_abs(vector<double*>::reverse_iterator endVec, vector<double*>::reverse_iterator startVec) {
	vector<double> outVec;

	for (auto it = endVec; it != startVec; it++) {
		double value = abs(**it);
		outVec.push_back(value);
	}

	return outVec;
}

void Q2() {
	list<int> listA = { 1, 2, 3 };
	list<int> listB = { 7, 4, 2 };

	//add code to invoke is_reverse_multiple()...
	auto beginItA = begin(listA);
	auto endItA = end(listA);
	auto endItB = rbegin(listB);

	cout << "is_reverse_multiple: " << is_reverse_multiple(beginItA, endItA, endItB) << endl;

	/************************************************************/
	double x = -3, y = -4, z = -5;
	vector<double*> vecA;
	vecA.push_back(&x);
	vecA.push_back(&y);
	vecA.push_back(&z);

	//add code to invoke is_reverse_multiple()...
	vector<double*>::reverse_iterator endVec = rbegin(vecA);
	vector<double*>::reverse_iterator startVec = rend(vecA);

	vector<double> results = reverse_and_abs(endVec, startVec);
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