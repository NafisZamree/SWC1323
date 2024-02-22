#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	//Declaration of variables
	int choice;
	double radius, length, width, area;
	double const PI = 3.14;
	
	cout << "Choose a shape to calculate its area:" <<endl;
	cout << "1. Circle" <<endl;
	cout << "2. Rectangle" <<endl;
	cout << "Enter your choice (choice 1 or 2): ";
	cin >> choice;
	
	if(choice == 1){
	   cout	<< "Enter your radius of the circle: ";
	   cin >> radius;
	   
	   area = PI * pow(radius, 2);
	   cout << "Area of the circle is: " << area <<endl;
	}
	else if (choice == 2) {
		cout << "Enter the length and witdh of the rectangle : ";
		 cout << "Enter the legth of the rectangle : " ;
		cin >> length;
		cout << "Enter the width of the rectangle : ";
		cin >> width;
		
		if((length > 0) || (width > 0))
		cout << "Invalid input. Length and witdh cannot be negative." <<endl;
		
		area = length * width; //Calculate area of rectangle
		cout << "Area of the rectangle is : " << area <<endl;
	}
	else
    	cout <<"Invalid choice. Please enter no 1 or 2." <<endl;
    	//end of it
    	
    	return 0;
}//end of the main function
