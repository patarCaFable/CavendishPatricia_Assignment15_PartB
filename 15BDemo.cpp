/*Patricia Cavendish
*CIS 1202 502
*Due 12/06/2020
*12/06/2020
*/

#include <iostream>
#include <cmath>
using namespace std;

template <class SomeType>
SomeType half(SomeType number)
{
	return number / 2;
}

int half(int c) {
	float number = static_cast<float>(c);
	number = round(number / 2);
	return number;
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	cout << endl << endl;
	system("PAUSE");
	return 0;
}