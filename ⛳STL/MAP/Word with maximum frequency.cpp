You are given a string s that is made up of words separated by spaces. Your task is to find the word with the highest frequency, i.e. it appears the most times in the sentence. If multiple words have maximum frequency, then print the word that occurs first in the sentence.
Examples:
Input: s = "the devil in the sky"
Output: "the 2"
Explanation: The frequency of "the" is 2, so we return "the" and its frequency "2" i.e., "the 2"





#include <iostream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Input the string

    map<string, int> wordFrequency;  // To store frequency of each word
    vector<string> words;            // To maintain the order of words
    stringstream ss(s);
    string word;

    // Split the input string into words and populate the frequency map
    while (ss >> word) {
        if (wordFrequency[word] == 0) {
            words.push_back(word);  // Push to order-maintaining vector
        }
        wordFrequency[word]++;
    }

    // Find the word with the highest frequency
    int maxFrequency = 0;
    string maxFrequencyWord;

    for (const string& w : words) {
        if (wordFrequency[w] > maxFrequency) {
            maxFrequency = wordFrequency[w];
            maxFrequencyWord = w;
        }
    }

    // Output the word with the maximum frequency and its count
    cout << maxFrequencyWord << " " << maxFrequency << endl;

    return 0;
}



