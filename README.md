# C++ Graphics & Game Snippets

This repository contains **C++ programs using `graphics.h`** to experiment with computer graphics and interactive console-based games.  
Each snippet focuses on a specific feature or mini-project, ranging from animations to gameplay logic.

---

##  Contents

### Watch Graphics 
- **Description**:  
  A fully functional watch simulation that:
  - Takes **user input** for:
    - Day of the week
    - Time (HH:MM:SS)
    - Day of the year
  - Displays **AM / PM** format
  - Shows **seconds hand animation**
  - Smoothly updates and renders the clock face.

- **Highlights**:
  - Realistic clock UI using `graphics.h`
  - Continuous ticking animation
  - Dynamic day & date display

---

### Moving Car with Rain Animation 
- **Description**:  
  An animated scene where:
  - A car moves forward across the screen
  - Rain falls continuously in the background
  - The scenery updates frame-by-frame for smooth movement

- **Highlights**:
  - Uses loops for smooth car motion
  - Layered graphics for rain + car animation
  - Demonstrates basic 2D animation principles

---

### Tic-Tac-Toe Game
- **Description**:  
  A **two-player console-based game** of Tic-Tac-Toe with:
  - Clear **rules displayed** at the start
  - **Player turn tracking**
  - Automatic **win / draw detection**
  - Simple replay option

- **Highlights**:
  - Logical grid implementation
  - No external graphics — runs in console
  - Beginner-friendly game loop and win-checking logic

---

## Requirements
- **Compiler**: Turbo C++, or any compiler supporting `graphics.h`
- **Graphics Library**: `graphics.h`  
  - On modern compilers, you may need to set up the **WinBGI graphics library**.

---

## How to Run

1. **Install `graphics.h`**  
   - Copy `graphics.h` to your compiler’s `include` folder  
   - Copy `libbgi.a` (or equivalent) to your compiler’s `lib` folder

2. **Compile & Run**  
   Example for MinGW setup:
   ```bash
   g++ filename.cpp -o outputname -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
   ./outputname
