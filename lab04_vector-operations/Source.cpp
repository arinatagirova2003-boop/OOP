#include <iostream>
#include "Vector.h"

using namespace std;

int main() {

	float x1, y1, z1;
	float x2, y2, z2;

	cout << "Enter the first vector: " << endl;
	cin >> x1;
	cin >> y1;
	cin >> z1;

	cout << "Enter the second vector: " << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;

	Vector v1(x1, y1, z1);
	Vector v2(x2, y2, z2);

	cout << endl;
	v1.displayVec();
	v2.displayVec();

	cout << "v1 + v2 : ";
	(v1 + v2).displayVec();

	cout << endl;
	v1.displayVec();
	v2.displayVec();

	cout << "v1 * = v2: " ;
	v1 *= v2;
	v1.displayVec();

	cout << endl;
	v1.displayVec();
	v2.displayVec();

	cout << "v1 = v2: ";
	v1 = v2;
	v1.displayVec();

	cout << endl;
	v1.displayVec();
	v2.displayVec();
	Vector v3;

	cout << "v3 = v1++: ";
	v3 = v1++;
	v3.displayVec();

	cout << "v3 = ++v2: ";
	v3 = ++v2;
	v3.displayVec();

	return 0;
}
