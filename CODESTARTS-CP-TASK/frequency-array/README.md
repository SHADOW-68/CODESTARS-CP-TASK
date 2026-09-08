# Frequency Array / Hashing

This folder contains problems based on frequency arrays, character counting,
presence checking, and counting distinct elements.

---

# 1. A - Pangram

## Problem Statement

Given a string of length `n`, determine whether it is a pangram.

A pangram is a string that contains every letter of the English alphabet
at least once, regardless of whether the letters are uppercase or lowercase.

Print `YES` if the string is a pangram, otherwise print `NO`.

## Approach / Intuition

There are exactly 26 English alphabet letters.

We create a frequency array of size 26:

`arr[0]` represents `a`, `arr[1]` represents `b`, ..., `arr[25]` represents `z`.

For every character in the string:
- Convert it to lowercase.
- Increase its corresponding frequency using `arr[ch - 'a']++`.

After processing the string, check all 26 positions.

If any position is `0`, that letter is missing, so the answer is `NO`.

Otherwise, the string contains every alphabet letter and the answer is `YES`.

## Algorithm

1. Read `n` and the string `s`.
2. Create an array `arr[26]` initialized to `0`.
3. Traverse every character of the string.
4. Convert the character to lowercase.
5. Increase `arr[ch - 'a']`.
6. Traverse the frequency array.
7. If any value is `0`, print `NO`.
8. Otherwise, print `YES`.

## Time Complexity

`O(n)`

We traverse the string once and then check 26 letters.

## Space Complexity

`O(1)`

The frequency array always has a fixed size of 26.

## Implementation

See:

`A_Pangram.cpp`

## Edge Cases

- The same letter can appear multiple times.
- Uppercase and lowercase versions of the same letter should be treated as
  the same letter.
- If even one alphabet letter is missing, the answer is `NO`.
- A string containing all 26 letters at least once is a pangram.

---

# 2. A - Anton and Letters

## Problem Statement

Anton has a set of lowercase English letters written inside curly brackets.

The letters may appear multiple times.

Determine how many different letters are present in the set.

For example:

`{a, b, c, a}`

contains 3 distinct letters: `a`, `b`, and `c`.

## Approach / Intuition

We only need to know whether each letter has appeared at least once.

Since there are only 26 lowercase English letters, we can use a frequency
array of size 26.

For every lowercase letter:

`arr[ch - 'a']++`

After processing the input, count how many positions in the array are
non-zero.

That count is the number of distinct letters.

## Algorithm

1. Create `arr[26]` initialized to `0`.
2. Read the complete input string.
3. Traverse the string character by character.
4. If the character is a lowercase English letter, increase its frequency:
   `arr[ch - 'a']++`.
5. Traverse all 26 positions.
6. If `arr[i] != 0`, increase the distinct-letter count.
7. Print the count.

## Time Complexity

`O(n)`

We traverse the input string once and then check 26 letters.

## Space Complexity

`O(1)`

The frequency array has a fixed size of 26.

## Implementation

See:

`A_Anton_and_Letters.cpp`

## Edge Cases

- The same letter may appear multiple times.
- Repeated letters should only be counted once.
- The input contains characters such as `{`, `}`, `,`, and spaces, which
  should not be counted as letters.
- If there are no letters, the answer is `0`.

---

# Key Concepts Used

- Frequency Array
- Character Frequency
- Presence Checking
- Counting Distinct Elements
- Mapping characters to array indices using `ch - 'a'`

## Frequency Array Mapping

```text
a → 0
b → 1
c → 2
...
z → 25
