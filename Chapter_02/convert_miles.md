# `convert_miles.cpp`

## OOP Concepts Used

This is a procedural unit-conversion program with no custom classes. A reusable conversion object could encapsulate units and conversion rules, but the current solution focuses on arithmetic and input/output.

## Algorithm

1. Read the distance in miles.
2. Multiply it by the miles-to-target-unit conversion factor.
3. Display the converted distance.

## Possible Error Points

- Do not use the inverse conversion factor by mistake.
- Floating-point input is needed for fractional distances.
- Negative distances may be invalid for the intended problem.