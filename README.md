# Industrial Programming Lab

## About

This repository documents my structured learning journey through the **Logic Building with Industrial Project Development** programming batch.

The objective of this repository is to demonstrate a continuous, disciplined progression through the core pillars of computer science and industrial software development:

$$\text{Logic Building} \longrightarrow \text{Systems \& Memory} \longrightarrow \text{Data Structures} \longrightarrow \text{Object-Oriented Design} \longrightarrow \text{Industrial LLD}$$

Every program in this repository is coded manually by me. The repository serves as an authentic, high-quality technical record of concept mastery, systems thinking, and low-level design implementation.

---

## Learning Philosophy

The batch curriculum follows an industrial mastery pipeline:

```
Concept ──► Implementation ──► Practice ──► Design ──► Industrial Application
```

1. **Concept**: Understand the fundamental theory, mechanical symantics, memory model, or algorithmic principle.
2. **Implementation**: Manually translate theory into code from scratch without high-level shortcuts or external assistance.
3. **Practice**: Solve variations, edge cases, and algorithmic constraints to build intuition and speed.
4. **Design**: Structure code according to clean code principles, modularity, encapsulation, and SOLID guidelines.
5. **Industrial Application**: Connect implementations toward real-world software components (virtual file systems, concurrency models, socket servers, low-level system designs).

---

## Technology Coverage

The batch covers core systems, algorithmic, and enterprise languages:

- **C**: Pointers, pointer arithmetic, dynamic memory allocation (`malloc`, `calloc`, `realloc`, `free`), memory layouts, structures, file and system-level programming.
- **C++**: Generic programming, templates, standard template concepts, object design.
- **Java**: Core Java fundamentals, runtime architecture, OOP concepts, exception hierarchy, Java Collections framework, multithreading and synchronization, socket networking, system modeling, design patterns, and Low-Level Design (LLD).

### Key Architectural & Domain Areas
- Logic Building & Mathematical Problem Solving
- Memory Management & Pointer Engineering
- Data Structure Implementation (from scratch)
- Searching and Sorting Algorithms
- Core Java Architecture & Standard Library
- Java Collections Framework & Generics
- File I/O, Streams & System Programming
- Network Programming (TCP/UDP, Socket Communication)
- Multithreading, Concurrency & Synchronization
- Object-Oriented Design & SOLID Principles
- Design Patterns (GoF) & Low-Level Design (LLD)

---

## Repository Structure

The repository is structured primarily by **concepts**, not by programming languages. Language subfolders (`c/`, `cpp/`, `java/`) are created inside concept folders as programs are completed.

```
industrial-programming-lab/
├── 01-logic-building/
├── 02-arrays-and-matrices/
├── 03-strings/
├── 04-bit-manipulation/
├── 05-memory-management/
├── 06-structures-and-generic-programming/
├── 07-recursion/
├── 08-data-structure-implementation/
├── 09-searching-and-sorting/
├── 10-core-java/
├── 11-java-collections/
├── 12-file-and-system-programming/
├── 13-network-programming/
├── 14-multithreading/
├── 15-object-oriented-design/
├── 16-design-patterns-and-lld/
├── daily-inbox/
├── .gitignore
├── PROGRESS.md
├── README.md
└── ROADMAP.md
```

### Module Directory Breakdown

