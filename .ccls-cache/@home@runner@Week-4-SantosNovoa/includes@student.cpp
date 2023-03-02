#include "student.h"

int Student::ID = 100;

void Student::setName(string fName, string lName) {
  firstName = fName;
  lastName = lName;
}

void Student::updateName() {
  string fName, lName;
  cout << "Enter first name for student " << studentID << ": ";
  cin >> fName;
  cout << "Enter last name for student " << studentID << ": ";
  cin >> lName;
  setName(fName, lName);
}
void Student::setScores() {
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << "Enter score " << i + 1 << " for student " << studentID << ": " << firstName << " " << lastName << endl;
    cin >> scores[i];
  }
}
void Student::showScores() {
  cout << "Scores for student " << studentID << ": " << firstName << " " << lastName << " are" << endl;
  int total = 0;
  int average;
  for (int i = 0; i < NBR_SCORES; i++) {
    cout << scores[i] << " ";
    total += scores[i];
  }
  average = total / NBR_SCORES;
  cout << endl << "The average is: " << average << endl;
  }

  Student::Student (string fName, string lName) {
    ID++;
    studentID = ID;
    setName(fName, lName);
  }
