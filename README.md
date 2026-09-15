# push_swap — my implementation work

42 İstanbul, **push_swap**: sort a stack of integers using two stacks and a restricted
instruction set (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`).

This repository is **my own branch** (Berkay Çelik) of the project, archived as-is.
It contains the parts I wrote and the state my implementation reached (~700 lines of C,
excluding `libft/`):

- **Argument parsing & validation** — single-string and multi-argument input, scope checks,
  non-numeric and duplicate detection (`./push_swap 1 1` → `Error`)
- **Stack layer** — doubly-linked stack, initialisation from arguments, `push` / `swap` /
  `rotate` / `reverse rotate` operations, teardown
- **Error handling & flow control** — `format_lmt_ctrl`, result checks, resource freeing
- **Algorithm draft** — `push_swap_medium_algorithm.c`: rank/index assignment and a
  chunk-based medium algorithm (drafted; not wired into `main` yet)
- **libft/** — my own C standard library implementation, used as the utility layer

## Status

**Work in progress (March 2026).** The program compiles clean
(`cc -Wall -Wextra -Werror`) and validates input correctly, and the tested paths are
clean under AddressSanitizer / LeakSanitizer (no leaks, no undefined behaviour).
The sorting step, however, is **not wired into the flow yet** — `main` parses,
initialises and frees without emitting moves.

The complete, working version of the assignment was finished as a **team project**
(two people):
[push_swap-team](https://github.com/BerkayCelk/push_swap-team) — my work there is in
branch `berkay4` (bench/error handling and finalisation).

## Build & run

    make                      # cc -Wall -Wextra -Werror
    ./push_swap 3 1 2
    ./push_swap "3 1 2"       # quoted single-argument form
    make fclean

## Layout

    main.c                       entry point, flow
    push_swap.h                  shared types and prototypes
    src/                         parsing/validation, stack init, operations, cleanup
    push_swap_medium_algorithm.c algorithm draft (not built)
    libft/                       own C standard library implementation

## Author

Berkay Çelik — Mechanical Engineering student, 42 İstanbul — 2026
