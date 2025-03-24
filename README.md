# 🎮 So_long - Introduction to Graphics Programming with MiniLibX

![C](https://img.shields.io/badge/Language-C-blue) ![MiniLibX](https://img.shields.io/badge/Graphics-MiniLibX-orange) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow) ![Norminette](https://img.shields.io/badge/Style-Norminette-green)

The **So_long** project aims to introduce students to graphics programming in C using the **MiniLibX** graphics library. Through this project, participants learn how to create a small 2D game by handling events, graphics, and interactive elements.

---

## 📋 Project Objective

The main objective of the project is to **develop a simple game in a 2D environment**, where the main character can:
- Move around the map.
- Interact with elements in the environment.
- Complete defined game objectives, such as collecting items and reaching an exit.

Additionally, the project serves as an introduction to advanced concepts, such as:
- **2D and 3D graphics handling.**
- **Geometric transformations and matrix manipulation.**
- **Keyboard event management and user input handling.**

---

## 📚 Fundamental Concepts

- **MiniLibX**: a graphics library for creating windows, displaying images, drawing pixels, and handling events.  
- **Geometric Transformations**: manipulation of positions, rotations, and scaling in the graphical space.  
- **Event Handling**: capturing keyboard inputs and dynamically responding to user actions.  
- **Game Programming**: logic for movement, object interaction, and state control.  

---

## ✨ Implemented Features

### 🔧 Game Structure
- **Game Map**: generated from a `.ber` file containing the map layout information.  
- **Character Movement**: the player can move up, down, left, and right.  
- **Game Objectives**:  
  - Collect all items present on the map.  
  - Reach the exit to win the game.  
- **Interactivity**: the character interacts with various elements on the map, such as walls, items, and the exit.  

### 🖼️ Graphics and Interface
- **Graphic Rendering**: 
  - Use of MiniLibX to draw game elements, such as the character, floor, walls, and collectibles.  
- **Event Management**: 
  - Capture of key presses to control the character.  
  - Window closure when the close button is clicked.  

### 🚨 Error Handling
- Error checking in the `.ber` file (map).  
- Handling of invalid maps (e.g., missing exit, missing items, or incorrect walls).  
- Management of unexpected events to prevent crashes.  

---

## 🛠️ Tools and Standards

| Tool/Standard         | Description                                               |
|-----------------------|-----------------------------------------------------------|
| **GIT**               | Version control system to organize code development.      |
| **Makefile**          | Automates compilation and executable generation.          |
| **Norminette**        | Ensures compliance with the 42 coding style standards.      |

---


