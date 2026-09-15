# `guess_squareroot.cpp`

## OOP Concepts Used

The approximation is procedural and does not define a root-solving class. A numerical solver object could encapsulate the tolerance, iteration limit, and update strategy.

## Algorithm

1. Read the non-negative number whose root is required.
2. Start with an initial guess.
3. Improve the guess repeatedly using the chosen approximation formula.
4. Stop when the difference between successive guesses is within the tolerance, then print the estimate.

## Possible Error Points

- Negative inputs do not have a real square root in this exercise.
- A poor stopping condition can cause an infinite loop.
- Very small tolerances may require many iterations or expose floating-point limits.