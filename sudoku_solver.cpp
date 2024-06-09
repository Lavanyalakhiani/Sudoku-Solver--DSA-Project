#include "sudoku_solver.h"
#include <iostream>

bool SudokuSolver::isValid(int grid[9][9], int row, int col, int num) {
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num || grid[x][col] == num || 
            grid[row - row % 3 + x / 3][col - col % 3 + x % 3] == num) {
            return false;
        }
    }
    return true;
}

bool SudokuSolver::findEmptyCell(int grid[9][9], int &row, int &col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool SudokuSolver::solve(int grid[9][9]) {
    int row, col;
    if (!findEmptyCell(grid, row, col)) {
        return true;
    }
    for (int num = 1; num <= 9; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;
            if (solve(grid)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

void SudokuSolver::printGrid(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }
}
