# `print_calendar.cpp`

## OOP Concepts Used

The calendar is generated procedurally without date or calendar classes. In a larger design, a `Calendar` class could encapsulate month lengths, leap years, and formatting.

## Algorithm

1. Read the month and year.
2. Determine the number of days and the weekday on which the month starts.
3. Print headings and spaces for the starting weekday.
4. Print day numbers, wrapping to a new line at the end of each week.

## Possible Error Points

- February has a different length in leap years.
- Month and weekday indexing conventions must be consistent.
- Invalid months or years need validation before calendar calculations.