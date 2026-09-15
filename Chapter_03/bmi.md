# `bmi.cpp`

## OOP Concepts Used

The program is procedural and does not define a person or BMI class. Its measurements and classification logic could be encapsulated in a `Person` or `HealthRecord` class in a larger application.

## Algorithm

1. Read weight and height.
2. Calculate BMI using weight divided by height squared, applying any required unit conversion.
3. Compare the BMI with the classification ranges.
4. Display the BMI and category.

## Possible Error Points

- Height must be positive and use the units expected by the formula.
- Integer division loses precision, so use floating-point values.
- Check category boundaries carefully, especially values exactly on a limit.