#pragma once

class Test {
  int m_int;
  double m_double;
public:
  static const char* name();
  Test(int foo);
  Test(double foo);
};
