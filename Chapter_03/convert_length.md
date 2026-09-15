# `convert_length.cpp`

## OOP Concepts Used

This solution uses procedural arithmetic and no custom classes. A length value with unit-aware conversion methods would provide encapsulation in a fuller OOP solution.

## Algorithm

1. Read the length and its source unit.
2. Apply the conversion factor or formula for the target unit.
3. Output the converted value.

## Possible Error Points

- Applying the inverse factor produces the wrong answer.
- Preserve fractional values with a floating-point type.
- Validate the selected unit and avoid unsupported conversions.