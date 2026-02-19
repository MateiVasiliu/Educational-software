# **Subprograme (subprograme.cpp)**

## **Description:**
This project is an educational, console-based C++ application (in Romanian) designed as an interactive guide to subprograms (functions). It combines theoretical explanations with runnable, small-scale examples so learners can both read about concepts and immediately try code snippets.

The program's structure mirrors a short textbook: each menu item corresponds to a topic (classification, definition, declaration, calling conventions, parameter-passing modes, local/global scope) or to a practical application. Example subprograms are implemented as separate menu-driven exercises so students can:
- inspect the implementation in `subprograme.cpp`,
- run the example from the interactive menu, and
- experiment by modifying inputs or the code.

Goals:
- show the difference between value-returning (operand) and procedural (`void`) functions;
- clarify parameter transmission: by value, by reference/address, and array semantics (implicit reference);
- demonstrate use of prototypes (declarations) vs full definitions and correct program organization;
- provide concrete algorithmic examples that highlight function design (prime factor exponent, average of positive numbers, array insertion, counting perfect numbers).

## **Features:**
- Interactive text menu (multiple levels) in Romanian.
- Explanations and exercises covering function classification, definition, declaration, calling conventions, parameter passing (by value and by reference), arrays, and short example subprograms.

## **How to use**
The program is entirely interactive. Below are step-by-step instructions and example flows to try its educational exercises.

1) Start the program
    - The program shows a splash screen. It will ask you to press `9` to enter the project; type `9` and press Enter.

2) Main menu navigation
    - After entering, the top-level menu presents three options:
    - Type the number of the chapter (without dots) and press Enter. For example, type `2` to open the user-defined functions section.

3) Entering subchapters and applications
    - Subchapters use numeric codes without dots (example: `21` → chapter 2.1)
    - Within `26` (Aplicatii), application entries are three-digit codes (e.g :`261` → Aplicatie_1)

4) Example — run Aplicatie_1 (`putere`)
    - The program will show the problem statement and ask:
        - Press `1` to try the problem interactively, or `2` to return.
    - If you press `1`, follow on-screen prompts (e.g., enter `n`), then the result is printed.

5) Quick example — run Aplicatie_3 (`inserare`) keys sequence
    - Sequence: `9` → `2` → `26` → `263` → `1` → follow input prompts

 6) Going back / exiting
    - Many menus request `2` to return to the previous menu or `9` to go to the main menu; follow the printed prompts.
    - Choose `3` from the main menu or press the exit option when shown to end the program.

## **Compiling**
```
g++ subprograme.cpp -o subprograme

#Run:
#Linux/MacOS
./subprograme 

#Windows
subprograme.exe
```

## **Short usage tips**
- Follow prompts exactly (numeric input only). The program prints instructions in Romanian.
- When entering array data for the example problems, pay attention to the indexing conventions used by the examples (some examples use 1-based indices in their explanation).
- If a numerical input seems to hang, check that you pressed Enter and that the terminal window is focused.

## **Notes / Limitations:**
- Console-only, Romanian prompts and explanations.
- No external libraries required beyond the standard library.

