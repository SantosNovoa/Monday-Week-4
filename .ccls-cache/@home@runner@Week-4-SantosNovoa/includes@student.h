#include <iostream>
using namespace std;

class Student {
  public:
    static const int NBR_SCORES = 4;
    void setName (string fName, string lName);
    void updateName ();
    void setScores();
    void showScores();
    Student(string = "", string = "");
  private:
    string firstName;
    string lastName;
    int scores[NBR_SCORES];
    int studentID;
    static int ID;
};