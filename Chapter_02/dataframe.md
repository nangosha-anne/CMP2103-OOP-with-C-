# `dataframe.cpp`

## OOP Concepts Used

The program uses built-in arrays or values procedurally and does not define a dataframe class. The data structure itself is an abstraction supplied by the chosen container, while formatting and calculations remain in `main`.

## Algorithm

1. Store the supplied rows and columns in the declared data structure.
2. Traverse the data using the required row and column order.
3. Perform the requested calculation or display each value in tabular form.

## Possible Error Points

- Row and column bounds must stay within the declared dimensions.
- Mixing row-major and column-major assumptions can transpose the result.
- Ensure every cell is initialized before it is printed or calculated.