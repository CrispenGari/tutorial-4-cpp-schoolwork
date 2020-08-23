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

/*1. Write a program to read three ints and to print them in ascending order. [6 marks]
Solution:*/
using namespace std;
#include <iostream>
// a function that swaps integers
void swapp_numbers(int &num1, int &num2)
{
    /*int temp =num1;
 num1 = num2;
 num2 = temp;
 */
    // can be done as follows
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
}
// a function that sort an array in order
void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int small = i;
        for (int j = 1; j < size; j++)
            if (array[i] < array[j])
            {
                // small remains small =i
                small = small;
            }
            else
            {
                // small changes to j
                small = j;
            }
        if (i != small)
            // if small changes swap the indexes
            swapp_numbers(array[small], array[i]);
    }
}
void printNumbers(int array[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        // im saying for the last item we dont need a comma
        (i < size - 1) && cout << array[i] << ", \t" || cout << array[i] << "]
                                                                            " << endl;
    }
}
int main(void)
{
    int num1, num2, num3;
    cout << "ENTER 3 INTEGER NUMBERS SURPURATED BY a space, tab or new line."
         << endl;
    CSC 211 Tutorial 1 Stud ID : 201925693 cout << "NUMBERS: \t";
    cin >> num1 >> num2 >> num3;
    int int_array[] = {num1, num2, num3};
    cout << "UNSORTED INTEGERS ARE: " << endl;
    // calling the function to print our unsorted integers
    printNumbers(int_array, sizeof(int_array) / sizeof(int_array[0]));
    cout << "SORTED (ASCENDING ORDER) INTEGERS ARE: " << endl;
    // calling the function to sort our integers
    sortArray(int_array, sizeof(int_array) / sizeof(int_array[0]));
    // calling the function to print our sorted integers
    printNumbers(int_array, sizeof(int_array) / sizeof(int_array[0]));
    return 0;
}