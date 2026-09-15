# `vector_error.cpp`

## OOP Concepts Used

This exercise uses the standard `vector` class and focuses on diagnosing incorrect container access. It demonstrates library-object encapsulation rather than defining a new class.

## Algorithm

1. Create and populate the vector according to the example.
2. Identify the invalid operation or index.
3. Correct the access or iteration logic.
4. Run the corrected operation and display the result.

## Possible Error Points

- Out-of-range indexing is undefined with `operator[]`; use checked access when appropriate.
- An empty vector cannot be dereferenced.
- Distinguish vector size from the last valid index, which is `size() - 1`.