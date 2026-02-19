# **Grafuri neorientate (grafuri_neorientate.cpp)**

## **Description:**
An educational, console-based C++ program that introduces undirected graphs and common graph concepts. The source is organized as an interactive textbook: theoretical explanations (definitions, types of graphs) are paired with runnable demonstrations and example problems. Topics covered include vertex degree, graph representations, traversals, connectivity, Hamiltonian and Eulerian graphs, example applications, and self-tests.

## **Project contents / topics:**
- Definitions: graphs, edges, adjacency, incidence, paths, cycles, subgraphs, special graph classes.
- Degree of a vertex and related properties.
- Representation methods (adjacency matrix/list, incidence list — explained and demonstrated).
- Graph traversal algorithms (conceptual and example runs for BFS/DFS-style traversal through menus).
- Connectivity and connected components.
- Hamiltonian and Eulerian graphs (definitions and checking examples).
- Example applications and interactive exercises.
- Built-in test section with interactive test modules and a final test.

## **How to use (step-by-step)**
1) Start the program
    - Run the compiled binary. A splash screen appears asking you to type `9` to enter the project — type `9` and press Enter.
2) Top-level menu
    - After entering, the main menu shows numbered chapters (1–10); Enter the chapter number (e.g., `4`) and press Enter.
3) Navigating submenus
    - Many chapters contain subchapters with numeric codes (e.g., `21`, `221`, `331`). Follow the prompts shown in each menu to enter deeper sections or run examples.
    - Typical navigation keys used by the program: `9` to return to main menu, `2` to go back in some submenus — follow the printed instructions.
4) Running examples and tests
    - Exercises under `Aplicatii` and the `Test` menu are interactive. You will be prompted for graph input (number of vertices, edges, list of edges, etc.) or choices to run a specific demonstration. Provide numeric inputs as requested.

**Example session (quick):**
- Start → type `9` → main menu: enter `4` for `Parcurgere` → choose the presented sub-option to run a traversal example → provide graph data when prompted → view printed traversal order or results.

## **Compiling**
```
g++ grafuri_neorientate.cpp -o grafuri_neorientate

#Run:
#Linux/MacOS
./grafuri_neorientate 

#Windows
grafuri_neorientate.exe
```

## **Usage tips & notes**
- The interface and prompts are in Romanian; answer using numeric choices and type strings/numbers when requested.
- Graph input conventions used by examples may vary (0-based vs 1-based node indices). Carefully read prompts before entering vertex indices.
- The program is designed for demonstration and learning; it prints explanatory text alongside any example runs.
- If input seems to hang, ensure the terminal is focused and press Enter after typing the requested value.

## **Limitations**
- Console-only application; not intended as a high-performance graph library.
- No external dependencies beyond the standard C++ library.
