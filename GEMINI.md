# Project Guidelines & Operating Rules — Industrial Programming Lab

This file defines the persistent operating instructions for Antigravity when maintaining the `industrial-programming-lab` repository. All workflows, housekeeping actions, and Git commits must adhere to these policies.

---

## 1. Core Operating Principles

- **The User writes all code**: The user is responsible for learning, coding, debugging, and understanding all programs.
- **The Agent organizes and maintains**: The agent is responsible for scanning `daily-inbox/`, classifying programs, renaming files descriptively, moving files into designated conceptual folders, updating `PROGRESS.md`, and preparing Git commits.
- **Absolute Rule — Never Modify User Code**:
  - Never rewrite algorithms, fix bugs, optimize logic, refactor code, change variable names, alter formatting, add comments, or alter program output.
  - If a bug or defect is observed, report it separately as a warning (e.g., `⚠️ Warning: Possible null dereference detected in ProgramX. The file was NOT modified.`).
- **Numbering Stability**:
  - Never automatically renumber existing, committed files to satisfy alphabetical or chronological ordering.
  - For non-Java programs (e.g. C/C++), new files entering a conceptual folder take the next available local sequential index (`01-`, `02-`, etc.). Existing files remain stable to preserve clean Git history.
- **Duplicate Protection**:
  - Detect exact or near duplicates and flag them for user review. Never delete or overwrite files automatically.

---

## 2. Daily Inbox & Organization Workflow

- **Staging Directory**: `daily-inbox/` holds newly written programs (e.g., `Program1.c`, `Program2.java`).
- **Dry-Run Command ("Check today's organization")**:
  - Inspect `daily-inbox/`, analyze language, determine primary conceptual objective, proposed destination, proposed filename, and confidence level.
  - Output an analysis table and summary without moving, renaming, committing, or pushing anything.
- **Organization Command ("Organize today's programs")**:
  - Execute dry-run analysis. If high-confidence:
    - Create language subfolders on demand (`c/`, `cpp/`, `java/`).
    - Rename C/C++ files to `NN-descriptive-name.extension`.
    - Apply the dedicated **Java Filename & Class Preservation Rules** (detailed in Section 3) to all Java programs.
    - Move files from `daily-inbox/` to destination folder.
    - Update `PROGRESS.md`.
  - If ambiguous, ask the user before deciding; do not guess silently.
  - **No Automatic Commits or Pushes**: Organizing files does NOT authorize committing or pushing.

---

## 3. Permanent Java Naming & Strict Code Preservation Rules

### A. Java Filename Convention
- **No Leading Numbers or Suffixes**: Do NOT use leading numbers (e.g., prohibited: `01-DisplayMessage.java`) or numeric suffixes (e.g., prohibited: `DisplayMessage1.java`, `Program2.java`).
- **Meaningful PascalCase**: Use specific, descriptive PascalCase names that capture the program's actual technical purpose.
  - *Examples*: `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
- **No Arbitrary Numbering**: Choose names based on the actual implementation details rather than numeric counters.
- **Top-Level Class Match**: Ensure that any public top-level Java class has exactly the same name as the filename, including capitalization.

### B. Strict Source-Code Preservation
Source code must remain completely unchanged except for explicitly authorized naming modifications.

**Antigravity is authorized ONLY to:**
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename to keep the program consistent.

**Antigravity is NOT authorized to make ANY other code changes during organization:**
- **DO NOT** add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- **DO NOT** add or remove `public` from the main class declaration.
  - *Example*: If the user wrote `class Program1 { ... }` and the new name is `DisplayMessage.java`, rename to `class DisplayMessage { ... }`. NEVER change it to `public class DisplayMessage { ... }`.
  - If the user wrote `public class Program1 { ... }`, rename to `public class DisplayMessage { ... }`.
- **DO NOT** change the `main` method signature, return type, or access modifiers.
- **DO NOT** fix syntax errors, compilation errors, bugs, or warnings.
- **DO NOT** change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- **DO NOT** reformat code, change indentation, adjust line breaks, or modify whitespace.
- **DO NOT** add, remove, or rewrite comments.
- **DO NOT** add imports, remove imports, or alter package declarations.
- **DO NOT** optimize code or apply coding standards automatically.
- **DO NOT** add missing code or invent functionality.

### C. Preserve the User's Learning Process
- These are learning programs written by the user. Some programs may intentionally contain mistakes, incomplete logic, unusual formatting, or omitted access modifiers for practice.
- Never assume imperfect code needs correction. Preserve the original implementation faithfully to maintain an honest record of learning.

### D. Handling Ambiguous Java Cases
- If a safe rename requires code changes beyond the explicitly permitted class/constructor renames, **do not make changes automatically**.
- Leave the program in `daily-inbox/`, explain the compatibility issue, and ask the user before proceeding.
- Never silently make additional code changes to force compilation.

### E. Verification and Reporting for Java
After organizing Java files:
- Verify that filenames match their public top-level class names where applicable.
- Compare original and final source code to confirm that only authorized class/constructor identifier changes occurred.
- Report every file renamed and every class identifier changed.
- Explicitly report any program left in `daily-inbox/` due to ambiguity.
- Compilation checks may be performed when practical, but failures must be reported as warnings, never automatically repaired.

---

## 4. Permanent Git Commit Message Convention

Every commit message must accurately reflect the specific technical nature of the change. Never default every commit to `feat`.

### A. Mandatory Commit Type Taxonomy
Inspect the actual source diffs and select the exact type:

1. **`feat` — New Concepts and Implementations**
   - Use **strictly** when introducing a brand-new algorithm, data structure, or language capability that has not previously been implemented in the relevant module.
   - *Examples*:
     - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
     - `feat(trees): implement binary search tree node insertion`
     - `feat(arrays): implement array rotation using reversal algorithm`
   - *Rule*: Do NOT use `feat` merely because a new file or practice program has been added. It must represent a genuinely new concept or implementation.

2. **`refactor` — Architectural Evolutions**
   - Use when restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept.
   - Includes:
     - Moving business logic from `main()` into a helper function.
     - Migrating procedural functions into OOP helper classes or instantiated objects.
     - Transforming a single-file program into a multi-file header/source architecture.
     - Restructuring an existing implementation while preserving its intended behavior.
   - *Examples*:
     - `refactor(arithmetic): extract inline addition into a helper function`
     - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`
   - *Rule*: Do NOT use `refactor` for a completely new implementation that introduces a genuinely new concept.

