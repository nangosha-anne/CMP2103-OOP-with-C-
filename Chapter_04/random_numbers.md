# `random_numbers.cpp`

## OOP Concepts Used

The program uses procedural random-number generation and no custom class. A random-number generator object could encapsulate the engine and distribution for reproducible tests.

## Algorithm

1. Initialize the random generator as required.
2. Generate values within the requested range.
3. Print or process each generated value.

## Possible Error Points

- An incorrect range formula may exclude an endpoint or produce an out-of-range value.
- Seeding with the current time makes runs different; deterministic tests need a fixed seed.
- Deprecated or low-quality random functions may not provide the expected distribution.