| Directory | Primary Purpose |
|---|---|
| `01-logic-building/` | Fundamental algorithmic thinking, decision making, loops, nested patterns, and mathematical logic. |
| `02-arrays-and-matrices/` | 1D/2D/multi-dimensional array manipulations, traversals, insertions, deletions, and matrix transformations. |
| `03-strings/` | Character arrays, C-strings, Java Strings, tokenization, transformations, and string algorithms. |
| `04-bit-manipulation/` | Bitwise operations (AND, OR, XOR, NOT, shifts), masks, bit extraction, setting/clearing/toggling, and binary arithmetic. |
| `05-memory-management/` | Pointers, pointer-to-pointer, pointer arithmetic, heap allocation (`malloc`/`free`), memory leaks, and memory debugging. |
| `06-structures-and-generic-programming/` | C structs, unions, nested structures, typedef, structure pointers, and C++ templates/generic programming. |
| `07-recursion/` | Core recursive paradigms, base conditions, call-stack visualization, recursive math, and backtracking foundations. |
| `08-data-structure-implementation/` | Implementation of core data structures from scratch (Singly/Doubly/Circular Linked Lists, Stacks, Queues, Deques, Trees, BSTs). |
| `09-searching-and-sorting/` | Standard search and sort algorithms (Linear Search, Binary Search, Bubble, Selection, Insertion, Merge, Quick, Counting Sort). |
| `10-core-java/` | Java runtime fundamentals, classes, objects, constructors, access modifiers, packages, exception handling, interfaces, and I/O. |
| `11-java-collections/` | Deep dive into Java Collections Framework (List, Set, Map, Queue, Deque, PriorityQueue, Iterators, Comparable/Comparator). |
| `12-file-and-system-programming/` | File descriptors, byte/character streams, binary file operations, serialization, command-line utilities, and OS interaction. |
| `13-network-programming/` | Sockets, client-server architectures, TCP/UDP communication, protocols, and network I/O. |
| `14-multithreading/` | Threads, `Runnable`, synchronization, locks, inter-thread communication, thread pools, and race condition management. |
| `15-object-oriented-design/` | Object modeling, class responsibilities, inheritance, polymorphism, composition, abstraction, and SOLID principles. |
| `16-design-patterns-and-lld/` | GoF design patterns (Creational, Structural, Behavioral) and Low-Level Design (LLD) system modeling. |
| `daily-inbox/` | Temporary staging area for newly coded batch programs prior to automated classification and organization. |

---

## Daily Workflow

To maintain speed during lectures and coding sessions while enforcing clean repository hygiene:

```
[Write Code] ──► [Save in daily-inbox/] ──► [Ask Antigravity to Organize]
                                                     │
                                                     ▼
[Git Commit & History] ◄── [Update PROGRESS.md] ◄── [Classify, Rename & Move]
```

1. **Code Manually**: Write each program personally during daily lectures or practice.
2. **Save to Staging**: Save files directly into `daily-inbox/` (e.g., `Program1.c`, `Program2.java`).
3. **Trigger Organization**: Instruct Antigravity:
   > *"Organize today's programs."*
4. **Inspection & Primary Purpose Classification**: Antigravity inspects program content, determines primary learning objective, assigns standardized lowercase names (e.g., `01-pointer-arithmetic.c`), and moves it to the appropriate concept/language directory.
5. **Progress & Commit**: Progress counters in `PROGRESS.md` update automatically, and standardized Conventional Commits (`feat(...)`, `docs(...)`) are created.

---

## Repository Boundaries

To avoid duplication, each of my programming repositories has a clearly demarcated scope:

| Repository | Primary Scope & Focus |
|---|---|
| **`Conceptual_Programs`** | General C/C++/Java practice, academic/foundational syntax exercises, older conceptual programs. |
| **`DSA`** | Interview-oriented competitive problem solving, LeetCode, GeeksForGeeks, InterviewBit, and algorithmic interview prep. |
| **`industrial-programming-lab`** | Structured batch curriculum covering industrial logic, from-scratch data structure implementation, low-level systems, concurrency, Java architecture, OOP design, and LLD. |

---

## Industrial Projects

Complete, standalone industrial software projects developed during this curriculum are maintained in their own dedicated repositories rather than nested inside this learning lab.

Planned and potential industrial projects:
- **Custom Virtual File System (CVFS)**: Emulation of an operating system file system using low-level structures and system calls.
- **Parking Lot Automation System**: End-to-end Low-Level Design (LLD) demonstrating OOP, design patterns, and concurrency.
- **Study Tracker**: Enterprise Java and database-driven tracking system.
- **Agrihort Connect**: Domain-specific platform integrating modern application architecture.

*(Links to project repositories will be added as they are created and deployed.)*
