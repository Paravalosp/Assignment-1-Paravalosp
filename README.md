# README

## Introduction

In this project you will be working on a number of small projects to get used to the C programming language.

- Due: 1 Week (Sep 17, 08:00PM)
- Deliverables: Commit and push to Github. Post Github link to Brightspace.

## Preparations

FIrst follow the instructions to get Ubuntu LTS (20.04) installed on your system.

Once Ubuntu and the build-essentials package is installed on your system, clone the Github classroom link onto your
system using git.

    git clone {GITHUB_URL}

Once the repository is downloaded on your system, go through each level one by one. You do not need to follow in
order, but the directories will be explained in order below.

After downloading the files, you should first CD to the directory you want and type make to build it. For example:

    cd level1_stats
    make

The make command will read the file named Makefile and process the commands for you.

You can then run the first test case by:

    ./test_find_greater

This will look for the program `test_find_greater` in the current directory (`./`). Each directory will contain its own set
of test programs. Make sure you save in Visual Studio Code and run `make` every time before you run a test case!

## Level 1, 2, 3

TL;DR Fix anything that says TODO

There are three levels to this assignment. For details, look at the README.md file in each directory

- [Level1](level1_stats/README.md)
- [Level2](level2_time/README.md)
- [Level3](level3_strings/README.md)

There's also a directory called `unity`, which is used for unit testing. You may safely ignore this directory (as long
as you don't modify it).

## Submission

If you're using Github, just push your changes to the github repository, and post the link to the assignments page.  I
will pick up any code that you've pushed by the deadline (make sure you **do** push to Github!).

## Grading Rubric

There are 6 sub-levels with equal weight each. Within each sublevel, you will be graded using the following criteria:

- 80% Specifications: The program should work and satisfy test cases
- 20% Readability: The program have clear flow and have clear documentation (including header file
documentation).
