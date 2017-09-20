// Program Frame4 reads input values that represent the
// dimensions of a print from a file and calculates and
// prints the amount of wood needed for a frame.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("Frame.in");
	outFile.open("Frame.out");


	int side; // Vertical dimension in inches
	int top; // Horizontal dimension in inches
	int inchesOfWood; // Inches of wood needed
	inFile >> side >> top;
	outFile << "Dimensions are " << top << " and "
		<< side << "." << endl;
	inchesOfWood = top + top + side + side;
	outFile << "You need " << inchesOfWood << " inches of wood."
		<< endl;

	inFile.close();
	outFile.close();

	cin.get();		//Hold the window open

	return 0;
}