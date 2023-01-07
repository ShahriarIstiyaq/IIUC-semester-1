#include <stdio.h>
int main()
{
//Relational Operators.
    printf("%d\n", 4==4);
    printf("%d\n", 4!=4);
    printf("%d\t, %d\n", 4>4, 4>=4);
    printf("%d\t, %d\n", 4<4, 4<=4);
    //1 means true and 0 means flase.

//Logical Operators.
    printf("%d\n", 4>3 && 5>2);
    printf("%d\n", 3>4 && 5>2);
    //For AND(&&) operator if both epressions are evaluate to TRUE, then the result is TRUE.
    
    printf("%d\n", 3>4 || 5>2);
    //For OR(||) operator if either or both expression are evaluate to TRUE, then the result is TRUE.

    printf("%d\n", !(5>1));
    printf("%d\n", !( (5>1) && (3>4) ));
    //For NOT(!) operator is used to flip the answer. Such as if the answer is true , NOT operator will flip the answer into false.

//Assingment Operator.
  //short hand operators.
    int a=4, b=2;
    a -= b ;
    printf("%d\n", a); // a= a-b
    return 0;
}