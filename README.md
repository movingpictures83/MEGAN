# MEGAN
# Language: C++
# Input: TXT
# Output: none
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to interface to MEGAN (Huson et al, 2007).

This plugin assumes the Ultimate version of MEGAN, which includes
a command-line interface.

This version can accept commands in the form of an input TXT file,
which is what the plugin accepts.

The user does not need to provide an output file, as the MEGAN
commands will produce output naturally.  We did provide one
in the example/ folder, just for testing purposes.
