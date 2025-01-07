#include <stdio.h>
#include <stdlib.h>

typedef struct rational
{
    int  numerator;
    int denominator;

}Rational;
//Increment
void rationalIncrement(Rational *rPtr)
{
    (*rPtr).numerator = (*rPtr).numerator + (*rPtr).denominator;
}

//Decrement
void rationalDecrement(Rational *rPtr)
{
    (*rPtr).numerator = (*rPtr).numerator - (*rPtr).denominator;
}

//Addition
Rational rationalAddition(Rational r1, Rational r2)
{
    Rational result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
    
    return result; 
}
//Substraction
Rational raionalSubstraction(Rational r1, Rational r2)
{
    Rational result;
    result.denominator - r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
    
    return result;
}
//Multiplication
Rational raionalMultiplication(Rational r1, Rational r2)
{
    Rational result;
    result.denominator - r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.numerator;
    
    return result;
}
//Division
Rational raionalDivision(Rational r1, Rational r2)
{
    Rational result;
    result.denominator - r1.denominator * r2.numerator;
    result.numerator = r1.numerator * r2.denominator;
    
    return result;
}
//Smaller
int smallerRational(Rational r1, Rational r2)
{
   r1.denominator = r1.denominator * r2.denominator;
   r2.denominator = r1.denominator * r2.denominator;
   r1.numerator = r1.numerator * r2.denominator;
   r2.numerator = r2.numerator * r1.denominator;

   if(r1.numerator < r2.numerator)
        return 1;
    else
        return 0;
}
//Larger
int largerRational(Rational r1, Rational r2)
{
   r1.denominator = r1.denominator * r2.denominator;
   r2.denominator = r1.denominator * r2.denominator;
   r1.numerator = r1.numerator * r2.denominator;
   r2.numerator = r2.numerator * r1.denominator;

   if(r1.numerator > r2.numerator)
        return 1;
    else
        return 0;
}
//Equal
int isEqualRational(Rational r1, Rational r2)
{
   r1.denominator = r1.denominator * r2.denominator;
   r2.denominator = r1.denominator * r2.denominator;
   r1.numerator = r1.numerator * r2.denominator;
   r2.numerator = r2.numerator * r1.denominator;

   if(r1.numerator == r2.numerator)
        return 1;
    else
        return 0;
}
//NotEqual
int notEqualRational(Rational r1, Rational r2)
{
   r1.denominator = r1.denominator * r2.denominator;
   r2.denominator = r1.denominator * r2.denominator;
   r1.numerator = r1.numerator * r2.denominator;
   r2.numerator = r2.numerator * r1.denominator;

   if(r1.numerator != r2.numerator)
        return 1;
    else
        return 0;
}


int main()
{
    return 0;
}