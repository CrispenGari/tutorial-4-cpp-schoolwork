
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void fileReaderCounter(ifstream *fileReader, string *path)
{
    // checks if it fails to read the stream
    string line;
    int num_of_lines = 0, words_count = 0, char_count = 0;
    if (fileReader->is_open())
    {
        cout << "THE STATISTICS OF THE FILE: " << *path << endl;
        while (true)
        {
            /* the getline(stream, str) method allows us to get
                the whole line in the stream including while spaces
                */
            getline(*fileReader, line);
            // after reading a line increament the num_of lines
            num_of_lines++;
            // number of chars is just the length of a string
            char_count += line.size();
            /*
            for each line we must check the space between words
            using the isspace() function and number of words is
            spaces + 1;
            */
            int count_spaces = 0;
            for (int i = 0; i < line.length(); i++)
            {
                if (isspace(char(line[i])))
                {
                    count_spaces++;
                }
            }
            words_count += (count_spaces + 1);

            if (fileReader->eof())
            {
                //  break the loop
                break;
            }
        }
    }
    else
    {
        cerr << "Error: Cannot read a closed file" << endl;
    }
    cout << "NUMBER OF LINES:\t" << num_of_lines << endl;
    cout << "NUMBER OF CHARACTERS: \t" << char_count << endl;
    /*
    the logic of counting words is simple if number of lines becomes
    more than 2 then we must subtract words count by 1 because a new
    line character when using the isspace() method is considered to be
    a space as well therefore the last loop in the file will add the
    unnessesary count on space.
    */

    cout << "NUMBER OF WORDS: \t";
    (num_of_lines > 2) && cout << words_count - 1 << endl || cout << words_count << endl;
}
int main()
{
    string path("students.txt");
    ifstream fileReader(path);
    string line;
    if (fileReader.fail())
    {
        fileReader.close();
        cout << "UNABLE TO OPEN THE FILE AN ERROR JUST OCCURED" << endl;
        exit(-1);
    }
    fileReaderCounter(&fileReader, &path);
    fileReader.close();
    return 0;
}
