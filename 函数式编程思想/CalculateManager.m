//
//  CalculateManager.m
//  函数式编程思想
//
//  Created by Jentle on 16/7/7.
//  Copyright © 2016年 Jentle. All rights reserved.
//

#import "CalculateManager.h"

@implementation CalculateManager

- (instancetype)calculate:(float (^)(float))calculateBlock{
    _result = calculateBlock(_result);
    return self;
}
@end
