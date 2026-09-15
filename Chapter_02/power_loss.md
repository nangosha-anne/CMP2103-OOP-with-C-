# `power_loss.cpp`

## OOP Concepts Used

No custom class or object is used. The program applies a physical formula procedurally; a circuit or power model class could encapsulate the related values in a larger design.

## Algorithm

1. Read the electrical quantities required by the formula.
2. Substitute them into the power-loss equation.
3. Display the calculated loss with the required unit.

## Possible Error Points

- Use compatible units for voltage, current, and resistance.
- A zero or negative physical quantity may be invalid for the intended model.
- Avoid integer division when a fractional result is expected.