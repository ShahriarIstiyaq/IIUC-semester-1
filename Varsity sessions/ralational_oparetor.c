#include<stdio.h>
int main()
///relational oparetors: .>,>=,<,<=, == , !=
{
    int a, b, c,d;

    a=5;
    b = 10;
    c = (b>a)+1;///If the statement is correct than the condition will be replaced by 1.
    printf("%d\n", c);

    printf("\n\nIf b = 17.\nThen enter a value for which a>=b :");
    scanf("%d", &a);
    b = 17;
    c = (a>=b);
    printf("%d is greater than or equal %d -> %d", a,b,c);

    d= !a;//This means the value of d is not as same as a.
    ///d is equal to not a
    printf("\n%d\n", d);
    printf("\n%d\n", a == d);

    a=170, b=17, c=5;
    d = !((a+b)&&0);
    printf("\n\n%d\n", d); /*Here a+b is a true value. But the other condition is 0. As in AND operator both off the conditions should be fulfilled ,
                            the answer will be 0. And at last the NOT operator will flip the answer into 1.*/

    return 0;
}
