# Progress Log - 100 Days of Full Stack + DSA

Format: `Day X | Date | What I did | Key takeaway | Link`

---

### Day 00 - 17-08-2026

**Focus:** Announcement day

**What I did:** Decided the plan - what I'll cover (HTML, CSS, JavaScript, Core Java, DSA in C++) and how I'll document it (daily posts, weekly recap, this repo).

**Takeaway:** Having a clear scope before Day 1 makes it easier to stay consistent for 100 days.

**Link/commit:**

---

### Day 01 - 18-08-2026

**Focus:** Environment setup

**What I did:** Installed WSL2 (Ubuntu), configured my IDE, and got g++ set up.

**Hit a couple of issues:**

- WSL2 wouldn't turn on at first — had to enable virtualization in BIOS
- Also had to turn on the "Virtual Machine Platform" and "Windows Subsystem for Linux" Windows features

  **Reference:** [Microsoft's official WSL install guide](https://learn.microsoft.com/en-us/windows/wsl/install)

  **Video Refrence:**[How to Install WSL2 on Windows 11 (Windows Subsystem for Linux)](https://youtu.be/eId6K8d0v6o?si=FHNJYqK7SEwuFgto)

  **Takeaway:** Fixed both and got everything running.

  **Link/commit:**

---

### Day 02 - 19-08-2026

**Focus:** DSA (C++) - [100xDevs](https://harkirat.classx.co.in/) course by [Dhruv Pasricha](https://x.com/_DhruvPasricha)

**What I did:** Covered syllabus, plan, and common mistakes to avoid. Learned how computers think, what programming is, and why we need it. Started C++ - importance of IDEs and syntax. Wrote and dissected my first Hello World program.

**Takeaway:** Understanding _why_ syntax rules exist (not just memorizing them) made the Hello World breakdown click.

**Link/commit:** [Day 02 - Hello World](dsa/day02-hello-world.cpp)

---

_Break: 3 days - account issue, no coding logged. Will resume it from 23-08-2026_

---

### Day 03 - 23-08-2026

**Focus:** DSA (C++) - pattern printing

**What I did:** Wrote a program to print a star (\*) triangle pattern.

**Takeaway:** Learned `<bits/stdc++.h>` is not a standard C++ library — it's a GCC-specific shortcut used in competitive programming, not recommended for production. `<iostream>` is the actual standard library and what should be used instead.

**Link/commit:** [Day 03 - Star Triangle](dsa/day03-star-triangle.cpp)

---

### Day 04 - 25-08-2026

**Focus:** DSA (C++) - arithmetic operators

**What I did:** Wrote a program demonstrating arithmetic operators (+, -, \*, /, %) on integers.

**Takeaway:** Text in double quotes ≠ math. `/` gives quotient, `%` gives remainder. Integer division always returns an integer, need to cast one operand to float for a decimal result.

**Link/commit:** [Day 04 - Arithmetic Operators](dsa/day04-arithmetic-operators.cpp)

---

_Break: 4 days - wasn't well from last 4 days, will resumed from tomorrow [30-08-2026]_

---

### Day 05 - 30-08-2026

**Focus:** DSA (C++) - variables & primitive data types

**What I did:** Wrote a program to demonstrate variables and primitive data types

**Takeaway:** Variables must be declared before use. `int` truncates decimals rather than rounding (`int age = 34.75` → `34`). Characters need single quotes (`'A'`), double quotes create a `const char*`, not a `char`, and throw a conversion error

**Link/commit:** [Day 05 - Variables & Data Types](dsa/day05-variables-datatypes.cpp)

---

### Day 06 - 31-08-2026

**Focus:** DSA (C++) - data types & input handling

**What I did:** Learnt why data types are needed, rules for creating variables, and how to take input.

**Takeaway:** Data types matter for memory management, error prevention, performance, data integrity, clarity, and correctness. `cin` reads until whitespace (good for single words/numbers); `getline()` reads full lines. Mixing the two leaves leftover newline in the buffer — `cin.ignore()` clears it.

**Link/commit:** [Day 06 - Data Types & Input](dsa/day06/)

---

### Day 07 - 01-09-2026

**Focus:** DSA (C++) - relational & logical operators

**What I did:** Wrote programs demonstrating relational and logical operators.

**Takeaway:** Relational operators compare values, returning true(1)/false(0); used in decision-making. `=` assigns, `==` checks equality. Logical operators (`&&` AND, `||` OR, `!` NOT) combine/reverse conditions, also returning boolean results. C++ also supports `and`/`or`/`not` as word-form alternatives.

**Link/commit:** [Day 07 - Relational & Logical Operators](dsa/day07/)

---

### Day 08 - 02-08-2026

**Focus:** DSA (C++) - Codeforces assignments (100xSchool Bootcamp)

**What I did:** Solved 8 problems (A–H1): Hello World, print first 5 alphabets, triangle pattern, print "Z" pattern, table of 5, rectangle area/perimeter, table of N, and a basic calculator (add/sub/mul/div/mod). Solved without using loops.

**Takeaway:** Doing pattern/table problems without loops meant writing out each line/step manually - good forcing function before loops are introduced.

**Link/commit:** [Day 08 - Solved 8 (A-H1) problems from 1st Assignments ](dsa/day08/day08.md)

---

### Day 09 - 03-08-2026

**Focus:** DSA (C++) - conditional statements

**What I did:** Learnt if-else, else if, nested if, and switch. Wrote programs to demonstrate each.

**Takeaway:** `if-else` is for simple true/false decisions; `switch` is better when checking multiple specific values.

**Link/commit:** [Day 09 — Conditional Statements](dsa/day09/)

---

### Day 10 - 07-09-2026

**Focus:** DSA (C++) - Codeforces assignments (100xSchool Bootcamp)

**What I did:** Solved 5 problems (H2–M): Calculator II, sum of last digits, even/odd, factor check, multiple check, pass/fail.

**Takeaway:** For a min/max-of-two problem, realized `A < B` and `B > A` are logically equivalent, so you don't need separate checks for both directions. Used if-else (not nested else-if) as the cleanest approach, since it directly captures the two possible outcomes without redundant conditions.

**Link/commit:** [Day 10 - Solved 5 more (H2-M) problems from 1st Assignments](dsa/day10/day10.md)

---

<!--
Copy the block below for each new day:

### Day X — YYYY-MM-DD
**Focus:**
**What I did:**
**Takeaway:**
**Link/commit:**
-->
