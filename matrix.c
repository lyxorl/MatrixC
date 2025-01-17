#include "AdvancedMath.h"

matrix createMatrix(int x, int y){
    
    matrix result;
    result.x = x;
    result.y = y;
    result.type = FLOAT; // default type should be complex for facility ?
    result.value = malloc(sizeof(Obj*)*y);
    for(int i = 0; i<y; i++){
        result.value[i] = malloc(sizeof(Obj)*x);
    }

    return result;
}

matrix nullMatrix(int x, int y, ObjectType ObjT){

    matrix result;
    result = createMatrix(x,y);
    result.type = ObjT;
    
    for(int i = 0; i<y; i++){
        for(int j = 0; j<y; j++){
            Obj nullObj;
            nullObj = nullObject(ObjT);
            result.value[i][j] = nullObj;
        }
    }
    
    return result;
}

matrix sumMatrix(matrix A, matrix B){

    if (A.x != B.x || A.y != B.y){
        printf("Error impossible to sum matrix the size are not the same");
        exit(1);
    }
    if (A.type != B.type){
        printf("Error the two matrix don't have the same type");
        exit(1);
    }

    matrix result;
    result = createMatrix(A.x, A.y);
    
    for(int y = 0; y<result.y; y++){
        for(int x = 0; x<result.x; x++){
            result.value[y][x] = sum(A.value[y][x],B.value[y][x]);
        }
    }

    return result;

}

matrix productMatrix(matrix A, matrix B){

    if (matrix.y != matrix.x){
        printf("Error the matrix don't have the good size to product them");
        exit(1);
    }
    if (A.type != B.type){
        printf("Error the two matrix don't have the same type");
        exit(1);
    }

    matrix result;
    result = createMatrix(A.x, B.y);

    return result;

}