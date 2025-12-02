# Math-Assignment-207


# Matrix Transpose in C++

A clean and educational C++ program that computes the transpose of a rectangular matrix.

Perfect for students learning basic matrix operations and how rows & columns change in a transpose.


---

⭐ Features

Takes number of rows and columns from the user

Accepts all elements of Matrix A

Computes the transpose Matrix B (swapping rows and columns)

Clear, formatted output

Beginner-friendly code structure



---

🧪 Example Run

enter the numbers of row: 2
enter the numbers of colum: 3

enter elements of rectangular matrix A:
1 2 3
4 5 6

transpose of matrix A is matrix B:
1 4
2 5
3 6


# Transpose of a Square Matrix in C++

A clean and educational C++ program that computes the transpose of a square matrix using an in-place swap operation.

Perfect for students learning:

How a transpose works

How to swap elements inside a matrix

How to avoid using extra space



---

⭐ Features

Takes matrix dimension (rows & columns)

Accepts elements of a square matrix

Uses in-place swapping, so no extra matrix is needed

Outputs the final transposed matrix in clean format

Simple and easy to understand for beginners



---

🧪 Example Run

Enter the numbers of Row : 3
Enter the numbers of column : 3

Enter the Elements of square matrix :
1 2 3
4 5 6
7 8 9

Transpose of a square matrix:
1 4 7
2 5 8
3 6 9


# Symmetric Matrix Checker in C++

A clean and educational C++ program that checks whether a square matrix is symmetric.

Perfect for students learning:

Matrix theory

Transpose concept

Symmetry in matrices

Element-by-element comparison



---

⭐ What is a Symmetric Matrix?

A square matrix is symmetric if:

A[i][j] == A[j][i]   for all i, j

That means the matrix looks the same when mirrored across its main diagonal.

Example of a symmetric matrix:

1 2 3
2 5 6
3 6 9


---

⭐ Features

Takes the size of a square matrix

Accepts all matrix elements

Compares corresponding elements across the diagonal

Checks symmetry efficiently using a boolean flag

Outputs a clear result

Beginner-friendly logic



---

🧪 Example Run

Enter the size of square matrix : 3

Enter elements of matrix A :
1 2 3
2 5 6
3 6 9

The matrix is symmetric

Another example:

Enter the size of square matrix : 3

Enter elements of matrix A :
1 2 3
4 5 6
7 8 9

The matrix is not symmetric



# Skew-Symmetric Matrix Checker in C++

A simple and educational C++ program that checks whether a square matrix is skew-symmetric.

Perfect for students learning:

Matrix theory

Transpose & negative transpose

Properties of special matrices

Logical conditions and loops in C++



---

⭐ What is a Skew-Symmetric Matrix?

A square matrix A is skew-symmetric if:

A[i][j] = -A[j][i]

and all diagonal elements must be 0.

Example of a skew-symmetric matrix:

0  2 -3
-2 0  4
3 -4  0


---

⭐ Features

Takes size of square matrix

Accepts all matrix elements

Checks:

✔ Diagonal elements = 0

✔ A[i][j] = -A[j][i]


Simple boolean flag for efficient checking

Clear output message



---

🧪 Example Run

Enter the size of square matrix : 3
Enter the elements of matrix :
0  2 -1
-2 0  4
1 -4  0

The matrix is SkewSymmetric

Example of NOT skew-symmetric:

Enter the size of square matrix : 3
Enter the elements of matrix :
0  5  3
-5 1  7
-3 -7 0

The matrix is not SkewSymmetric


# Matrix Addition & Subtraction in C++

A simple and educational C++ program that performs addition and subtraction of two matrices of the same size.

Perfect for students learning:

Basic matrix operations

2D array manipulation

Condition checking

Nested loops in C++



---

⭐ Features

Takes rows & columns of two matrices

Checks if addition/subtraction is possible

Accepts input for both matrices

Computes:

✔ Sum of matrices

✔ Difference of matrices (Matrix1 − Matrix2)


Displays clear, formatted output

Beginner-friendly logic



---

🧪 Example Run

Enter rows and columns of first matrix: 2 3
Enter rows and columns of second matrix: 2 3

Enter elements for first matrix:
5 6 7
8 9 10

Enter elements for second matrix:
1 2 3
4 5 6

Addition of matrix:
6 8 10
12 14 16

Subtraction of matrix:
4 4 4
4 4 4



# Matrix Multiplication in C++

A simple and educational C++ program that performs multiplication of two matrices.

Perfect for students learning:

Matrix operations

2D array manipulation

Nested loops in C++

Condition checking



---

⭐ Features

Takes rows & columns of two matrices

Checks if multiplication is possible

Accepts input for both matrices

Computes the multiplication result

Displays clear, formatted output

Beginner-friendly logic



---

🧪 Example Run

Enter rows and columns of first matrix: 2 3
Enter rows and columns of second matrix: 3 2

Enter Elements for 1st Matrix :
1 2 3
4 5 6

Enter Elements for 2nd Matrix :
7 8
9 10
11 12

Multiplication of 1st & 2nd Matrix :
58 64
139 154
