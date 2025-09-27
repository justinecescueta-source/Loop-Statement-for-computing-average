// Justine C. Escueta
// COE 251
// Prof: Engr. Marlon Bagara

// Loop

// Libraries
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

// Namespace
using namespace std;

// Global Declaration
char resp;


// Main Function
int main() 
{
	do
	{
					// Declaration of Variables
					int x, failed = 0, passed = 0; // x is the counter variable
					string name;
					float grade, ave, sum = 0;
					
					
					// Initialization, Condition, and Interval Statenebt
					for(x=1;x<=5;x++)
					{
						cout<<"\nEnter name "<<x<<": ";getline(cin,name); // Input for the Name
								do								
								{
								
						         cout<<"Enter grade "<<x<<": "; cin>>grade; // Input for the Grade
						         	if(grade<50 || grade>100)
						         	{
						         	cout<<"Invalid \n"; // Print Invalid 
						         	}
						         	else if(grade<60) // Condition for the failed
						         	{
						         		failed++; // +1 in the variable if the grade is failed
						         		cout<<"FAILED = "<<failed; // Print FAILED if the grade inputted is out of the range of failed
										      
									 }
									 else if(grade>=60) // Condition for passed
									 {
									 	passed++;    // +1 in the variable passed if the grade is passed
									 	cout<<"PASSED = " <<passed; // Print PASSED if the grade inputted is out of the range of passed
									 	
									 }
						     	}
						     	while(grade<50 || grade>100);
						     	
						     	sum = sum + grade;
						     	
						cout<<endl;
						cin.ignore();	
					}
	// Variable Initizaliation				
	ave = sum / 5;				

    // Output for Sum, Average, Passed, and Failed
	cout<<"\nSum = "<<fixed<<setprecision(2)<<sum;
	cout<<"\nAverage = "<<fixed<<setprecision(2)<<ave<<"%";
	cout<<"\nPassed = " <<passed;
	cout<<"\nFailed = " <<failed;
	
	// Repeat or Not
	cout<<"\n\nDo you want to continue? [Y/N]: "; cin>>resp;
	
	// Ignore the getline
	cin.ignore();			
	}
	// Condition to both consider capital and small letter Y y
	while(resp=='Y' || resp=='y');
	
	getch();
}
