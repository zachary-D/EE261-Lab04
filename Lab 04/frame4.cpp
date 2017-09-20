// Program Frame4 reads input values that represent the
// dimensions of a print from a file and calculates and
// prints the amount of wood needed for a frame.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("Frame.in");
	int side; // Vertical dimension in inches
	int top; // Horizontal dimension in inches
	int inchesOfWood; // Inches of wood needed
	inFile >> side >> top;
	cout << "Dimensions are " << top << " and "
		<< side << "." << endl;
	inchesOfWood = top + top + side + side;
	cout << "You need " << inchesOfWood << " inches of wood."
		<< endl;

	cin.get();

	return 0;
}