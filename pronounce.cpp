/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Project 2 phase 2 Pesudocode
Task:
User enters a word — the program reports pronunciation as a list of phonemes AND a list of words that sound the same (is made up of exactly the same sequence of phonemes). Example:

> donut

Pronunciation    : D OW1 N AH2 T

Identical        : DOUGHNUT

...*/


#include <iostream>  //for cmd in out
#include <fstream>  //for file streaming
#include <climits>  //for max min opps

using namespace std;
//global
ifstream cmudict;

string uppercase(string& word) {
  for (int i = 0; i < word.length(); i++) {
    word[i] = toupper(word[i]);
  }
  return word;
}

ifstream streamManager(){   //opens a stream to the dictionary file
    ifstream cmu("cmudict.0.7a.txt");
        if (cmu.fail()) {
            cerr << "Dict file not found. Exiting \n";
            exit(1);
        }
    return cmu;
}


string findWord (string inputWord) {//parses through dict and returns pronounce string
    string pronounce;
    string targetWord;
    while(cmudict >> targetWord){
        if(inputWord==targetWord){
            getline(cmudict, pronounce);
            break;
        }   
        else cmudict.ignore(INT_MAX, '\n'); //skips to the end of line
    }
    return pronounce;
}


void sortPronounce (string apronounce, string &whitelist) {
    cmudict.clear();
    cmudict.seekg(0, ios::beg);
    for(int i=0; i < 119 - 1; ++i){
    cmudict.ignore(INT_MAX, '\n');
    }
    string bword;
    string bpronounce;
    while(cmudict >> bword){
        getline(cmudict, bpronounce);
        if(bpronounce==apronounce){
            whitelist = whitelist + " " + bword;
        }
    }
}



int main(){
    string input;
    cin >> input;
    uppercase(input);
    string dictName = "cmudict.0.7a.txt";
    cmudict = streamManager();
    string out;
    string temp = findWord(input);
    out = "Pronunciation    :" + temp + "\n";
    out = out + "Identical        :";
    sortPronounce(temp,out);
    cout << endl << endl << out<< endl;
}

