OOP Projects

This repository contains C++ Object-Oriented Programming projects, each representing a separate lab.
Every project demonstrates a specific OOP concept: classes, inheritance, operator overloading, templates, exceptions, dynamic arrays, specializations, and logging.

Below is a full list of the labs included in this collection:

1. lab01_student-records-manager

Console system for managing student records (CRUD), including file I/O, sorting, and structured output.

2. lab02_time-logger

Custom Time class with automatic normalization and a Singleton Logger that records all object states.

3. lab03_dish-nutrition-calculator

Dish class implementing constructors, destructors, input validation, and energy calculation based on macros.

4. lab04_vector-operations

3D vector class with operator overloading (+, *=, prefix/postfix ++) and coordinate manipulation.

5. lab05_employee-staff-management

Two interacting classes: Employee and Staff, featuring operator overloading, dynamic memory, and salary updates.

6. lab07_pair-rational-arithmetic

Arithmetic with pairs and rational numbers using inheritance and operator overloading.

7. lab09_dynamic-array-vector-exceptions

Dynamic array of vectors with std::vector, custom exception classes, safe indexing, and array resizing.

8. lab10_template-array-vector-specializations

Fully templated Array<T> and Vector<T> with complete specializations for string and bool.

9. lab10_templates-array-vector-polymorphic-input

Advanced template system with polymorphic input, JSON-style printing (string specialization), and boolean vector formatting.


Technologies & Concepts Covered

Classes & objects

Constructors / destructors

Inheritance

Operator overloading

Dynamic memory management

Aggregation & composition

Template programming

Partial & full template specialization

Exception handling

Polymorphism

File I/O

Singleton pattern

Custom error hierarchies

std::vector as dynamic container

Object-Oriented Programming – C++ Laboratory Projects

Repository Structure:
Lab 01 – lab01_student-records-manager – Student records system using file storage, classes, and CRUD.
Lab 02 – lab02_time-logger – Time manipulation and logging system.
Lab 03 – lab03_dish-nutrition-calculator – Nutrition calculator for dishes.
Lab 04 – lab04_vector-operations – Custom vector implementation and arithmetic operations.
Lab 05 – lab05_employee-staff-management – Employee management system with sorting, searching, and file IO.
Lab 07 – lab07_pair-rational-arithmetic – Pair class and rational arithmetic with operator overloading.
Lab 09 – lab09_dynamic-array-vector-exceptions – Dynamic array with exception safety.
Lab 09 Templates – lab09_templates-array-vector-polymorphic-input – Template-based array and vector.
Lab 10 – lab10_template-array-vector-specializations – Template class specializations.

Requirements:
- C++17 compatible compiler
- CMake 3.12 or higher

How to Build Any Lab:
1. Enter the folder:
   cd lab07_pair-rational-arithmetic
2. Create build directory:
   mkdir build && cd build
3. Generate build files:
   cmake ..
4. Build the project:
   cmake --build .
5. Run the executable:
   ./lab07_pair_rational_arithmetic   (Linux/macOS)
   .\Debug\lab07_pair_rational_arithmetic.exe   (Windows)

Notes:
- All .cpp files inside each folder are automatically included using file(GLOB).
- Visual Studio project files were removed; CMake is the primary build system.

   lab05_employee-staff-management/
   lab07_pair-rational-arithmetic/
   lab09_dynamic-array-vector-exceptions/
   lab10_templates-array-vector-polymorphic-input/
   lab10_template-array-vector-specializations/
   
