#include "student.h"
#include <string>
using namespace std;

void student::setName(string one, string two)
{
  first=one;
  last=two;
}

string student::fullName()
{
  string full;
  full.append(first);
  full.append(" ");
  full.append(last);
  
  return full;
}

