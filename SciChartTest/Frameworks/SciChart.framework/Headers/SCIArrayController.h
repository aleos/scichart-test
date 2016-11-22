//
//  SCIArrayController.h
//  SciChart
//
//  Created by Admin on 20.07.15.
//  Copyright (c) 2015 SciChart Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SCIArrayControllerProtocol.h"

@interface SCIArrayController : NSObject <SCIArrayControllerProtocol> {
@protected
    void * _data;
    NSInteger _maxSize;
    NSInteger _count;
    SCIDataType _type;
}

@end
