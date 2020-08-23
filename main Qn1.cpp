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
        (i < size - 1) && cout << array[i] << ", \t" || cout << array[i] << "]" << endl;
    }
}
int main(void)
{
    int num1, num2, num3;
    cout << "ENTER 3 INTEGER NUMBERS SURPURATED BY a space, tab or new line."<< endl;
    cout << "NUMBERS: \t";
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
