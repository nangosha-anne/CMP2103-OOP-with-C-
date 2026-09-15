# `test_check_soduku.cpp`

## OOP Concepts Used

This is a test driver for Sudoku validation and does not add a new domain class. It exercises the public checking function, which is analogous to testing a method of a `SudokuBoard` object.

## Algorithm

1. Build valid and invalid Sudoku grids.
2. Pass each grid to the validation function.
3. Compare the returned result with the expected validity.
4. Report whether the checks pass.

## Possible Error Points

- Test cases should include duplicate rows, columns, and boxes, not only one invalid pattern.
- Expected results must be independently verified.
- Keep the test grid dimensions and values within the validator's contract.