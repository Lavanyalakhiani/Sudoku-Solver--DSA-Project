# Sudoku-Solver--DSA-Project
This project implements a Sudoku solver using the principles of Data Structures and Algorithms (DSA). It employs backtracking and recursion to find the solution to any given Sudoku puzzle. It's a practical demonstration of how these algorithms can be applied to solve complex problems efficiently.

This project is a Sudoku solver that uses backtracking and recursion to solve Sudoku puzzles. Sudoku is a popular puzzle game that involves filling a 9x9 grid with digits so that each column, each row, and each of the nine 3x3 subgrids contain all of the digits from 1 to 9.

The goal of this project is to demonstrate the application of Data Structures and Algorithms (DSA) in solving a real-world problem. By using backtracking and recursion, we can efficiently solve even the most complex Sudoku puzzles.

## Features:
-> Solves any valid Sudoku puzzle.
-> Uses backtracking and recursion for an efficient solution.
-> Provides a clear and concise implementation of the algorithm.
-> Easy to understand and extend.

Algorithm:
The Sudoku solver uses a backtracking algorithm, which is a depth-first search algorithm for finding all solutions to a problem by trying out all possible configurations and backtracking as soon as it determines that a configuration is invalid. Here's a high-level overview of the algorithm:

1. Find an empty cell: Traverse the grid to find an empty cell.
2. Try possible values: For each empty cell, try all possible values (1 to 9).
3. Check validity: For each value, check if it is valid under Sudoku rules (no duplicates in the current row, column, or 3x3 subgrid).
4. Recursion: If a value is valid, place it in the cell and recursively attempt to solve the rest of the grid.
5. Backtrack: If placing the current value leads to no solution, remove it (backtrack) and try the next value.
6. Solution found: If the grid is completely filled without conflicts, a solution is found.

Usage:
To use the Sudoku solver, you need to provide a Sudoku puzzle as input. The puzzle should be in the form of a 9x9 grid, with zeros representing empty cells. The solver will fill in the grid with the solution.

![image](https://github.com/Lavanyalakhiani/Sudoku-Solver--DSA-Project/assets/124029579/1783ed0e-a028-4fcc-aa78-66c0d7441f04)

OUTPUT::::

![image](https://github.com/Lavanyalakhiani/Sudoku-Solver--DSA-Project/assets/124029579/95d126fb-0e54-4896-9e34-9154cddd4c89)

