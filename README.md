# Finite Automata – Formal Languages Project

## Operating System, Programming Language and Tools

This project was developed using the following environment:

- **Operating System:** Windows 11 / Linux
- **Programming Language:** C++
- **Compiler:** g++
- **Build System:** CMake
- **IDE / Editor:** CLion / Visual Studio Code
- **Version Control:** Git & GitHub

Required dependencies:

- C++17 compatible compiler
- CMake (version 3.10 or higher)

---

# Project Description

This project implements a simple model of an automaton using C++.  
It represents automaton states and their properties such as:

- Initial state
- Final states
- State identifiers
- Recognized patterns

The goal of the project is to demonstrate how concepts from **Formal Languages and Automata Theory** can be implemented programmatically using C++.

---

# Project Structure

```
Infinite_Automata-main/
│
├── README.md
└── AutomataLenguajesFormales/
    │
    ├── main.cpp        # Main program
    ├── Automata.cpp    # Automaton implementation
    ├── Automata.h      # Automaton structure definition
    └── CMakeLists.txt  # Build configuration
```

---

# How to Run the Program

## Option 1 — Compile with g++

Open a terminal inside the **AutomataLenguajesFormales** folder:

```bash
cd AutomataLenguajesFormales
```

Compile the program:

```bash
g++ main.cpp Automata.cpp -o automata
```

Run the program:

Linux / Mac:

```bash
./automata
```

Windows:

```bash
automata.exe
```

if you want to run directly the program do this command:

``` bash
g++ main.cpp -o automata ./automata
```
## Option 2 — Using CMake

From the `AutomataLenguajesFormales` directory:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

Run the program:

```
./AutomataLenguajesFormales
```

---

# Algorithm Explanation

The program models an automaton using a structure that represents each state.

Each state contains attributes such as:

- **State name** – Identifier of the automaton state
- **Initial state** – Indicates whether the state is the starting state
- **Final state** – Indicates whether the state is an accepting state
- **Recognized pattern** – The symbol or pattern processed by the state

The algorithm works in the following way:

1. Define the structure representing an automaton state.
2. Create and configure different states of the automaton.
3. Assign properties such as initial state, final state, and recognized patterns.
4. Use these states to represent the behavior of the automaton.

This allows the program to simulate basic concepts used in automata theory.

---
