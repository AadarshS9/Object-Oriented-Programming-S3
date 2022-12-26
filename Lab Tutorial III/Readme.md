1. Write a program with class my_class with an integer data member a and b, a default constructor, a parameterized constructor, a destructor, and a member function that displays the value of a and b. All
constructors and, destructor should display a message (Executing Default Constructor / Executing Parameterised Constructor, Executing Destructor).


2. Create a class Car that has two private data fields: integer liters and double consumption. Its default constructor should set those values to 40 and 0.1, respectively. It should also have a parameterized
constructor to set those values. Both constructors should display messages that a car with the given features had been created. Its destructor should display a message that a car with the given features had
been destroyed. It should have a double maxDistance() method, that will return the maximum distance that the car can travel on a single tank, calculated as liters/consumption.


3. Create a class VehicleRegistration that has the following public and private data fields:
   Public : RegNo, RegYear
   Private : ChasisNo, VehicleType, Nameofowner
   It should have a parameterized constructor, which passes RegNo and RegYear as arguments.
  RegNo must be an autoincremented value. In the parameterized constructor, a member function call getData() must be included. It is used for getting ChasisNo, VehicleType, Nameofowner from
  user.
   The class should have one more member function vehicleTransfer(). This function is invoked for owner change. The user must be prompted for "RegNo" entry from main() and check it from
available objects. If “RegNo” present call vehicleTransfer(), it must accept Nameofowner to change the ownership. Otherwise, display vehicle not found.
   Its destructor should display a message that a vehicle with the given features had been destroyed.
   Create two objects and execute.
