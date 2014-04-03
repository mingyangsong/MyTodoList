//
//  XYZToDoItem.h
//  MyTodoList
//
//  Created by Mingyang Song on 4/1/14.
//  Copyright (c) 2014 Mingyang Song. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end