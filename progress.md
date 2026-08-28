# Progress Log - 100 Days of Full Stack + DSA

Format: `Day X | Date | What I did | Key takeaway | Link`

---

### Day 0 - 17-08-2026

**Focus:** Announcement day

**What I did:** Decided the plan - what I'll cover (HTML, CSS, JavaScript, Core Java, DSA in C++) and how I'll document it (daily posts, weekly recap, this repo).
**Takeaway:** Having a clear scope before Day 1 makes it easier to stay consistent for 100 days.
**Link/commit:**

---

### Day 1 - 18-08-2026

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

### Day 2 - 19-08-2026

**Focus:** DSA (C++) - [100xDevs](https://harkirat.classx.co.in/) course by [Dhruv Pasricha](https://x.com/_DhruvPasricha)

**What I did:** Covered syllabus, plan, and common mistakes to avoid. Learned how computers think, what programming is, and why we need it. Started C++ - importance of IDEs and syntax. Wrote and dissected my first Hello World program.

**Takeaway:** Understanding _why_ syntax rules exist (not just memorizing them) made the Hello World breakdown click.

**Link/commit:** [Day 2 — Hello World](dsa/day02-hello-world.cpp)

---

_Break: 3 days - account issue, no coding logged. Will resume it from 23-08-2026_

---

### Day 3 - 23-08-2026

**Focus:** DSA (C++) - pattern printing

**What I did:** Wrote a program to print a star (\*) triangle pattern.

**Takeaway:** Learned `<bits/stdc++.h>` is not a standard C++ library — it's a GCC-specific shortcut used in competitive programming, not recommended for production. `<iostream>` is the actual standard library and what should be used instead.

**Link/commit:** [Day 3 - Star Triangle](dsa/day03-star-triangle.cpp)

---

### Day 4 - 25-08-2026

**Focus:** DSA (C++) - arithmetic operators

**What I did:** Wrote a program demonstrating arithmetic operators (+, -, \*, /, %) on integers.

**Takeaway:** Text in double quotes ≠ math. `/` gives quotient, `%` gives remainder. Integer division always returns an integer, need to cast one operand to float for a decimal result.

**Link/commit:** [Day 4 — Arithmetic Operators](dsa/day04-arithmetic-operators.cpp)

---

_Break: 3 days - wasn't well from last 3 days, will resumed from tomorrow [29-08-2026]_

---

<!--
Copy the block below for each new day:

### Day X — YYYY-MM-DD
**Focus:**
**What I did:**
**Takeaway:**
**Link/commit:**
-->
