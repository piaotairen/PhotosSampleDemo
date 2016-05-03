//
//  NSTimer+EOCBlocksSupport.h
//  PhotosSampleDemo
//
//  Created by Zihai on 15/11/29.
//  Copyright © 2015年 Zihai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (EOCBlocksSupport)

+(NSTimer *)eoc_scheduledTimerWithTimeInterval:(NSTimeInterval)interval block:(void (^)())block repeats:(BOOL)repeats;

@end
