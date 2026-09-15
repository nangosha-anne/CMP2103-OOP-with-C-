# `math_quiz.cpp`

## OOP Concepts Used

The quiz is implemented procedurally without question or score classes. Encapsulating a question, answer, and score in objects would be a natural extension.

## Algorithm

1. Generate or display each arithmetic question.
2. Read the participant's answer.
3. Compare it with the correct answer and update the score.
4. Report the final score.

## Possible Error Points

- Input validation is needed when a non-numeric answer is entered.
- Reset counters only once per quiz, not once per question.
- Random questions require correct seeding and range handling if randomness is used.