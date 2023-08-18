
//Word_Count_in_C++ by RAMAVATH SANTHOSH
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int countWords(const string &text)
{
    stringstream ss(text);
    int wordCount = 0;
    string word;

    while (ss >> word)
    {
        ++wordCount;
    }

    return wordCount;
}

int main()
{
    string filename;

    cout << "Enter the file name (including extension): ";
    getline(cin, filename);

    ifstream inputFile(filename);

    if (!inputFile)
    {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    string content((istreambuf_iterator<char>(inputFile)),
                   (istreambuf_iterator<char>()));

    int wordCount = countWords(content);

    cout << "Total word count in the file: " << wordCount << endl;

    return 0;
}
