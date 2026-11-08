# DSA Lab Tasks (C++)

This repository contains the C++ programming tasks for Data Structures and Algorithms Labs 1–11.

## Repository structure
Each lab has a separate folder. Each programming task has its own clearly named `.cpp` file.

## Labs included
| Lab | Topic | C++ files |
|---|---|---:|
| 1 | Arrays, pointers, structures | 6 |
| 2 | Pointers, double pointers, nodes | 3 |
| 3 | Dynamic memory allocation | 3 |
| 4 | Array insertion, deletion, searching | 8 |
| 5 | Singly linked-list insertion | 5 |
| 6 | Singly linked-list deletion | 3 |
| 7 | Doubly linked lists | 2 |
| 8 | Sorting and binary search | 1 |
| 9 | Array stack and postfix-related stack task | 1 |
| 10 | Stack applications | 3 |
| 11 | Queue applications | 4 |

**Total: 39 C++ source files.**

## Compile and run in VS Code
Open the repository folder in VS Code. Open the terminal in the folder containing the `.cpp` file and run:

```bash
g++ "Task-01-Array-Average.cpp" -std=c++17 -Wall -Wextra -o program
./program
```

On Windows PowerShell, run the compiled program with:

```powershell
.\program.exe
```

You need a C++ compiler such as MinGW-w64 (g++) installed and configured in your PATH.

## Notes
- Each `.cpp` file is a standalone program with its own `main()` function. Compile and run one task at a time.
- Lab 9 written infix-to-postfix conversions and Lab 10/11 paper dry-run or trace-table work are intentionally not included as source files.
- Lab 10 follows the supplied scenario numbering: Scenarios 1, 2, and 4 (decimal-to-binary converter).
- Lab 11 Exercise 3 implements the circular queue operations in the order of the supplied printer-job sequence. The handwritten trace table is not included.
- Lab 4 uses zero-based indexing: index 2 means the third element.
