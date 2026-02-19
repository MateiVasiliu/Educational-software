# **Siruri de caractere (siruri_de_caractere.cpp)**

## **Description:**
This is an educational, console-based C++ program (Romanian) that teaches and demonstrates string handling and common library functions. The source is written as an interactive textbook: explanatory chapters about reading, writing and processing strings are paired with runnable examples and small applications that illustrate practical uses of `cstring`, `cstdlib` and `ctype` utilities.

## **What the project contains:**
- Introductory theory and examples for string declarations, indexing and the role of the terminating NULL character.
- Reading methods (`cin >>`, `cin.get`, `cin.getline`) and tips for handling buffers and spaces.
- A catalog of standard C string functions with examples (e.g. `strlen`, `strcmp`, `strcpy`, `strcat`, `strchr`, `strstr`, `strtok`, `strspn` and more).
- Conversion utilities from `cstdlib` (`atoi`, `atol`, `atof`, `strtol`, `strtod` and more).
- Character classification and case functions from `ctype` (`isupper`, `islower`,  `isalpha` and more).
- Interactive example applications that demonstrate substring operations, tokenization, case conversion and other manipulations.
- A test section with several test modules and a final 3-part summative test with amswers.

## **Features:**
- Menu-driven, interactive console interface in Romanian.
- Educational examples and runnable exercises covering common string tasks.
- Built-in tests for self-evaluation.

## **How to use (quick guide)**
1) Start the program and press `9` at the splash screen to enter the main menu.
2) Main menu options (enter the number without dots - example: for `menu 1` - type `1`):
3) Enter subchapter numbers as prompted (e.g. for `menu 2.1`, type `21`). 
    -   Many menus ask you to press `1` to try an example interactively or `2` to return.
4) Applications illustrate concrete tasks such as extracting substrings, changing character case, tokenizing text with `strtok`, and other string manipulations — follow on-screen prompts to provide input strings.
5) Tests (menu `5`) guide you through several test parts and present an answer key for self-grading.

**Example session**
- Start program → press `9` → at main menu type `4` to open Aplicatii → choose `41` (or follow prompts) → provide the requested string input → see the example result.

## **Compiling**
```
g++ siruri_de_caractere.cpp -o siruri_de_caractere

#Run:
#Linux/MacOS
./siruri_de_caractere 

#Windows
siruri_de_caractere.exe
```

## **Usage tips & notes**
- All prompts and text are in Romanian; provide numeric responses and string inputs as requested.
- Some examples in the code use 0-based indexing and some illustrative text uses 1-based descriptions — follow the program prompts when entering indices.
- When testing tokenization or getline-based examples, be mindful of leftover newline characters in the input buffer; use the program's built-in prompts (it handles common cases).
- No external libraries required: only standard headers (`iostream`, `stdlib.h`, `cstring`, `ctype.h` in parts).

## **Limitations**
- Console-only, Romanian prompts and explanations.

