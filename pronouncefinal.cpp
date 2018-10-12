/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Project 2
Write a program pronounce.cpp that
    Lets the user input a word (let’s call the input word W).
    If the word is not found in the dictionary, print
    “Not found”. Otherwise, report:

Pronunciation : the pronunciation of the word W (as given in the dictionary),

Identical : other words from the dictionary with the same pronunciation as W,
Replace phoneme : words that can be obtained from W by replacing one phoneme.
Add phoneme : words that can be obtained from W by adding one phoneme,
Remove phoneme : words that can be obtained from W by removing one phoneme,
When listing words, include all words from the dictionary that meet the
criteria, the order of listed words should be the same as they appear in the
dictionary.

Your program should expect that the dictionary file cmudict.0.7a is located
in the current working directory.

User input should be case-insensitive (accepting donut, DONUT, DOnUt, etc.)

Please, don’t make complex user interface that allows multiple queries. The
program should just ask for one word, report the answer, and exit. See examples
below.

 You are allowed to use only the constructs of the language that were mentioned
 in lecture slides and covered in class. For strings, you can use only the
 operations mentioned in class.
 */


#include <iostream>  //for cmd in out
#include <fstream>  //for file streaming
#include <climits>  //for max min opps

using namespace std;
///global
ifstream cmudict;

/// helper fucntions
string uppercase(string& word) { ///converts any string to uppercase
  for (int i = 0; i < word.length(); i++) {
    word[i] = toupper(word[i]);
  }
  return word;
}


ifstream streamManager(){   //opens a stream to the dictionary global
    ifstream cmu("cmudict.0.7a.txt");
        if (cmu.fail()) {
            cerr << "Dict file not found. Exiting \n";
            exit(1);
        }
    return cmu;
}
