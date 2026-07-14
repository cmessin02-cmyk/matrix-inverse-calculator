![Language](https://img.shields.io/badge/Language-C-1c1c1c?style=flat-square)

# Matrix Inverse Calculator

This repository contains an interactive C console application that calculates the inverse of both $2 \times 2$ and $3 \times 3$ matrices. The program dynamically analyzes mathematical invertibility and provides real-time feedback using analytical linear algebra models.

## Mathematical Model

An inverse of a square matrix $A$ exists if and only if its determinant ($\det(A)$) is non-zero. The inverse is calculated using:

$$A^{-1} = \frac{1}{\det(A)} \cdot \text{adj}(A)$$

### 1. $2 \times 2$ Matrix Formula
For a matrix $A = \begin{pmatrix} a & b \\ c & d \end{pmatrix}$:

$$\det(A) = ad - bc$$

$$A^{-1} = \frac{1}{ad - bc} \begin{pmatrix} d & -b \\ -c & a \end{pmatrix}$$

### 2. $3 \times 3$ Matrix Formula
For a matrix $A = \begin{pmatrix} a & b & c \\ d & e & f \\ g & h & i \end{pmatrix}$:

$$\det(A) = a(ei - fh) - b(di - fg) + c(dh - eg)$$

The elements of the inverse matrix are computed using the transpose of the cofactor matrix (adjugate matrix) scaled by $1/\det(A)$.

## Execution Process

The program executes the calculation through the following structured sequence:

1. **Dimension Selection**: An interactive CLI prompt uses a `switch-case` block to direct the flow to either $2 \times 2$ or $3 \times 3$ calculations.
2. **Data Input**: Elements are collected row by row and stored using double-precision floating-point variables (`double`) to maintain arithmetic accuracy.
3. **Determinant Evaluation**: The program computes the determinant first. If the determinant equals exactly `0.0`, it blocks division-by-zero execution and alerts the user that the matrix is singular.
4. **Adjugate Scaling & Output**: If the matrix is invertible, the elements are rearranged, scaled by the inverse of the determinant, and printed in a formatted grid.

## Technical Details
* Language: C
* Core concepts demonstrated: Functional decomposition (modular functions), conditional matrix validation, multidimensional matrix visualization, and double-precision float manipulation.
