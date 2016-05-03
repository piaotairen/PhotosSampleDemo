//
//  TestTest.m
//  PhotosSampleDemo
//
//  Created by Zihai on 15/11/29.
//  Copyright © 2015年 Zihai. All rights reserved.
//

#import "ECOClass.h"

#import "NSTimer+EOCBlocksSupport.h"



@implementation ECOClass
{
    NSTimer *taskTimer;
}

-(void)startTimerTask{
    __weak ECOClass *weakSelf = self;
    
    taskTimer = [NSTimer eoc_scheduledTimerWithTimeInterval:5.0 block:^{
        ECOClass *strongSelf = weakSelf;
        [strongSelf doSomeTask];
    } repeats:YES];
}

-(void)doSomeTask{
    
}


@end
