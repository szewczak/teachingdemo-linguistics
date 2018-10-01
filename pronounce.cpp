/*
Author: Nick Szewczak
Course: CSCI-136
Instructor: Subhadarshi Panda
Assignment: Project 2 Phase 1


    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 

    fin.close();


...*/

#include <iostream>  //cout for debugging
#include <fstream>   //FileStream access
#include <climits>   // max min


using namespace std;




int main(){
    ifstream cmu("cmudict.0.7a.txt");
    if (cmu.fail()) {
        cerr << "Not found\n";
        exit(1);
    }
    string userword;
    printf("enter a word:\n");
    cin >> userword;
    for(int i=0; i < userword.length(); i++){
        userword[i]= toupper(userword[i]);
    }

    string readword;
    
    while(cmu >> readword){
        if(userword==readword){
            string pronounce;
            getline(cmu, pronounce);
            cout << "Pronunciation\t: " << pronounce << endl;
            break;
        }
        else cmu.ignore(INT_MAX, '\n'); //skips to the end of line
    }
    return 0;
}