3. **`test` — Testing and Verification**
   - Use when adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
   - *Examples*:
     - `test(arithmetic): add assertion cases for boundary values`
     - `test(modular-addition): add automated unit test harness using assert`
   - *Rule*: Do NOT use `test` simply because a program was compiled or manually executed.

4. **`fix` — Error and Flaw Corrections**
   - Use when correcting an actual bug or demonstrating the correction of an intentional logical flaw.
   - *Examples*:
     - `fix(conditionals): correct logical operator flaw in three-number maximum`
     - `fix(arrays): correct off-by-one error in array traversal`
   - *Rule*: Programs may intentionally contain mistakes for learning. Never fix them automatically during organization. Use `fix` ONLY when the user has actually made or requested a correction.

5. **`docs` — Documentation Only**
   - Use strictly when changes are limited to repository documentation (`README.md`, `PROGRESS.md`, `ROADMAP.md`, etc.).
   - *Examples*:
     - `docs(progress): update completed program count`
     - `docs(readme): clarify repository structure`
   - *Rule*: Do NOT use `docs` for commits that also introduce or modify source-code implementations.

6. **`chore` — Maintenance and Housekeeping**
   - Use for repository organization, file movements, naming-only changes, folder restructuring, and project rules/config maintenance.
   - *Examples*:
     - `chore(organization): reclassify input buffer programs`
     - `chore(organization): organize daily programs into concept folders`
     - `chore(config): update repository instructions`

### B. Decision Rules for Mixed Changes
1. Inspect every relevant diff before selecting commit types.
2. Group changes into logically coherent commits by concept and purpose.
3. Use separate commits when changes represent meaningfully different types or concepts.
4. If a single coherent change genuinely includes inseparable activities, select the type that best represents its primary purpose.
5. Never force unrelated changes into one commit simply to reduce commit count.
6. Never create one commit per file by default unless changes are genuinely independent or requested.
7. Do not create artificial commits just to use every available type.
8. If no listed type accurately describes a change, ask the user before inventing a new convention.

### C. Scope and Description Formatting
Format: `<type>(<scope>): <specific description>`

- **Scope Selection**: Accurately identify the technical concept or area changed (e.g., `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`, `functions`, `java-oop`, `trees`, `progress`, `organization`).
  - Do NOT copy parent folder names blindly (e.g. avoid `feat(logic-building)` for arithmetic or functions).
- **Description Guidelines**:
  - Concise, specific, and technically accurate.
  - Describe what the commit actually implements or changes.
  - Use clear action verbs: `implement`, `demonstrate`, `extract`, `correct`, `add`, `update`, `reclassify`.
  - **Banned Vague Phrases**:
    - `add foundational programs`
    - `add programs`
    - `update programs`
    - `update code`
    - `daily practice`
    - `add daily work`
    - `add multiple files`
    - `update logic building`
    - `add practice programs`
    - `add foundational problem solving`
  - Do not claim a bug was fixed or a test passed unless supported by the actual changes.

---

## 5. Execution & Approval Protocol

- **Explicit User Authorization Required**:
  - Commits are created **only** when the user explicitly requests a commit (e.g., *"Commit today's work"* or *"Commit and push today's work"*).
  - Pushes to GitHub occur **only** when the user explicitly requests a push.
- **Pre-Commit Verification**:
  - Inspect `git status` and `git diff` before staging.
  - Stage only files belonging to the intended changes.
  - Confirm no build artifacts (`.class`, `.exe`, `.o`), temporary files, logs, IDE metadata, or credentials/secrets are staged.
- **History Protection**:
  - Existing commits in repository history remain untouched. Never rewrite, squash, amend, or delete historical commits unless explicitly authorized.
  - Never use destructive Git commands, `--force` push, or history alteration.
