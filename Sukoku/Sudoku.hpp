//
//  Sudoku.hpp
//  Sukoku
//
//  Created by Ying Su on 4/18/17.
//  Copyright © 2017 Ying Su. All rights reserved.
//

#ifndef Sudoku_hpp
#define Sudoku_hpp

#include <cstring>
#include <stdio.h>

class Sudoku {
public:
    Sudoku() {
        memset(keyboard, 0, sizeof(keyboard));
    }
    
    Sudoku(char _keyboard[9][9]) {
        memcpy(keyboard, _keyboard, 81);
    }
    
    bool IsValid() {
        
    }
private:
    
    char keyboard[9][9];
};

#endif /* Sudoku_hpp */
