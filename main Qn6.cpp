//#include <unistd.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int reverseNumber(int number)
{
    int rev = 0;
    while (number > 0)
    {
        //  multipy the rev by 10 and the append the last number
        rev = rev * 10 + number % 10;
        // update the number
        number /= 10;
    }
    return rev;
}
bool isPalidrome(int number)
{
    return reverseNumber(number) == number;
}
int main()
{
    int minimum, maximum;
    cout << "ENTER A MINIMUN AND MAXIMUM RANGE TO CHECK FOR PALINDROME INTEGERS\n";
    cout << "MIN: \t";
    cin >> minimum;
    cout << "MIN: \t";
    cin >> maximum;
    int j = 0;
    for (int i = minimum; i < maximum + 1; i++)
    {
        if (isPalidrome(i))
        {
            j++;
            cout << i << " is a palindrome number!!!" << endl;
        }
    }
    return 0;
}
