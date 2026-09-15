# `lies_in_region.cpp`

## OOP Concepts Used

The program uses procedural conditionals and does not create a region or point class. Encapsulation of coordinates and a `contains` operation would be an OOP extension.

## Algorithm

1. Read the point and the region boundaries.
2. Test whether each coordinate satisfies the lower and upper bounds.
3. Report whether the point lies inside the region.

## Possible Error Points

- Decide whether boundary points count as inside; inclusive comparisons are usually required.
- Reversed minimum and maximum bounds invalidate the test.
- Check both coordinates rather than only one.