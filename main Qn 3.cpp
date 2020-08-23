#include <cstdlib>
using namespace std;
#include <iostream>
#include <string>
#include <cmath> // you can include algorithm #include <algorithm>
#include <algorithm>
#include <fstream>
lude <unistd.h>
#include <cstdlib>
using namespace std;
//  a leap year has 366 days because of feb
// checking a four-digit year
bool isLeapYear(int year)
{
    /*
    condition for a leap year
    */
    return year % 4 == 0 || year % 400 == 0 && year % 100 != 0;
}
bool isFourDigit(int year)
{
    int num = 0;
    while (year > 0)
    {
        num++;
        year /= 10;
    }
    return num == 4;
}
int numberofDaysInThatMonth(int month, int year)
{

    if (month == 2)
    {
        // check if it is a leap year
        if (isLeapYear(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        // do the clever logic with other months
        if (month % 2 == 1 && month < 8)
        {
            return 31;
        }
        else if (month % 2 == 0 && month < 8)
        {
            return 30;
        }
        else if (month % 2 == 0 && month > 7)
        {
            return 31;
        }
        else
        {
            return 30;
        }
    }
    /* this line will never be reached because of conditions i set
    unless the month becomes invalid which is the bug that will be
    fixed in the main 
    */
    return 0;
}
// the function that checks the validity of the month
bool isMonthValid(int month)
{
    return month > 0 && month < 13;
}
// the function that checks the validity of the days
bool isDayValid(int day)
{
    return (day > 0 && day < 32) ? !false : false;
}

//  the last function will just add days of a given date;

int sumDays(int year, int month, int day)
{
    int num_of_days = 0;
    // check for the condition that satisfy the valid date
    if (isFourDigit(year) && isMonthValid(month) && isDayValid(day))
    {
        // do some clever stuff here!!
        // i've already checked the condition of a leap year
        for (int i = 1; i < month; i++)
        {
            num_of_days += numberofDaysInThatMonth(i, year);
        }
    }
    else
    {
        // return -1 we will catch this in the main as an error [invalid date]
        return -1;
    }
    return num_of_days + day;
}
int main()
{
    int month, year, day;
    cout << "ENTER DATE VALUES TO CHECK THE DAY NUMBER WITHIN THAT YEAR: \n";
    cout << "ENTER A DAY (1...31 ): \t";
    cin >> day;
    cout << "ENTER A MONTH NUMBER (1. jan ... 12. dec) :  \t";
    cin >> month;
    cout << "ENTER A YEAR (4 digits):  \t";
    cin >> year;
    if (sumDays(year, month, day) > 0)
    {
        cout << "DATE ENTERED: \t(" << day << "/" << month << "/" << year << ")" << endl;
        cout << "THE NUMBER OF DAYS ARE: " << sumDays(year, month, day) << endl;
    }
    else
    {
        //  catching errors
        cerr << "\nINVALID DATE ARGUMENTS!!!!\a" << endl;
    }
}

/* ------------------------------------------END----------------------------------------------  */
/*
if (inFile.fail()){
    cerr<<"ERROR IN TRYING TO OPEN A FILE"<<endl;
    exit(1); //For closing the application without any crushing
 }
*/

/*
Getting the cwdir
#include <unistd.h>
 char the_path[256];
getcwd(the_path, 255);
    cout << the_path << endl;
*/
