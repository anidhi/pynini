Pynini is a Python extension module which allows the user to compile,
optimize, and apply grammar rules. Rules can be compiled into weighted
finite state transducers, pushdown transducers, or multi-pushdown
transducers. For general information and a detailed tutorial, see
[pynini.opengrm.org](http://pynini.opengrm.org).

Pynini is primarily developed by [Kyle Gorman](mailto:kbg@google.com)
with the help of contributors. If you use Pynini in your research, we
would appreciate if you cite the following paper:

> K. Gorman. 2016. [Pynini: A Python library for weighted finite-state
> grammar
> compilation](http://openfst.cs.nyu.edu/twiki/pub/GRM/Pynini/pynini-paper.pdf).
> In *Proc. ACL Workshop on Statistical NLP and Weighted Automata*,
> 75-80.

(Note that some of the code samples in the paper are now out of date and not
expected to work.)

Dependencies
============

Pynini depends on:

-   A standards-compliant C++ 11 compiler (GCC &gt;= 4.8 or Clang &gt;= 700)
-   The most recent version of [OpenFst](http://openfst.org) (at the time of
    writing, 1.7.4) built with the `far`, `pdt`, `mpdt`, and `script` extensions
    (i.e., built with `./configure --enable-grm`) and headers
-   [Python 2.7 or 3.6+](https://www.python.org) and headers

It is tested with: Debian Linux 4.19.37 on x86\_64, GCC 7.3.0, Cython 0.29.13
and Python 3.7.2.

Installation instructions
=========================

Execute `python setup.py install`. Depending on your environment, you may need
to be superuser while running this command for installation to complete. To
confirm successful installation, execute `python setup.py test`.

Pynini will be available from [PyPi](https://pypi.org/) eventually. In the
meantime, we do maintain a periodically updated
[read-only GitHub mirror](https://github.com/kylebgorman/pynini) which can be
used to install the current version of the library by executing `pip install -e
git+git@github.com:kylebgorman/pynini.git#egg=pynini`.

Python 3 support
================

Python 3 support is available as of Pynini 2.0.0.

License
=======

Pynini is released under the Apache license. See `LICENSE` for more
information.

Interested in contributing?
===========================

See `CONTRIBUTING` for more information.

Mandatory disclaimer
====================

This is not an official Google product.
