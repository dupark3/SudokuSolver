#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ifstream myPuzzle;
    myPuzzle.open();
    if(myPuzzle.is_open()){
        string line;
        while ( getline(myPuzzle, line) )
            cout << line;
    } else {
        cout << "Failed to open puzzle" << endl;
    }
    return 0;
}