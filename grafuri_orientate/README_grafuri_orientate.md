# **Grafuri orientate (grafuri_orientate.cpp)**

## **Description:**
An educational, console-based C++ program that explains directed graphs (digraphs). The program is organized as an interactive textbook: theoretical definitions and properties (arcs, adjacency, incidence, special digraph classes) are paired with menu-driven examples, exercises and tests. It covers vertex degrees, representation methods, connectivity (including strong connectivity), applications and evaluation tests.

## **Project contents / topics:**
- Formal definitions: digraphs, arcs, loops, adjacency, incidence, subgraphs, partial graphs.
- Special directed graph classes: complete, full/plin, tournament graphs.
- Paths, circuits, chains and their properties for oriented graphs.
- Vertex in-degree and out-degree, and related computations.
- Representation methods (adjacency matrix/list, incidence notions) and explanations.
- Connectivity and strong connectivity (tare conexitate) with examples.
- Example applications (menu 6) and interactive tests (menu 7).

## **How to use (step-by-step)**
1) Start the program
   - Run the binary. A splash screen appears asking you to type `9` to enter the project — type `9` and press Enter.
2) Main menu
   - After entering, the main menu shows numbered chapters (1–8); Enter the chapter number (e.g., `3`) and press Enter.
3) Navigating submenus
   - Enter the subchapter numeric code shown in each menu (without `.` - e.g., `21`, `331`). Follow printed instructions for going back — commonly `2` or `9` are used to return.
4) Running examples and tests
   - Applications under `Aplicatii` and `Test` menus are interactive. Provide graph input (vertex count, edges/arcs, etc.) and choose demonstration options as prompted.

**Example quick session**
- Start → press `9` → at main menu type `4` for `Conexitate` → choose the available sub-option to test connectivity → input sample graph (as requested) → view results.

## **Compiling**
```
g++ grafuri_orientate.cpp -o grafuri_orientate

#Run:
#Linux/MacOS
./grafuri_orientate 

#Windows
grafuri_orientate.exe
```

## **Usage tips & notes**
- Prompts and explanations are in Romanian; answer with numeric selections and provide inputs (vertex indices, lists of arcs) when requested.
- Check whether a particular example expects 0-based or 1-based indexing for vertices — the menus usually indicate conventions.
- The program is demonstrative and prints theoretical explanations alongside any example outputs;

## **Limitations**
- Console-only; not a production graph library.
- No external dependencies outside the C++ standard library.
