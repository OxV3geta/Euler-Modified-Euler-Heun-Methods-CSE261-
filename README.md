# Euler-Modified-Euler-Heun-Methods-CSE261-
# Numerical Analysis of ODEs: Euler & Heun Methods

![Language](https://img.shields.io/badge/Language-C++11-blue.svg)
![Course](https://img.shields.io/badge/Course-CSE261-green.svg)
![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)
![License](https://img.shields.io/badge/License-Academic-lightgrey.svg)

## 📖 Project Abstract
This repository contains a modular C++ framework for solving Initial Value Problems (IVPs) of Ordinary Differential Equations (ODEs). The project was developed as part of the **CSE261 Numerical Methods** course.

The primary objective is to implement, analyze, and compare the accuracy and convergence rates of three specific numerical algorithms:
1.  **Euler's Method** (1st Order)
2.  **Heun's Method** (Modified Euler / 2nd Order)
3.  **Midpoint Method** (2nd Order)

The software exports high-precision simulation data to CSV format for external analysis and visualization.

---
## 🚀 Implemented Methods
We have implemented three primary single-step methods:
1.  **Euler's Method** (First-order accuracy)
2.  **Heun's Method** (Modified Euler / Predictor-Corrector)
3.  **Midpoint Method** (Runge-Kutta 2nd Order)

--- 

## ✨ Key Features
This project implements several advanced software engineering practices applied to numerical analysis:

* **Modular Architecture:** The solver logic (`NumericalMethods`), mathematical functions (`ODEFunctions`), and I/O handling (`FileWriter`) are strictly separated into different files. This allows for easy maintenance and scalability.
* **Multiple Solvers:** Implements three distinct algorithms (Euler, Heun, Midpoint) to allow for direct performance comparison.
* **Automated Error Analysis:** Automatically calculates the absolute error at every time step and computes the Global Error for varying step sizes ($h$).
* **Data Export Pipeline:** Generates structured `.csv` files for all simulation data, enabling professional plotting in tools like Excel, Python (Matplotlib), or MATLAB.
* **Configurable Physics:** The differential equation ($dy/dt$) is defined as a standalone function, allowing users to solve different problems without rewriting the core solver code.

---

## 👨‍💻 Group Members
**Section:** CSE261 (All Sections)  
**Topic:** C1. Euler & Modified Euler (Heun) Methods

| Student Name | Student ID |
| :--- | :--- |
| **Tarek Hossian** | 2024100000382 |
| **Nura Nusrat Jannat** | 2024000000320 |
| **Pritom Chowdhury** | 2024000000007 |
| **Muntaha Hasnat Prionty** | 2024000000033 |
| **Mesbah Uddin Molla** | 2024000000105 |
| **Sumaiya Akter Mim** | 2024100000265 |
| **Asifur Rahman Asif** | 2024000000330 |
| **Riyad Uz Zaman** | 2024000000231 |
| **Tawfiq Al Ibad** | 2024000000068 |
| **Mahjabeen Tur** | 2024200000319 |

---

## 🏗️ Project Architecture
The codebase follows a strict **Separation of Concerns** principle to ensure modularity and robustness.

```text
CSE261_Project/
├── code/
│   ├── NumericalMethods.h  # [Solver Engine] Declarations of numerical algorithms
│   ├── ODEFunctions.h      # [Physics Engine] Definitions of the ODE and Exact solution
│   └── FileWriter.h        # [I/O Utility] CSV export functionality
├── src/
│   ├── main.cpp            # [Controller] Simulation runner and parameter configuration
│   ├── NumericalMethods.cpp# Implementation of Euler, Heun, and Midpoint logic
│   └── FileWriter.cpp      # Implementation of file stream operations
├── results/                # Output directory for CSV datasets
├── plots/                  # Generated plots (images) for the report
└── README.md               # Documentation
