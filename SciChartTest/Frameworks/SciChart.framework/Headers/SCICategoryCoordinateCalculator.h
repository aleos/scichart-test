//
//  ICategoryCoordinateCalculator.h
//  SciChart
//
//  Created by Admin on 17.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import "SCICoordinateCalculator.h"

@protocol SCIICategoryCoordinateCalculator <NSObject, SCICoordinateCalculator>

-(int) transformDataToIndex:(NSNumber *)dataValue;

//DateTime TransformIndexToData(int index);
//
//int TransformDataToIndex(DateTime dataValue);
//
//int TransformDataToIndex(DateTime dataValue, SearchMode searchMode);

@end

/** @}*/
