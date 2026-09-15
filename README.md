# push_swap — my contributions

42 İstanbul **push_swap**: sort a stack of integers using two stacks and a restricted
instruction set (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`) —
with the lowest possible number of operations. This was a **team project (two people)**.

## What I implemented

Taken from the project README's *Team Contributions* section (written by the team) and
matching my commits:

- **Medium sort — O(n·√n) chunk sort**: rank/index assignment and chunk-based pushing
  to stack B, then ordered retrieval
- **Simple sort — O(n²)**: small-input sorting path
- **Complex sort — O(n log n) radix sort**: bit-by-bit radix passes over stack B
- **Makefile configuration** — build, relink avoidance and the `--simple / --medium /
  --complex / --adaptive` selector wiring
- **`sort_three` / `sort_five`** small-case handlers, and finalisation of the adaptive flow

My teammate (Tekin Tezcan) implemented the core stack data structures, the disorder
metric calculator, and the rules/allowed-moves layer. The complete, working project with
both parts merged lives here:
**[push_swap-team](https://github.com/BerkayCelk/push_swap-team)** — final version in
branch `berkay4`.

## This repository

This repo is my **own working branch** (archived, March 2026): the argument
parsing/validation layer, the stack layer and the operations (`push`, `swap`, `rotate`,
`reverse rotate`), error handling, plus the first version of the medium algorithm
(`push_swap_medium_algorithm.c`). It compiles clean with `cc -Wall -Wextra -Werror` and
the tested paths are clean under AddressSanitizer / LeakSanitizer. The algorithms above
were finished and wired into the flow inside the shared repository, which is where the
working `push_swap` binary is (see the team repo).

## Build

    make                      # cc -Wall -Wextra -Werror
    ./push_swap 3 1 2
    ./push_swap "3 1 2"       # quoted single-argument form
    make fclean

## Layout

    main.c                        entry point, flow
    push_swap.h                   shared types and prototypes
    src/                          parsing/validation, stack init, push/swap/rotate/reverse, cleanup
    push_swap_medium_algorithm.c  medium (chunk) algorithm — first version
    libft/                        my own C standard library implementation (utility layer)

## Author

Berkay Çelik — Mechanical Engineering student, 42 İstanbul — 2026
