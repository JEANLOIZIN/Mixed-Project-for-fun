/* Jean Loizin
This is a program of clock type. The program is designed to increment a given time by one second, and output a new time. The incrementation will be 
done by over loading the operator. 
The program is extremely simple and as always all instructions must be followed in order they will be given in order for this program to work as should.
before entering a time, the program will prompt the user to enter a time and the number should be entered as follow 01 02 34. 
due to the fact that this program was built using a 24 hour clock, the time inputing must match and must also be within the 24 hour time frame.*/

#include "clocktype.h" // created library



int main() // main program. 
{
    clockType myClock; // parameter
    clockType yourClock;  // parameter

    int hours; //initiallizing hours. 
    int minutes; // initiallizing minutes 
    int seconds; // initiallizing seconds
	int hour; // initiallizing new variable name hour
	int minute; // initiallizing new variable name minute
	int second;// initialllizing new variable name second

    myClock.setTime(05, 4, 30);    //Set the time of myClock
    cout << "1   MyClock: ";        //  printing out myclock               
    myClock.printTime();  // pulling print time and printing the time of myClock   
    cout << endl << endl;   // skipping two lines                                   

	cout<< "Please Enter your time to proceed: "; // screen outputs.
	cin >> hour >> minute >> second; // allowing the user to enter a time.
    yourClock.setTime(hour, minute, second); //Set the time of yourClock
	cout << endl; // line skipping 
	cout << "2   YourClock: ";   // print out your clock                  
    yourClock.printTime(); //print the time of yourClock Line 6
    cout << endl << endl; // skipping two lines                                      

   
        
    if (myClock.equalTime(yourClock))   // //Compare myClock and yourClock               
        cout << "Both times are equal." // output if times are equal. 
	<<endl << endl; // skipping line
    else                                               
        cout << "The two times are not equal." // outputs if time are not equal.
             << endl << endl;     // skipping line                             

    cout << "Please Enter the hours, minutes, and "
         << "seconds: ";// output message on screen
	cout << endl << endl; // skipping line
    cin >> hours >> minutes >> seconds;  // waiting for input              
    cout << endl;       // skipping line                               

        //Set the time of myClock using the value of the
        //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds); // My clock prototype for setting time.
	
    cout << "New myClock:\t";// output on screen
	cout << endl;
    myClock.printTime();   //print the time of myClock  
    cout << endl; // skipping a line                                      

        
    myClock.incrementSeconds(); //Increment the time of myClock by one second                       

    cout << "After incrementing myClock by " // message after incrementation
         << "one second, myClock: ";                   
    myClock.printTime();   //print the time of myClock   
    cout << endl << endl;    // skipping a line                                  

        
    myClock.getTime(hours, minutes, seconds); //Retrieve the hours, minutes, and seconds of the 
        //object myClock     

       
    cout << "hours = " << hours //
         << ", minutes = " << minutes//  Output the value of hours, minutes, and seconds
         << ", seconds = " << seconds << endl << endl; //  Skipping two lines 
	cout<<"Incrementing the clock!\t"; // printing out incrementing the same.. 
	myClock++;// incrementation operation. by overloading.
	myClock.printTime();   //print the time of myClock
	cout << endl << endl; // skipping line.
	system("pause"); // pausing the output
    return 0; // returning control to the operating system. 
}//end main

