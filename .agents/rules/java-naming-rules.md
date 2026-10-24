# Java Naming & Strict Source-Code Preservation Rules

This rule strictly governs all Java program renaming and handling in `industrial-programming-lab`.

---

## 1. Java Filename Convention
- **No Leading Numbers or Suffixes**: Do NOT use leading numbers (e.g., prohibited: `01-DisplayMessage.java`) or numeric suffixes (e.g., prohibited: `DisplayMessage1.java`, `Program2.java`).
- **Meaningful PascalCase**: Use specific, descriptive PascalCase names that capture the program's actual technical purpose.
  - *Examples*: `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
- **No Arbitrary Numbering**: Choose names based on the actual implementation details rather than numeric counters.
- **Top-Level Class Match**: Ensure that any public top-level Java class has exactly the same name as the filename, including capitalization.

## 2. Strict Source-Code Preservation
Source code must remain completely unchanged except for explicitly authorized naming modifications.

**Antigravity is authorized ONLY to:**
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename to keep the program consistent.

**Antigravity is NOT authorized to make ANY other code changes during organization:**
- **DO NOT** add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- **DO NOT** add or remove `public` from the main class declaration.
  - If the user wrote `class Program1 { ... }` and the new name is `DisplayMessage.java`, rename to `class DisplayMessage { ... }`. NEVER change it to `public class DisplayMessage { ... }`.
  - If the user wrote `public class Program1 { ... }`, rename to `public class DisplayMessage { ... }`.
- **DO NOT** change the `main` method signature, return type, or access modifiers.
- **DO NOT** fix syntax errors, compilation errors, bugs, or warnings.
- **DO NOT** change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- **DO NOT** reformat code, change indentation, adjust line breaks, or modify whitespace.
- **DO NOT** add, remove, or rewrite comments.
- **DO NOT** add imports, remove imports, or alter package declarations.
- **DO NOT** optimize code or apply coding standards automatically.
- **DO NOT** add missing code or invent functionality.

## 3. Preserve the User's Learning Process
- These are learning programs written by the user. Some programs may intentionally contain mistakes, incomplete logic, unusual formatting, or omitted access modifiers for practice.
- Never assume imperfect code needs correction. Preserve the original implementation faithfully to maintain an honest record of learning.

## 4. Handling Ambiguous Java Cases
- If a safe rename requires code changes beyond the explicitly permitted class/constructor renames, **do not make changes automatically**.
- Leave the program in `daily-inbox/`, explain the compatibility issue, and ask the user before proceeding.
- Never silently make additional code changes to force compilation.

## 5. Verification and Reporting for Java
After organizing Java files:
- Verify that filenames match their public top-level class names where applicable.
- Compare original and final source code to confirm that only authorized class/constructor identifier changes occurred.
- Report every file renamed and every class identifier changed.
- Explicitly report any program left in `daily-inbox/` due to ambiguity.
- Compilation checks may be performed when practical, but failures must be reported as warnings, never automatically repaired.
