using namespace std;
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define TRUE "true"
#define FALSE "false"
// A function that reverse string using the buit-in reverse from #include <bits/stdc++.h>
void reverseString(string &str)
{
    // the function that reversed a string using iterators method begin() and end()
    reverse(str.begin(), str.end());
}
/*
checks if the string is palindrome or not
pass string variable by refrence
*/
/*this function is_palindrome() can also be written
as*/
int is_palindrome(string &s)
{
    string tempstring = s;
    reverseString(s);
    if (s == tempstring)
    {
        return 1;
        // return true if the string reads the same in reverse as well as going forward
    }
    else
    {
        // otheerwise return 0 of false
        return 0;
    }
}
/*bool is_palindrome(string &s)
{
    string tempstring = s;
    reverseString(s);
    if (s == tempstring)
    {
        return TRUE; // from defined constants
        // return true if the string reads the same in reverse as well as going forward
    }
    else
    {
        // otheerwise return 0 of false
        return FALSE;
    }
}*/
int main(void)
{
    string string_from_user;
    cout << "ENTER A STRING YOU WANT TO CHECK IF IT IS A PALIDROME" << endl;
    cin >> string_from_user;
    if (is_palindrome(string_from_user))
    {
        // rereverse the variables string
        reverseString(string_from_user);
        cout << "\nTHE STRING '" << string_from_user << "' is a palindrome string!!" << endl;
    }
    else
    {
        // rereverse the variables string
        reverseString(string_from_user);
        cout << "\nTHE STRING '" << string_from_user << "' is not a palindrome string!!" << endl;
    }
    return 0;
}

