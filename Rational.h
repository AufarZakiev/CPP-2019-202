#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
  int numerator_;
  int denominator_;

public:
  Rational(int numerator, int denominator);
  int getNum() const;
  int getDen() const;
  int GCD(int first, int second);
  Rational& operator--();
  Rational& operator++();
  operator double() const;
};

#endif  // RATIONAL_H