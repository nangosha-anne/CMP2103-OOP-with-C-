# `multiple_dimension_vector.cpp`

## OOP Concepts Used

The solution uses the standard `vector` container rather than defining a custom multidimensional collection. The container provides abstraction and automatic storage management.

## Algorithm

1. Create the required nested vector dimensions.
2. Populate or access values using row and column indices.
3. Traverse the dimensions with nested loops and print or calculate the requested result.

## Possible Error Points

- Every index must be less than the corresponding vector size.
- Nested vectors may have unequal row lengths, so do not assume a rectangular shape without enforcing it.
- Initialize dimensions before assigning elements.