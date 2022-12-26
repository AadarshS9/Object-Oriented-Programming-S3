4. FRIEND CLASS :
Refer to the UML Diagram with association (friend in C++) given below.
   Class Student has two friend classes; Subject_Teacher and Class_Teacher
   Each Subject Teacher can update marks and attendance of the concerned subject. Eg. Subject1_IA Subject1_ESE, Subject1_Attendnace, mapped to Object[0] of Subject_Teacher Class.
   Class Teacher and Subject Teacher can access all objects of the Student Class using multiple objects.
   Class_Teacher performs
    o calculateTotal() to update Total in Student class
    o calculateCGPA() to update CGPA in Stuent class
    o eligibility() to check attendance of all subjects and given status in “True/False”
    o showRanklist() show the Ranklist of all students
   Use Multiple Objects
    o Student Class – 5 objects
    o Subject_ Teacher Class – 3 objects
    o Class_Teacher class – 1 object
