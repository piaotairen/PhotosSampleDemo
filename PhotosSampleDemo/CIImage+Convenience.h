/*
 Created by Zihai on 15/11/24.
 Copyright © 2015年 Zihai. All rights reserved.
 
 Abstract:
 A category on CIImage for convienience methods.
 */

@import CoreImage;

@interface CIImage (Convenience)

- (NSData *)pl_jpegRepresentationWithCompressionQuality:(CGFloat)compressionQuality;

@end
