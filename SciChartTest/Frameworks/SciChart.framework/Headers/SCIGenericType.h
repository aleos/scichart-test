//
//  SCIGenericType.h
//  SciChart
//
//  Created by Admin on 15.09.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#ifndef SciChart_GenericType_h
#define SciChart_GenericType_h

#import "SCIDataType.h"

// TODO: resolve trouble. In current version arrays have to be casted to pointers. If remove typeof(x) _x = x; will not be able to use numeric literals
#define SCIGeneric(x) ({ typeof(x) _x = (x); SCI_constructGenericType( &_x, @encode( typeof (_x) ) ); })

typedef NS_ENUM(int, SCIGenericEquationResult) {
    SCIGeneric_NotEqual,
    SCIGeneric_Equal,
    SCIGeneric_Lesser,
    SCIGeneric_Greater
};

typedef struct {
    SCIDataType type;
    union {
        char charData;
        short int16Data;
        int int32Data;
        long long int64Data;
        float floatData;
        double doubleData;
        
        void * voidPtr;
        char * charPtr;
        short * int16Ptr;
        int * int32Ptr;
        long long * int64Ptr;
        float * floatPtr;
        double * doublePtr;
    };
} SCIGenericType;

SCIGenericEquationResult SCIGenericCompare(SCIGenericType x, SCIGenericType y);

SCIGenericType SCI_constructGenericType(void * data, char * type);
SCIGenericType SCI_constructGenericTypeWithInfo(void * data, SCIDataType type);

BOOL SCIIsSafeGeneric(SCIGenericType x);

int SCIGenericInt(SCIGenericType x);
char SCIGenericChar(SCIGenericType x);
short SCIGenericShort(SCIGenericType x);
long long SCIGenericLong(SCIGenericType x);
float SCIGenericFloat(SCIGenericType x);
double SCIGenericDouble(SCIGenericType x);

int * SCIGenericIntPtr(SCIGenericType x);
char * SCIGenericCharPtr(SCIGenericType x);
short * SCIGenericShortPtr(SCIGenericType x);
long long * SCIGenericLongPtr(SCIGenericType x);
float * SCIGenericFloatPtr(SCIGenericType x);
double * SCIGenericDoublePtr(SCIGenericType x);

NSDate * SCIGenericDate(SCIGenericType x);
NSArray * SCIGenericArray(SCIGenericType x);

#endif
