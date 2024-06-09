#ifndef SUDOKU_SOLVER_H
#define SUDOKU_SOLVER_H

class SudokuSolver {
public:
    bool solve(int grid[9][9]);
    void printGrid(int grid[9][9]);
private:
    bool isValid(int grid[9][9], int row, int col, int num);
    bool findEmptyCell(int grid[9][9], int &row, int &col);
};

#endif // SUDOKU_SOLVER_H
