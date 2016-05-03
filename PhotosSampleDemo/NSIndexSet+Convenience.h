/*
 Created by Zihai on 15/11/24.
 Copyright © 2015年 Zihai. All rights reserved.
 
 Abstract:
 A category on NSIndexSet for convienience methods.
 */

@import Foundation;

@interface NSIndexSet (Convenience)

- (NSArray *)pl_indexPathsFromIndexesWithSection:(NSUInteger)section;

@end
