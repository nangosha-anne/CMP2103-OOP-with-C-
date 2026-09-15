# `type_conversion.cpp`

## OOP Concepts Used

No custom types or classes are defined. The exercise demonstrates C++ type abstraction and explicit conversion between built-in types.

## Algorithm

1. Read or initialize the source value.
2. Convert it to the required destination type using the intended conversion rule.
3. Print the converted value and, where required, compare the results.

## Possible Error Points

- Converting floating-point values to integers truncates the fractional part.
- Narrowing conversions can overflow or lose precision.
- Use explicit casts when the conversion is intentional and understood.