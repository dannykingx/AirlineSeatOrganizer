#include "Plane.h"
	 struct Seat(char myStat)
	{
    char status() 
    {
			if (myBooking == false)
			{
				return '-';
			}
			else
			{

				return 'x';

			}
		}
		bool isBooked() {

			if (myStat == 'x')
			{
				return true;
				cout << "Booked" << endl;

			}
			else 
			{
				return false;
				cout << "Available" << endl;
			}

		}

	};

// Struct Seat --> fistClass
// Struct Seat --> economy

	



	// Seat **firstClassArray = new Seat[firstClassRows][firstClassCols];
  // Seat **econArray = new Seat [econRows][econCols];




	Plane::Plane()
	{
		Seat ** firstClass;
		Seat ** economy;
		int firstClassRows, firstClassCols, econRows, econCols;
    //
    int numRowFirstClass = 0;
		int numColFirstClass = 0;
		int numRowEconClass = 0;
		int numColEconClass = 0;
	}


	Plane::Plane(int a, int b, int c, int d)
	{		
    
    Seat ** firstClass;
		Seat ** economy;
		int firstClassRows, firstClassCols, econRows, econCols;
    //
    numRowFirstClass = a;
    numColFirstClass = b;
    numRowEconClass = c;
    numColEconClass = d;
    
    
    
    
    /*cout << "Enter a number of rows for first class: ";
		cin >> numRowFirstClass;

		cout << "Enter a number of columns for first class: ";
		cin >> numColFirstClass;

		cout << "Enter a number of rows for economy class: ";
		cin >> numRowEconClass;

		cout << "Enter a number of columns for economy class: ";
		cin >> numColEconClass;
    */
    
    firstClass = new Seat *[numRowFirstClass];
    for(int i = 0; i < a; i++)
    {
      
      firstClass[i] = new Seat[numColFirstClass];
      Seat *myPointer = firstClass[i];
      for(int j = 0; j < b ; j++)
      {
        *myPointer->myStat = '-';
        myPointer++;
      }
    }
    
    econSeats = new Seat*[numRowEconClass];    
    for(int r = 0; r < a; r++)
    {
      econSeats[x]= new Seat[numColEconClass]
      Seat *iter = econSeats[r];
      for(int c = 0; c < b; c++)
      {
        *iter->myStat="-";
        iter++;
      }
    }
    
    
    



	}

	void Plane:: displaySeats()
	{
    
    

		char stat = ' ';

		cout << "First Class Seats Display " << endl;
	

		// print the first class array

		for (int i = 0; i < numRowFirstClass; i++)
		{
			for (int j = 0; j < numColFirstClass; j++)
			{

				cout << "| " << **firstClass << " | " << " ";
				firstClass++;

			}
		}
    
    // reset to 0th index

		for (int i = numRowFirstClass; i >= 0; i--)
		{

			for (int j = numColFirstClass; j >= 0; j--)
			{

				fisrtClass[i][j] -= numColFirstClass;

			}
      cout << "\n";

		}

		// add the delete first class multi array

		if (firstClass != NULL) {
   for (int row = 0; row < numRowFirstClass; row++) {
        delete[] firstClass[row];
   }
   delete []firstClass;
   }
	firstClass = NULL;





		cout << "Economy Seats Display " << endl;

		// print the econ array

		for (int i = 0; i < numRowEconClass; i++)
		{
			for (int j = 0; j < numColEconClass; j++)
			{

				cout << " | " << **econSeats << " | " << " ";
				econSeats++;

			}
		}

		// reset to 0th index

		for (int i = numRowEconClass; i >= 0; i--)
		{

			for (int j = numColEconClass; j >= 0; j--)
			{

				econSeats[i][j] -= numColEconClass;

			}
      cout << "\n";

		}

		// add the delete econArray multi array

		if (econSeats != NULL) {
   for (int row = 0; row < numRowEconClass; row++) {
        delete[] econSeats[row];
   }
   delete []econSeats;
   }
	econSeats = NULL;


}
	 
		
		void Plane:: checkSeat()
    {    	
      
      
      // First Class Seats Check
      char stat = '';
      
		for (int i = 0; i < numRowFirstClass; i++)
		{
			for (int j = 0; j < numColFirstClass; j++)
			{
				cout << "Enter availability of first class seat:";
				cin >> stat;

				*firstClassArray[i] = new Seat(stat);
				firstClassArray++;


			}
			cout << "\n";
      
      	for (int i = numRowFirstClass; i >= 0; i--)
		{

			for (int j = numColFirstClass; j >= 0; j--)
			{

				firstClassArray[i][j] -= numColFirstClass;

			}

		}
      
      // Economy Seats Check
      
      	cout << "Economy Seats Display " << endl;

		for (int i = 0; i < numRowEconClass; i++)
		{
			for (int j = 0; j < numColEconClass; j++)
			{
				cout << "Enter availability of economy class seat:";
				cin >> stat;

				**econArray = new Seat(stat);
				econArray++;

			}
			cout << "\n";
		}

		for (int i = numRowEconClass; i >= 0; i--)
		{

			for (int j = numColEconClass; j >= 0; j--)
			{

				econArray[i][j] -= numColEconClass;

			}

		}
      
      
    }
		void bookSeat()
    {
     	int type=0;
      int row=0;
      int col=0;
      cout<<"Enter 1 for First Class or 2 for Economy Seating: ";
      cin>>type;
      cout<<"Enter Row: ";
      cin>>row;
      cout<<"Enter Column: ";
      cin>>col;
      
    }
		void clearSeat()
    {
      int type=0;
      int row=0;
      int col=0;
      cout<<"Enter 1 for First Class or 2 for Economy Seating: ";
      cin>>type;
      cout<<"Enter Row: ";
      cin>>row;
      cout<<"Enter Column: ";
      cin>>col;
    }
		void clearAllSeats()
    {
      
    }