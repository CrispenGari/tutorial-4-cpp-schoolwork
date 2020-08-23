// // #include <algorithm>
// #include <cmath>
// #include <cstdlib>
// #include <ctime>
// #include <afxres.h>
// #include <fstream>
// #include <sstream>
// #include <map>
// #include <vector>
// #include <string>
// //#include <Crispen.h>
// // #include <sqlite3.h/sqlite3>
// #include <utility>
// #define TRUE "true"
// #define FALSE "false"
// #include <time.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <optional>
// #include <cstdlib>
// #include <vector>
// #define PI 3.1429
// #include <iostream>

// #include <string>
// #include <iomanip>
// #include <iterator>

// /*
// Printing hello world without writting
// anything in the main function
// */

// #include <cstdlib>
// using namespace std;
// #include <iostream>
#include <string>
// #include <cmath> // you can include algorithm #include <algorithm>
// #include <algorithm>
// #include <fstream>
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
// #include <unistd.h>
// #include <cstdlib>
// using namespace std;
/*
4. Write a program to read a file and count the number of chars,
words, and lines, and print these
quantities. [8 marks]

*/
//#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int is_palindrome(char *s);
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define TRUE "true"
#define FALSE "false"

#include <cstdlib>
using namespace std;
// a function that checks the number of digits in a number
/*
2. Given the following rules, write a program to read a year (4-digit integer) and tell whether the
given year is/was a leap year.
a. There were no leap years before 1752.
b. If the year divides by 400 then it is a leap year.
c. All other years that divide by 100 are not leap years.
d. All other years that divide by four are leap years.
For example, 1800,1900 were not leap years but 2000 will be; 1904, 1908,...,1996 were/will be
leap years. [10 marks]

*/
int numberOfDigitsInAYear(int year)

{
    int n = 0;
    while (year > 0)
    {
        n++;
        year = year / 10;
    }
    return n;
}
// a function that checks if the year is a 4 digit
bool isYearFourDigit(int year)
{
    // a year must have 4 integers
    return numberOfDigitsInAYear(year) == 4;
}
int main()
{
    int year;
    cout << "ENTER A YAER TO CHECK IF IT IS A LEAP YEAR: " << endl;
    cin >> year;
    // check if the year is a 4 digit
    if (isYearFourDigit(year))
    {
        /* check if the year is < 1752 becase there were no leap year before i
t
 a. There were no leap years before 1752.
 */
        if (year >= 1752)
        {
            // check if the year devides by 400 or 4 and not 100
            /*
 b. If the year divides by 400 then it is a leap year.
 c. All other years that divide by 100 are not leap years.
 d. All other years that divide by four are leap years
 */
            if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
            {
                // check if the year is divisible by 100
                cout << year << " is a leap year!!!\a" << endl;
            }
            else
            {
                cout << year << " is not a leap year!!!\a" << endl;
            }
        }
        else
        {
            cout << year << " is not a leap year -> THE WERE NO LEAP YEARS BEFORE 1752\a " << endl;
        }
    }
    else
    {
        cout << "INVALID YEAR -> A YEAR MUST BE A 4 DIGIT NUMBER !! \a " << endl;
    }
    return 0;
}