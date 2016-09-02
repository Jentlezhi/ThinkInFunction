//
//  CalculateManager.h
//  函数式编程思想
//
//  Created by Jentle on 16/7/7.
//  Copyright © 2016年 Jentle. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculateManager : NSObject

/** 保存结果 */
@property(assign, nonatomic) float result;

- (instancetype)calculate:(float (^)(float))calculateBlock;

@end
