class Employee;

class Manager
   {
   private:
      int totalHours;
   //protected: should be as public
   //private: could not be two times private and the following should be as public
   public: //added line 
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };