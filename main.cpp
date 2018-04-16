#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ifstream myPuzzle;
    myPuzzle.open("sudoku1.txt");

    if(myPuzzle.is_open()){
        read(myPuzzle, sudoku);
        solve(myPuzzle, mySolution);
        print(mySolution);
        return 0;
    } else {
        cout << "Failed to open puzzle" << endl;
        return 1;
    }
}