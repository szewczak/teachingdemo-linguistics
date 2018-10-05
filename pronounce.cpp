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

~~~~~~~~~~~~~~~~~~~~~


    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 

    fin.close();


...*/

/*
using iostream for cmd in out
using fstream for file streaming
using climits for max min opps
*/
/*
streamManager function(string):
    handed dictionary filename
    //todo: add overloarding for paths
    open file stream
        if fail, send cerr and EXIT
        else, return stream refrence
*/
/*
searchWordFunction *(string targetWord,stream ref)
    while ref allows >> word reading:
        if targetWord = word read from file:
            return stream ref at current file position
            break //this skips the exit at end of function for failed search
        else:
            skip to end of line to prepare for net read
    EXIT if while loop concludes and has not returned ref yet, search fail.
*/
/*
searchPrononceFunction *(string targetWord,stream ref)
    Set streamref to 0 again.
    string output
    string temp
    while ref allows >> word reading:
        read word to temp
        readline
        if pronounce = readline:
            string output + temp + endl
    return output string
*/
/*
pronounceFunction (string a, stream ref)
    assumes stream ref is at start of pronounce string
    a = readline from streamref
    return a
*/
/*
main:
    get cin << target word
    streamManager(dictionary)
    searchFunction(targetword)
    a = pronounceFunction(streamRef)
    cout << a << endl
    cout << searchPrononceFunction(a, streamRef)
*/
/*

