### `Note: Click problem title to view solution`

# [A. Print 1 to N](./A-Print-1-to-N.cpp)

You are given a positive integer `n`.

Print the integers from `1` to `n` (inclusive), each on a separate line.

## Input

The input contains a single integer `n` (`1 ≤ n ≤ 2⋅10^5`).

## Output

Print `n` lines. On the `i`-th line, output the integer `i` (`1 ≤ i ≤ n`).

## Examples

### Input

```text
5
```

### Output

```text
1
2
3
4
5
```

### Input

```text
2
```

### Output

```text
1
2
```

# [B. Print N to 1](./B-Print-N-to-1.cpp)

You are given an integer `N`. Print all integers from `N` to `1` in decreasing order.

## Input

Print `N` integers from `N` to `1`, separated by spaces.

## Output

Print `N` integers from `N` to `1`, separated by spaces.

## Examples

### Input

```text
5
```

### Output

```text
5 4 3 2 1
```

### Input

```text
4
```

### Output

```text
4 3 2 1
```

# [C. Print All Even Numbers from 1 to N](./C-Print-All-Even-Numbers-from-1-to-N.cpp)

You are given an integer `N`. Print all even numbers between `1` and `N` (inclusive) in increasing order.

## Input

The first line contains an integer `N` (`1 ≤ N ≤ 10^5`).

## Output

Print all even numbers between `1` and `N`, separated by spaces.

If there is no even number in the given range, print nothing.

## Example

### Input

```text
10
```

### Output

```text
2 4 6 8 10
```

## Note

An integer is even if it is divisible by `2`.

# [D. Print from L to R](./D-Print-from-L-to-R.cpp)

You are given two integers `L` and `R`. Print all integers from `L` to `R` in increasing order.

## Input

The first line contains two integers `L` and `R` (`−10^5 ≤ L ≤ R ≤ 10^5`).

## Output

Print all integers from `L` to `R`, separated by spaces.

## Example

### Input

```text
3 7
```

### Output

```text
3 4 5 6 7
```

# [E. Print All Uppercase Alphabets](./E-Print-All-Uppercase-Alphabets.cpp)

Print all uppercase English alphabets from `A` to `Z` using loops.

## Input

There is no input for this problem.

## Output

Print all uppercase English alphabets from `A` to `Z`, separated by spaces.

## Example

### Input

```text
There is no input.
```

### Output

```text
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```

# [F. Print Table of N](./F-Print-able-of-N.cpp)

You are given an integer `N`. Your task is to print the multiplication table of `N` from `1` to `10`.

## Input

A single integer `N` (`1 ≤ N ≤ 100`).

## Output

Print the table of `N` in the format shown in the example below.

## Example

### Input

```text
6
```

### Output

```text
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
6 * 4 = 24
6 * 5 = 30
6 * 6 = 36
6 * 7 = 42
6 * 8 = 48
6 * 9 = 54
6 * 10 = 60
```

# G. Count Numbers

You are given an integer `N` followed by `N` integers. Count how many of the given numbers are:

- Positive
- Negative
- Even
- Odd

## Input

The first line contains an integer `N` (`1 ≤ N ≤ 10^5`).

The second line contains `N` integers (`−10^9 ≤ Ai ≤ 10^9`).

## Output

Print four integers in the following order:

- Number of positive integers
- Number of negative integers
- Number of even integers
- Number of odd integers

## Example

### Input

```text
5
-2 0 3 7 -5
```

### Output

```text
2
2
2
3
```

## Note

- Zero is neither positive nor negative.
- Zero is considered an even number.

# H. Sum of First N Natural Numbers

You are given an integer `N`. Find the sum:

`1 + 2 + 3 + ⋯ + N`

## Input

The first line contains an integer `N` (`1 ≤ N ≤ 10^6`).

## Output

Print a single integer — the sum of the first `N` natural numbers.

## Examples

### Input

```text
5
```

### Output

```text
15
```

### Input

```text
10
```

### Output

```text
55
```

## Note

The first 5 natural numbers are 1, 2, 3, 4, and 5, and their sum is 15.

# I. Factorial

You are given an integer `N`.

Find the factorial of `N` by writing a function that takes `N` as a parameter and returns `N!`, where:

`N! = 1 × 2 × 3 × ⋯ × N`

## Input

The first line contains an integer `N` (`0 ≤ N ≤ 20`).

## Output

Print the value of `N!`.

## Examples

### Input

```text
5
```

### Output

```text
120
```

### Input

```text
7
```

### Output

```text
5040
```

## Note

- By definition, `0! = 1`.
- The constraint `N ≤ 20` ensures the answer fits in a 64-bit integer.

# J. x^n

You are given two integers `x` and `n`.

Compute:

`x^n = x × x × ⋯ × x` (n times)

## Input

The first line contains two integers `x` and `n` (`−10 ≤ x ≤ 10`, `0 ≤ n ≤ 20`).

## Output

Print the value of `x^n`.

## Example

### Input

```text
2 5
```

### Output

```text
32
```

## Note

- `x^0 = 1` for any `x`.
- The constraints ensure the answer fits in a 64-bit integer.

# K. Print Number in Reverse

Given an integer `N`, print the digits of `N` in reverse order.

## Input

A single integer `N` (`0 ≤ N ≤ 10^18`).

## Output

Print the number formed by reversing the digits of `N`.

## Examples

### Input

```text
12349
```

### Output

```text
94321
```

### Input

```text
1950
```

### Output

```text
0591
```

# L. Sum Of Digits

Given an integer `N`, find the sum of its digits.

## Input

A single integer `N` (`0 ≤ N ≤ 10^18`).

## Output

Print the sum of digits of `N`.

## Example

### Input

```text
1234
```

### Output

```text
10
```

# M. Reverse Number and Store in a Variable

You are given a non-negative integer `N`.

Reverse the digits of `N` and store the result in a variable.

## Input

The first line contains a non-negative integer `N` (`0 ≤ N ≤ 10^9`).

## Output

Print the result.

## Examples

### Input

```text
1234
```

### Output

```text
4321
```

### Input

```text
1950
```

### Output

```text
591
```

# N. Palindrome

You are given a non-negative integer `N`. Check whether `N` is a palindrome or not.

A number is called a palindrome if it reads the same forwards and backwards.

## Input

The first line contains a non-negative integer `N` (`0 ≤ N ≤ 10^18`).

## Output

Print `YES` if the number is a palindrome, otherwise print `NO`.

## Examples

### Input

```text
121
```

### Output

```text
YES
```

### Input

```text
1950
```

### Output

```text
NO
```
