//
//  ViewController.m
//  函数式编程思想
//
//  Created by Jentle on 16/7/7.
//  Copyright © 2016年 Jentle. All rights reserved.
//

/*
 函数编程思想：
 就是往方法中传入Block,方法中嵌套Block调用，把代码聚合起来管理
 函数式编程特点：
 每个方法必须有返回值（本身对象）,把函数或者Block当做参数,block参数（需要操作的值）block返回值（操作结果）
 */

#import "ViewController.h"
#import "CalculateManager.h"
#import "ETBCLog.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    
    CalculateManager *manager = [[CalculateManager alloc] init];
    float result =  [[manager calculate:^(float result) {
        //(5-2)*3/4
        result+=5;
        result-=2;
        result*=3;
        result/=4;
        return result;
    }] result];
    
    ETBCLogRed(@"result = %.2f",result);
    
}
@end
