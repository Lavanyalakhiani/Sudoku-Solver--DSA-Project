#include <iostream>
#include "sudoku_solver.h"

void inputGrid(int grid[9][9]) {
    std::cout << "Enter the Sudoku puzzle (use 0 for empty cells):" << std::endl;
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            std::cin >> grid[row][col];
        }
    }
}

int main() {
    int grid[9][9];
    inputGrid(grid);

    SudokuSolver solver;
    if (solver.solve(grid)) {
        std::cout << "Solved Sudoku puzzle:" << std::endl;
        solver.printGrid(grid);
    } else {
        std::cout << "No solution exists" << std::endl;
    }

    return 0;
}
