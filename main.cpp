#include <array> 
#include <fstream>
#include <iostream>
#include <string>

#include "print.h"
#include "read.h"
#include "solve.h"
#include "sudoku.h"

using namespace std;

int main(){
    ifstream myPuzzle;
    puzzleFile.open("sudoku1.txt");
    array<array<minibox, 9>, 9> mySolution;

    if(!puzzleFile.is_open()){
        cout << "Failed to open puzzle" << endl;
        return 1;
    }

    read(puzzleFile, mySolution);
    solve(puzzleFile, mySolution);
    print(mySolution);
    return 0;
    
}