//
//  XPerson.h
//  PrivateCocoapodsLib
//
//  Created by Stephen 向 on 2017/8/7.
//  Copyright © 2017年 XP. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XPerson : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *value;

    
- (NSString *)getNameValue;
- (NSString *)getValues;

@end
