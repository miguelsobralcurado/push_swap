*This project has been created as part of the 42 curriculum by <msobral-@student.42lisboa.com>.*

# 🧩 push_swap

A sorting algorithm visualized through stack operations.

---

## 📌 Description

**`push_swap`** is a 42 project whose objective is to sort data using a limited set of stack operations. It features a sorting algorithm that outputs an optimal sequence of instructions to sort a stack of integers using two stacks, **a** and **b**.

You start with stack **a** initialized with a random list of positive and/or negative **unique integers**, and stack **b** is initially empty.

The challenge is to sort stack **a** in **ascending order (from top to bottom)** using the **least number of operations possible** from the defined instruction set. This project heavily focuses on algorithmic thinking and optimization for performance and efficiency.

Instructions used include: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.

---

## 🚀 Instructions

### 🛠️ Requirements

- A C compiler compliant with the C99 standard.
- `make` utility.
- Your own implementation of `libft`.

### 🧱 Compilation

Clone the repository and run:

```bash
make

<h1 align="center">push_swap</h1>

<p align="center">
  A high-performance sorting engine using two stacks and a minimal instruction set.
</p>

<p align="center">
  <a href="#-demo">Demo</a> •
  <a href="#-algorithm">Algorithm</a> •
  <a href="#-benchmark">Benchmark</a> •
  <a href="#-installation">Install</a>
</p>

<p align="center">
  <img src="https://img.shields.io/github/languages/top/YOURNAME/push_swap?style=flat-square" />
  <img src="https://img.shields.io/github/repo-size/YOURNAME/push_swap?style=flat-square" />
  <img src="https://img.shields.io/github/last-commit/YOURNAME/push_swap?style=flat-square" />
</p>

## 🚀 Overview

**push_swap** is an algorithmic challenge that consists of sorting a list of integers using two stacks and a restricted set of operations.

The goal is not just to sort —  
it is to **sort with the lowest possible number of operations**, forcing you to design an optimized algorithm.

This project focuses on:
- Algorithmic thinking
- Complexity optimization
- Data structure manipulation
- Low-level C implementation

## 📜 Rules

You are given:
- Two stacks: `a` and `b`
- A list of unique integers initially in stack `a`
- Stack `b` starts empty

You must sort stack `a` in ascending order using only the following instructions:

| Instruction | Description |
|-------------|-------------|
| sa | Swap first 2 elements of `a` |
| sb | Swap first 2 elements of `b` |
| ss | sa and sb |
| pa | Push top of `b` to `a` |
| pb | Push top of `a` to `b` |
| ra | Rotate `a` up |
| rb | Rotate `b` up |
| rr | ra and rb |
| rra | Reverse rotate `a` |
| rrb | Reverse rotate `b` |
| rrr | rra and rrb |

## 🧠 Algorithm

This project uses a custom-designed sorting strategy optimized for stack-based operations.

### Strategy Overview
(Describe your approach here)

Examples:
- Chunk-based sorting
- Binary radix sorting
- Cost-based move selection
- Greedy + rotation optimization

### Why this works
Explain:
- How you reduce moves
- How you decide which numbers to push
- How you minimize rotations

## 🏗 Architecture

```text
Input Parsing
      ↓
Validation
      ↓
Indexing / Normalization
      ↓
Sorting Engine
      ↓
Instruction Output
```

## 🧪 Example

```bash
./push_swap 5 1 4 2 3

pb
ra
pb
sa
pa
pa
```

## ⚙️ Installation

```bash
git clone https://github.com/YOURNAME/push_swap.git
cd push_swap
make
```

## ▶️ Usage

```bash
./push_swap 3 2 5 1 4

./push_swap 3 2 5 1 4 | ./checker_linux 3 2 5 1 4
```

## 📊 Benchmark

| Input Size | Max Allowed | My Result |
|------------|------------|-----------|
| 100 numbers | < 700 | X |
| 500 numbers | < 5500 | X |

The algorithm adapts dynamically based on input distribution to minimize total operations.

## 🔐 Error Handling

The program prints `Error` to stderr when:
- Non-integer arguments are passed
- Integers overflow
- Duplicate values are detected

## 🧪 Testing

Random tests:

```bash
ARG=$(shuf -i 1-1000 -n 100)
./push_swap $ARG | ./checker_linux $ARG
```

## 📁 Project Structure

```text
push_swap/
├── src/
│   ├── parser/
│   ├── stack/
│   ├── operations/
│   └── algorithm/
├── includes/
├── Makefile
└── README.md
```

## 🎯 Key Learnings

- Time complexity tradeoffs
- Stack-based sorting limitations
- Greedy vs global optimization
- Writing performant C code

## 👤 Author

Name  
42 Intra / GitHub  
LinkedIn (optional)

---


After experimentation and creation of different sorting algorithms, searched lm for clues on knowledge that could help me know how to check and choose for the optimal way. Lm responded with the Heuristic concept.

Resources:
On stack data:
https://www.geeksforgeeks.org/c/implement-stack-in-c/
https://www.geeksforgeeks.org/dsa/circular-linked-list/
https://www.youtube.com/watch?v=Flk5yrlx5Qo
https://www.youtube.com/watch?v=YjxKYxpf51E
https://leetcode.fandom.com/wiki/Sort_with_two_stacks
https://www.geeksforgeeks.org/dsa/sorting-a-singly-linked-list/
https://www.geeksforgeeks.org/dsa/sorted-merge-of-two-sorted-doubly-circular-linked-lists/

On heuristic theory:
https://en.wikipedia.org/wiki/Heuristic

On algorithms:
https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
https://42-cursus.gitbook.io/guide/2-rank-02/push_swap/algorithms
https://clementmihailescu.github.io/Sorting-Visualizer/
https://www.youtube.com/watch?v=WprjBK0p6rw
https://www.youtube.com/watch?v=Y95a-8oNqps
https://www.youtube.com/watch?v=rbbTd-gkajw

Other:
https://www.geeksforgeeks.org/c/how-to-create-typedef-for-function-pointer-in-c/