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

int main() {
    ifstream cmu("cmudict.0.7a.txt");
    if (cmu.fail()) {
        cerr << "Not found\n";
        exit(1);
    }
}

