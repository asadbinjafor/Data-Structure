#include <iostream>
#include <cstring>
using namespace std;

struct Person {
  char Name[30];
  Person *Child;
};

Person P, *C;

int main(void) {
  strcpy(P.Name, "Arif");
  P.Child = new Person[2];
  strcpy(P.Child[0].Name, "Sara");
  P.Child[0].Child = NULL;
  strcpy(P.Child[1].Name, "Rahim");
  P.Child[1].Child = new Person;
  strcpy(P.Child[1].Child->Name, "Karim");
  P.Child[1].Child->Child = NULL;
  return 0;
}
