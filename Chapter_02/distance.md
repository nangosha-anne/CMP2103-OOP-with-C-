# `distance.cpp`

## OOP Concepts Used

No custom class is present. The coordinate values and distance formula are handled procedurally; a `Point` class would be a natural encapsulation for an extended solution.

## Algorithm

1. Read the coordinates of the two points.
2. Subtract corresponding coordinates.
3. Square the differences, add them, and take the square root.
4. Output the Euclidean distance.

## Possible Error Points

- Coordinate values should use a floating-point type when fractions are allowed.
- Include the correct math header for the square-root function.
- Check for overflow before squaring very large values.