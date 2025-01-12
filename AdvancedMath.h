#include <stdio.h>
#include <stdlib.h>

#ifndef matrixStruct
#define matrixStruct

typedef enum {
    FLOAT,
    MAT,
    POL,
    COMPLEX,
} ObjectType;

typedef struct{
    float real;
    float imaginary;
} complexNumber;

typedef struct {
    ObjectType type;
    void *value;
} Obj;

typedef struct {
    int x; //nbLine
    int y; //nbColomn
    ObjectType type; // type of coefficient : can be FLOAT COMPLEX or POLYNOMIAL
    Obj **value;
}matrix;

typedef struct {
    int degree;
    ObjectType type; // type of coefficient : can be FLOAT or COMPLEX
    Obj *value;
}polynomial;

#endif

//objetConvert.c
Obj floatToObj(float d);
float objToFloat(Obj o);

//objetOperator.c
Obj sum(Obj A, Obj B);

//complex.c
complexNumber sumComplexNumber(complexNumber a, complexNumber b);

//matrix.c
matrix createMatrix(int x, int y);

//polynomial.c
polynomial createPolynom(int d);
polynomial sumPolynomial(polynomial A, polynomial B);