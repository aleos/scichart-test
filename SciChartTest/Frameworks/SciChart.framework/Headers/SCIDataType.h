//
//  SCIDataType.h
//  SciChart
//
//  Created by Admin on 09.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#ifndef SciChart_DataTypeEnum_h
#define SciChart_DataTypeEnum_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(int, SCIDataType) {
    SCIDataType_None,
    
    SCIDataType_Int16,
    SCIDataType_Int32,
    SCIDataType_Int64,
    SCIDataType_Byte,
    SCIDataType_Float,
    SCIDataType_Double,
    SCIDataType_DateTime,
    
    SCIDataType_VoidPtr,
    SCIDataType_CharPtr,
    SCIDataType_Int16Ptr,
    SCIDataType_Int32Ptr,
    SCIDataType_Int64Ptr,
    SCIDataType_FloatPtr,
    SCIDataType_DoublePtr,
    
    SCIDataType_Array,
    SCIDataType_Object
};

#endif
