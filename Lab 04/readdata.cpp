// Program ReadData is a test bed for you to try various 
// combinations of input statements with different data 
// configurations.  
// It determines the cost of a sheet of glass given the  
// dimensions and the price per square foot of glass.     

#include <string>
#include <sstream>

#include <iostream>
#include <iomanip>

using namespace std;

const  int inchesInSqFt = 144;

float getNum(string prompt)
{
	string input;	//Data read from the console
	float output;	//input converted to a float

	stringstream convert;

	do
	{

		if (convert.fail())	//If the conversion has failed on a previous loop
		{
			cout << endl << "I'm sorry, I don't understand \"" << input << "\".  Please try again." << endl;	//Tell the user their input can't be understood
			convert = stringstream();		//Reset the data contained within the stringstream
			convert.clear();				//Reset any failure flags that may have been triggered
		}

		//Get input from the user
		cout << prompt << ":";
		getline(cin, input);

		//Convert the data
		convert << input;
		convert >> output;

	} while (convert.fail());
	
	return output;
}

int main()
{
	int  length;			    // Measured in inches
	int  width;       		// Measured in inches 
	float  price;            	// Sold by square foot 
	float  cost;

	cout << fixed << showpoint;

	length = getNum("Glass length (in) ");
	width = getNum("Glass width (in) ");
	price = getNum("Glass price ($/sqft) ");

	//cost = length * width * price;

	cout << "Length: " << setw(5) << length 
		<< "  Width: " << setw(5) << width
		<< "  Price: " << setw(6) << setprecision(2)
		<< price << endl;
	cost = ((width * length) / inchesInSqFt) * price;
	cout << "The cost of the glass is $" << setw(6)
		<< cost << endl;


	cin.get();
	return 0;
}
