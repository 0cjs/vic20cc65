CC65 CRAM_PTR Startup Issue Demonstration
==========================================

This repo demonstrated a (now-fixed) issue in the VIC-20 `conio` library
from [cc65]. The problem was originally discovered and described by Peter
B. in a question on the Retrocomputing Stack Exchange, [cprintf printing
visible characters in C program on VIC 20][rc 12492], showing an issue with
printing using `cputc()` (or anything else that uses it, such as `cputs()`
or `cprintf()` immediately after program startup on the VIC 20, or at least
when using the VICE VIC-20 emulator.

[cc65 issue #946][946] has further discussion of the problem and potential
solutions, and [PR #965][965] contains the fix, which was merged on
2019-10-26.

----------------------------------------------------------------------

This repository includes [0cjs's fork of `cc65`][0cjs-cc65] as a
submodule, set to the fix on his development branch for this issue.
The top-level `Test` script will clone the module (if necessary) and
build cc65 before using it to compile the test program.

Running `Test` will demonstrate that the problem no longer exists. To
demonstrate the problem before the fix, change to the commit before it:

    #   You may want to confirm the following commit ID in the logs
    (cd cc65 && git reset --hard 9bd92178)

and re-run `Test`. You can then also one of the suggested lines in
`errdemo.c` to see it work correctly with a workaround.

The minimun workaround is to `cputc('\r')` before you print anything
else using `conio` on the VIC-20.



<!-------------------------------------------------------------------->
[cc65]: https://github.com/cc65/cc65
[rc 12492]: https://retrocomputing.stackexchange.com/q/12492/7208
[946]: https://github.com/cc65/cc65/issues/946
[965]: https://github.com/cc65/cc65/pull/965
[0cjs-cc65]: https://github.com/0cjs/cc65
