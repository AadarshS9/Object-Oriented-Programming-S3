Qn 1. Define Two classes Mammal and MarineAnimal. Class Mammal has a constructor, that prints "I am mammal". Class MarineAnimal has constructor, that prints "I am a marine animal". Derive a new class BlueWhale inherited from both the above classes. It has got a constructor, that prints "I belong to both the categories: Mammals as well as Marine Animals". Implement objects for all classes listed above and observe inheritance using public, protected, and private modes. All constructors must be defined as public.


Qn2 : All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum balance allowed, maximum withdrawal limit etc) that all banks must follow. Write a program to implement bank Withdrawal functionality in the above scenario. During withdrawal, withdrawal function has to check "maximum withdrawal limit" before dispensing the money. Also, it has to charge a "Non minimum balance maitanence charge (Rs.300/-)", if the balance goes down below the minimum balance allowed during withdrawal.  

  Class Customer
  {
  //Personal Details ...
  // Few functions ...
  //hasA friend relationship with Account
  }
  Class Account
  {
  // Account Detail ...
  // Few functions ...
  //hasA friend relationship with Customer
  }
  Class RBI
  {
  Customer c;
  Account a;    //hasA relationship
  ..
  Public double GetInterestRate() {    }
  Public double GetWithdrawalLimit() {    }
  }
  Class SBI: public RBI
  {
  //Use RBI functionality or define own functionality.
  }
  Class ICICI: public RBI
  {
  //Use RBI functionality or define own functionality.
  }
