1. Fundamentals of Class and Objects :
Write a C++ program to implement a Class Student with the following attributes
Name of the Class Student
Class Members RNo : Roll Number of the student
Sname : Name of the student
Contact : Contact Number
Email : Email Address
SemGPA[8] : Array to store Semester wise GPA
TotalCGPA : Total CGPA

Member Functions getData() : Function to get initial values from User
putData() : Function to display values in class
compute() : Function to Compute CGPA
Implement the program to create one object for the class student.
2. Constructor and Destructor:
Write a C++ program to implement a Class Student with the following attributes

Name of the
Class

Student Remarks

Class Members RNo : Roll Number of the student
Sname : Name of the student
Contact : Contact Number
Email : Email Address
SemGPA[8] : Array to store
Semester wise GPA
TotalCGPA : Total CGPA

RNo. must be initialized by
Constructor.
Public :
RNo : Roll Number of the
student
Sname : Name of the student
Private :
Contact : Contact Number
Email : Email Address
SemGPA[8] : Array to store
Semester wise GPA
TotalCGPA : Total CGPA

Member
Functions

getData() : Function to get initial
values from User
putData() : Function to display
values in class
compute() : Function to Compute
CGPA

getData() : receives data
except RNo.
compute() is private.
Add constructors and
destructors where ever
applicable.

Implement the program to create multiple objects for the class student using array of
objects. RNO should be updated by constructor following an autoincrement method.
(Note : Use “static int count=1;” as a global variable and use that value for initialization in
the constructor. Use count increment to support autoincrement).
3. MULTIPLE OBJECTS :
Given that an EMPLOYEE class contains the following members:
Name of the
Class

Employee Remarks

Class Members ENo : Employee Number
Ename : Employee Name
Basic : Basic Salary
DA : Dearness Allowance
IT: Income Tax
NetSalary : Net Salary after
deductions

ENo must be initialized by
Constructor by following
autoincrement

Member
Functions

getData() : Function to get initial
values from User
putData() : Function to display
values in class
computeNetSalary() : Function to
Compute Net Salary

getData() : receives data
except ENo.
getData() and putData() are
public.
computeNetSalary() is private
Net salary = (Basic Salary +
DA) - IT
DA = 52% Basic
IT = 0% if Basic < 10,000
10% if Basic < 20,000
20% if Basic < 30,000
30% if Basic<40,000
Add constructors and
destructors where ever
applicable.

Write a C++ program to read the data of N employee and compute Net salary of each
employee
