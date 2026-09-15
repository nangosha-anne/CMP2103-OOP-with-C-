# `pi_estimation.cpp`

## OOP Concepts Used

The approximation is implemented procedurally and has no custom class. A numerical estimator object could encapsulate the iteration count and approximation strategy in a larger design.

## Algorithm

1. Set the number of simulation or series iterations.
2. Generate the required terms or random points.
3. Count the contribution from each iteration.
4. Convert the count or sum into an estimate of pi and display it.

## Possible Error Points

- More iterations generally improve accuracy but increase runtime.
- Random estimates depend on the seed and may vary between runs.
- Avoid integer division when calculating the final ratio.