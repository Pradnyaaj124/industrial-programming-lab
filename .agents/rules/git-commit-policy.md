# Git Commit Message & Type Selection Policy

This rule governs all Git commit generation for `industrial-programming-lab`. It supersedes any generic commit instructions and enforces precise commit types, scopes, and grouping.

---

## 1. Mandatory Commit Type Taxonomy
Never default commits to `feat`. Inspect the actual code changes and select the exact matching type:

- **`feat`** — **New Concepts & Implementations**:
  - Strictly when introducing a brand-new algorithm, data structure, or language capability not previously implemented in the module.
  - *Examples*:
    - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
    - `feat(trees): implement binary search tree node insertion`
    - `feat(arrays): implement array rotation using reversal algorithm`
  - *Prohibition*: Do NOT use `feat` merely because a new file or practice program was added.

- **`refactor`** — **Architectural Evolutions**:
  - Restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept (e.g., inline `main()` logic into helper functions, procedural to OOP classes/objects, single to multi-file architecture).
  - *Examples*:
    - `refactor(arithmetic): extract inline addition into a helper function`
    - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`
  - *Prohibition*: Do NOT use `refactor` for brand-new concept implementations.

- **`test`** — **Testing and Verification**:
  - Adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
  - *Examples*:
    - `test(arithmetic): add assertion cases for boundary values`
    - `test(modular-addition): add automated unit test harness using assert`
  - *Prohibition*: Do NOT use `test` simply because code compiled or ran manually.

- **`fix`** — **Error and Flaw Corrections**:
  - Correcting an actual bug or demonstrating the fix of an intentional logical flaw.
  - *Examples*:
    - `fix(conditionals): correct logical operator flaw in three-number maximum`
    - `fix(arrays): correct off-by-one error in array traversal`
  - *Prohibition*: Programs may intentionally contain mistakes for learning. Never fix automatically. Use `fix` only when user made or requested the correction.

- **`docs`** — **Documentation Only**:
  - Markdown documentation changes strictly (`README.md`, `PROGRESS.md`, `ROADMAP.md`).
  - *Examples*:
    - `docs(progress): update completed program count`
    - `docs(readme): clarify repository structure`
  - *Prohibition*: Do NOT use for commits containing code changes.

- **`chore`** — **Maintenance and Housekeeping**:
  - Organization, file movements, naming-only changes, folder restructuring, project rule updates.
  - *Examples*:
    - `chore(organization): reclassify input buffer programs`
    - `chore(organization): organize daily programs into concept folders`
    - `chore(config): update repository instructions`

---

## 2. Decision Rules for Batches & Mixed Changes
1. Inspect every relevant diff before choosing commit types.
2. Group related changes into coherent logical commits.
3. Split different concepts or change types into distinct commits.
4. If a change genuinely involves inseparable activities, choose the type representing its primary purpose.
5. Do not combine unrelated changes to reduce commit count; do not create one commit per file by default.
6. If no listed type fits, ask the user before inventing a new type.

---

## 3. Scope & Message Formatting
Format: `<type>(<scope>): <specific description>`

- **Scope**: Identify the exact concept/topic (e.g., `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`, `functions`, `java-oop`, `trees`, `progress`, `organization`). Never blindly copy parent folder names.
- **Description**: Concise, specific, technically accurate, imperative mood (`implement`, `demonstrate`, `extract`, `correct`, `add`, `update`, `reclassify`).
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

---

## 4. Safety & History Protection
- Organizing does not authorize committing or pushing.
- Commit only upon explicit user command; push only upon explicit authorization.
- Never amend, squash, or rewrite historical commits.
- Never force push.
