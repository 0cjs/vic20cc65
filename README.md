CC65 CRAM_PTR Startup Issue Demonstration
==========================================

The question on Retrocomputing [cprintf printing visible characters in
C program on VIC 20][rc 12492] shows that there's an issue with
printing using `cputc()` (or anything else that uses it, such as
`cputs()` or `cprintf()` immediately after program startup on the VIC
20, or at least when using the VICE VIC-20 emulator.

Ensure that `cl65` (from cc65) and `xvic` (from VICE) are in your path
and then run `Test` to demonstrate the problem. Uncomment one of the
suggested lines in `errdemo.c` to see it work correctly with a
workaround.


[rc 12492]: https://retrocomputing.stackexchange.com/q/12492/7208
