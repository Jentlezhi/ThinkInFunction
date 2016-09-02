//
//  ETBCLog.h
//  EaryToBuyCar
//
//  Created by Jentle on 16/5/30.
//  Copyright © 2016年 wywinstonwy. All rights reserved.
//

#ifndef ETBCLog_h
#define ETBCLog_h
/**
 *  日志输出
 */
#ifdef DEBUG
#define ETBCLog(...) NSLog(__VA_ARGS__)
/**
 *  控制台输出指定颜色信息
 */
#define XCODE_COLORS_ESCAPE @"\033["
#define XCODE_COLORS_RESET_FG XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET XCODE_COLORS_ESCAPE @";"

#define ETBCLogBlue(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,0,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogRed(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogGreen(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,238,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogCyan(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg0,255,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogPink(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg250,20,147;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogPurple(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg160,32,240;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define ETBCLogGray(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg207,207,207;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
/**
 *  日志输出函数
 */
#define ETBCLogFunc RTLog(@"%s", __func__)

#else
#define ETBCLog(...)
#define ETBCLogBlue(frmt, ...)
#define ETBCLogRed(frmt, ...)
#define ETBCLogGreen(frmt, ...)
#define ETBCLogGreen(frmt, ...)
#define ETBCLogCyan(frmt, ...)
#define ETBCLogPink(frmt, ...)
#define ETBCLogPink(frmt, ...)
#define ETBCLogPurple(frmt, ...)
#define ETBCLogGray(frmt, ...)
#define ETBCLogFunc(...)

#endif


#endif /* ETBCLog_h */
