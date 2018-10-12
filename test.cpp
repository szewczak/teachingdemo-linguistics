//Remove phoneme

//from plants:
//LANTZ PANTS PLANT
//PLANTE PLATTS PLATZ
#include <iostream>
#include <array>

using namespace std;


int phonemeCount(string pronounce){// returns the length of the phoneme array
    int spaces=1;
    for(int i=0; i < pronounce.length(); i++){ 
        if(pronounce[i]==' '){
            spaces++;
        }
    }
    return spaces;
}

int main(){
string apronounce = "P L AE1 N T S";
string bpronounce = "L AE1 N T S";
int aArraySize = phonemeCount(apronounce);
string aArray[aArraySize] = {"P", "L", "AE1", "N", "T", "S"};
string bArray[5] =          {     "L", "AE1", "N", "T", "ER0"};

int bArraySize = phonemeCount(bpronounce);
int replaceCount = 0;
int bindex = 0;
cout << "A \t \t B \t count" << endl;
for(int i=0; i <= bArraySize; i++){  //now that we have two arrays to compare:
    cout << aArray[i] << "[" << i << "]" << "\t\t" << bArray[bindex] <<"[" << bindex << "]" <<"\t"<< replaceCount << endl;
    if(aArray[i] != bArray[bindex]){     //if array items do not equal,
        replaceCount++;             //increment count
    }
    else{
        bindex++;
    }
}
cout << replaceCount << endl;

return 0;
}