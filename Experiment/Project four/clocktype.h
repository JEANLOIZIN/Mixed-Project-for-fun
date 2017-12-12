
#ifndef HCLOCK // if statement to check if HCLOCK is define. 
#define HCLOCK // define if not already defined. 
#include <iostream> // input and output library 


using namespace std; // cout and cin std;


class clockType // prototype 
{
public: // public parameters. and about to access any where in the program. 
    void setTime(int, int, int); // getTime parameter
    void getTime(int&, int&, int&) const; // getTime parameter
    void printTime() const; // printtime parameter
    void incrementSeconds();// parameter to increment second
    void incrementMinutes(); // parameter to increment min
    void incrementHours(); // parameter to increment hour
    bool equalTime(const clockType&) const; // equaltime parameter
	bool operator==(const clockType&) const; // operator parameter.
	void operator++(); // new parameter for incrementation by overloading
	clockType(int=0, int = 0, int = 0);// clocktype 

private: // private prototype, can only be accessed only one place in the program. 
    int hr; // int hour
    int min; // int min
    int sec; // int sec
};


#endif // End of HCLOCK