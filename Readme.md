
  

<h1  align="center"  style="font-weight: bold;">Numerical Methods Laboratory Assignment <br /> by 2107037, 2107070, 2107103
</h1>
  
<br/>
<p  align="center" color="gray">
A simple console application that implements various numerical methods.
</p>
<hr />
<br />

### **The application should include solutions for:**

### 1\. ****Runge-Kutta Method (RungeKutta.hpp)****

- **Purpose**: Solves ordinary differential equations (ODEs).
- **Algorithm**: This implementation likely uses the 4th-order Runge-Kutta method (RK4), a widely used technique for solving ODEs. RK4 approximates the solution by taking a weighted average of several derivative estimates at different points within each step, leading to high accuracy without requiring very small steps.

### 2\. ****Gauss-Seidel Method (GaussSeidel.hpp)****

- **Purpose**: Solves systems of linear equations iteratively.
- **Algorithm**: The Gauss-Seidel method is an iterative technique that updates each variable in a system of equations based on the latest values of other variables. It iterates until the solution converges within a set tolerance. This method assumes the matrix is diagonally dominant for guaranteed convergence.

### 3\. ****Gaussian Elimination (Gauss_Elimination.hpp)****

- **Purpose**: Solves systems of linear equations by converting the matrix to an upper triangular form.
- **Algorithm**: Gaussian elimination uses forward elimination to create zeros below the pivot in each column, reducing the system to upper-triangular form. Back substitution then finds the values of the unknowns.

### 4\. ****Jacobi Iterative Method (JacobiIterative.hpp)****

- **Purpose**: Another iterative solver for systems of linear equations.
- **Algorithm**: The Jacobi method iteratively computes each variable independently, based on the values from the previous iteration. It’s slower than Gauss-Seidel in terms of convergence but can still be effective for certain types of matrices.

### 5\. ****Gauss-Jordan Elimination (Jordan_Elimination.hpp)****

- **Purpose**: Extends Gaussian elimination to find the inverse of a matrix and directly solve linear systems.
- **Algorithm**: Gauss-Jordan elimination reduces the matrix to row-echelon form, with both lower and upper triangular elements becoming zero. This process directly results in a diagonal matrix, making solutions straightforward.

### 6\. ****LU Factorization (LU_Factorization.hpp)****

- **Purpose**: Decomposes a matrix into lower (L) and upper (U) triangular matrices to solve linear systems more efficiently.
- **Algorithm**: LU factorization splits a matrix A into L and U, where L has non-zero elements below the diagonal and U above. By substituting in these matrices, systems of equations are solved through forward and backward substitution steps.

### 7\. ****Matrix Inversion (Matrix.hpp)****

- **Purpose**: Calculates the inverse of a matrix.
- **Algorithm**: Using either the Gauss-Jordan elimination or LU decomposition, the matrix inversion algorithm transforms a matrix A into its inverse A<sup>\-1</sup>, provided A is invertible.

### 8\. ****Bisection Method (Bisection.hpp)****

- **Purpose**: Finds roots of a nonlinear equation within a specified interval.
- **Algorithm**: This iterative algorithm repeatedly halves an interval where a root exists (based on the Intermediate Value Theorem). It evaluates the function at the midpoint and replaces the interval’s end that has the same sign as the midpoint.

### 9\. ****False Position Method (FalsePosition.hpp)****

- **Purpose**: Also used for finding roots of nonlinear equations within an interval.
- **Algorithm**: Similar to bisection, but instead of using the midpoint, this method calculates the root estimate using a linear interpolation between the function values at the interval endpoints. This approach can converge faster than bisection under certain conditions.

### 10\. ****Newton-Raphson Method (NewtonRaphson.hpp)****

- **Purpose**: Quickly finds roots of a function if a good initial estimate is available.
- **Algorithm**: This method uses the function and its derivative to iteratively approximate a root. Starting from an initial guess, it applies the formula x<sub>n+1</sub> \= x<sub>n</sub> \- f(x<sub>n</sub>) / f’( x<sub>n</sub> ) . It converges faster than other methods but requires a well-chosen starting point.

