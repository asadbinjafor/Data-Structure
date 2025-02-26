#include <iostream>
using namespace std;

struct Student {

  int id;
  int creditsCompleted;
  double gpa;
};

int main() {


  Student students[10];


  for (int i = 0; i < 10; i++) {
    cout << "Enter student " << i + 1 << " information:" << endl;

    cout << "ID: ";
    cin >> students[i].id;
    cout << "Number of credits completed: ";
    cin >> students[i].creditsCompleted;
    cout << "GPA: ";
    cin >> students[i].gpa;

  }


  cout << "Students with CGPA greater than 3.75:" << endl;
  for (int i = 0; i < 10; i++) {
    if (students[i].gpa > 3.75) {
      cout << "ID: " << students[i].id << endl;
    }
  }



  cout << "Students with more than 50 credits completed:" << endl;
  for (int i = 0; i < 10; i++) {
    if (students[i].creditsCompleted > 50) {
      cout << "ID: " << students[i].id << endl;
    }
  }

  return 0;

}
