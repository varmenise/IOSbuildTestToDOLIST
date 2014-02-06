//
//  valentinaToDoItem.h
//  ToDoList
//
//  Created by valentina armenise on 02/02/2014.
//  Copyright (c) 2014 valentina armenise. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface valentinaToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