### 11\. ****Secant Method (Secant.hpp)****

- **Purpose**: Root-finding method similar to Newton-Raphson, but without needing the derivative.
- **Algorithm**: The secant method approximates the derivative by using two nearby points and iteratively improves estimates of the root by linearly interpolating the function’s values. It’s particularly useful for cases where derivatives are difficult to compute.


  


<p  align="center">
<a  href="https://github.com/TusharKumarRoy/numerical_console_app">📱 Visit this Project</a>
</p>


  

<h2  id="started">🚀 Getting started</h2>

  

Here you describe how to run your project locally

  

<h3>Prerequisites</h3>

  

Here you list all prerequisites necessary for running your project. For example:

  

- [MinGW](#)

- [Git](#)

  

<h3>Cloning</h3>

  

How to clone your project

  

```bash

git  clone  https://github.com/TusharKumarRoy/numerical_console_app

```

  

<h3>Starting</h3>

  

How to start your project

  

```bash

cd  numerical_console_app

**for linux**

g++  main.cpp

./a.out (for linux)

**for windows**

g++ -o program program.cpp&program.exe



```

  

<h2  id="colab">🤝 Collaborators</h2>

<div align="center">
<table>

<tr>

  

<td  align="center">

<a  href="https://github.com/TusharKumarRoy">

<img  src="https://scontent.fdac146-1.fna.fbcdn.net/v/t39.30808-6/448219813_1818584351969182_7348253047826562328_n.jpg?_nc_cat=110&ccb=1-7&_nc_sid=6ee11a&_nc_eui2=AeHsptKtZzpdpxt_il6eHl1QbAdXJ_MG-PdsB1cn8wb4976Rcym4FAzo5NhlRn1BgnmH_begcUQZyJGWPg36fj9g&_nc_ohc=MrjW4HHnZjoQ7kNvgGT-XgX&_nc_zt=23&_nc_ht=scontent.fdac146-1.fna&_nc_gid=AGM_znjiDZMApolGOWl-Qnl&oh=00_AYChnexOhXtiO8kXcJL3CUxrD3He4KEKfnz0NgE5S8t3pg&oe=6722AE03"  width="100px;"  alt="Tushar Kumar Roy Profile Picture"/><br>



<b>Tushar Kumar Roy</b> <br />
<b>Dept: CSE-21</b><br />
<b>Roll: 2107037</b><br />



</a>

</td>

  

<td  align="center">

<a  href="https://github.com/dipraru">

<img  src="https://i.ibb.co.com/pdDV4hQ/dipraru.jpg"  width="100px;"  alt="Dipra Dutta Profile Picture"/><br>



<b>Dipra Datta</b><br />
<b>Dept: CSE-21</b><br />
<b>Roll: 2107070</b><br />



</a>

</td>

  

<td  align="center">

<a  href="https://github.com/sakincse21">

<img  src="https://scontent.fdac146-1.fna.fbcdn.net/v/t39.30808-6/321338619_1296116357841641_26836973882773170_n.jpg?_nc_cat=110&ccb=1-7&_nc_sid=a5f93a&_nc_eui2=AeHOzwBWKf7O-PsdAq8tYPq8Lt28B9EEfucu3bwH0QR-52VtW6N0m0enFJIx3AO6GJkV8ygA0u61IOrRmEZTsXd4&_nc_ohc=zCv9dx4D0_UQ7kNvgEs_Hry&_nc_zt=23&_nc_ht=scontent.fdac146-1.fna&_nc_gid=AaGOGsZgw__69JzCIaUdr4w&oh=00_AYB2RVHPoXsU3c-bU5TcFX_rVU8X1FcB803KiyEgcGtiEQ&oe=6722A8E8"  width="100px;"  alt="Saleheen Uddin Sakin Profile Picture"/><br>



<b>Saleheen Uddin Sakin</b> <br />
<b>Dept: CSE-21</b><br />
<b>Roll: 2107103</b><br />



</a>

</td>

  

</tr>

</table>
</div>