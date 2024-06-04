#include <iostream>
#include <fstream> 
#include <algorithm>//provides a collection of functions especially designed to be used on ranges of elements 
#include <sstream> // provides facilities for handling input and output operations on string through the use of string streams
#include <cctype>// declares several functions to transform individual characters

using namespace std;
// below is the function called countVowels used to calculate the number of vowels in the in the text file
int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Function below countWord function is there responsible for counting words in the text
int countWords(const string& str) {
    stringstream ss(str);
    int count = 0;
    string word;
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function that involves reversing words in the text file
string reverseWords(const string& str) {
stringstream ss(str);
string word, result;
    while (ss >> word) {
        result = word + " " + result;
    }
    return result.substr(0, result.length() - 1);
}

// Function to capitalize second letter of each word in the text file
string capitalizeSecond(const string& str) {
    stringstream ss(str);
    string word, result;
    while (ss >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);  // Remove trailing space
}

//below is the main method of this whole program thats where execution starts
int main() {
    ifstream file("text.txt");
    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    cout << "Number of all vowels: " << countVowels(fileData) << endl;// Displaying the number of vowels in the text file
    cout << "Number of all words: " << countWords(fileData) << endl;//Displaying the number of words in the text file
    cout << "Reversed text will appear as: " << reverseWords(fileData) << endl;// calling the function "reverseWords" to display the reversed words in the text file
    cout << "Capitalized second letter: " << capitalizeSecond(fileData) << endl;// calling the function "capitaliseSecond"

    return 0;
}
