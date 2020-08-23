
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
    int num;
    cout << "ENTER AN INTEGER NUMBER TO CHECK IF IS IS A PALIDROME INTEGER\n";
    cout << "INTEGER: \t";
    cin >> num;

    if (isPalidrome(num))
    {
        cout << num << " is a palindrome number!!" << endl;
    }
    else
    {
        cout << num << " is not a palindrome number!!" << endl;
    }
    return 0;
}
