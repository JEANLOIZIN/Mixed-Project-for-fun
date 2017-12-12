#include "clocktype.h" // created library.


void clockType::setTime(int hours, int minutes, int seconds) // prototype of clock type ::setTime
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else 
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else 
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else 
        sec = 0;
}

void clockType::getTime(int& hours, int& minutes, // clocktype prototype of gettime.  
                        int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::incrementHours() // clocktype prototype of incrementhours
{
    hr++;
    if (hr > 23)
        hr = 0;
}

void clockType::incrementMinutes() // clocktype prototype to increment Minutes
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours(); //increment hours
    }
}

void clockType::incrementSeconds() // clock type prototype to increment Minutes
{
    sec++;

    if (sec > 59)
    {
        sec = 0;
        incrementMinutes(); //increment minutes
    }
}

void clockType::printTime() const //  prototype clockType of printTime 
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";

    if (min < 10)
        cout << "0";
    cout << min << ":";

    if (sec < 10)
        cout << "0";
    cout << sec;
}

bool clockType::equalTime(const clockType& otherClock) const // prototype clocktype for equal time.
{
    return (hr == otherClock.hr 
            && min == otherClock.min 
            && sec == otherClock.sec);
}

clockType::clockType(int h, int m, int s)
{
	hr=h;
	min=m;
	sec=s;
}

bool clockType::operator==(const clockType &gmt) const // bool clocktype with 
{
	return (hr==gmt.hr && min==gmt.min && sec==gmt.sec);
}

void clockType::operator++() // new operation incrementation. 
{
	incrementSeconds();
}