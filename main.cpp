//main method for Plane
#include "Plane.h"
int main()
{
//	Plane COSC1430();
    // wrong do this instead
  
    cout << "Enter a number of rows for first class: ";
		cin >> numRowFirstClass;

		cout << "Enter a number of columns for first class: ";
		cin >> numColFirstClass;

		cout << "Enter a number of rows for economy class: ";
		cin >> numRowEconClass;

		cout << "Enter a number of columns for economy class: ";
		cin >> numColEconClass;
    
	Plane COSC1430 = Plane(numRowFirstClass, numColFirstClass, numRowEconClass, numColEconClass);

	int input = 0;
	while (input != 6)
	{
		if (input = 0)
		{
			cout << "Pick one of these options" << endl;
			cout << "1. Display all seat" << endl;
			cout << "2. Check a seat" << endl;
			cout << "3. Clear a seat" << endl;
			cout << "4. Book a seat" << endl;
			cout << "5.Empty all seat" << endl;
			cout << "6.Exit" << endl;
			cout << "input : ";
			cin >> input;
		}
		else if (input = 1)//"1. Display all seat"
		{
			COSC1430.displaySeats();
			input = 0;
		}
		else if (input = 2)//"2. Check a seat"
		{
			COSC1430.checkSeat();
			input = 0;
		}
		else if (input = 3)//"3. Clear a seat"
		{
			COSC1430.clearSeat();
			input = 0;
		}
		else if (input = 4)//"4. Book a seat"
		{
			COSC1430.bookSeat();
			input = 0;
		}
		else if (input = 5)//"5.Empty all seat"
		{
			COSC1430.clearAllSeats();
			input = 0;
		}
	}
	return 0;
}