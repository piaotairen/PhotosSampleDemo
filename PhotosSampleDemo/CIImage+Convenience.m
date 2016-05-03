/*
 Created by Zihai on 15/11/24.
 Copyright © 2015年 Zihai. All rights reserved.
 
 Abstract:
 A category on CIImage for convienience methods.
 */

@import UIKit;
#import "CIImage+Convenience.h"

@implementation CIImage (Convenience)

- (NSData *)pl_jpegRepresentationWithCompressionQuality:(CGFloat)compressionQuality {
    static CIContext *ciContext = nil;
    if (!ciContext) {
        EAGLContext *eaglContext = [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2];
        ciContext = [CIContext contextWithEAGLContext:eaglContext];
    }
    CGImageRef outputImageRef = [ciContext createCGImage:self fromRect:[self extent]];
    UIImage *uiImage = [[UIImage alloc] initWithCGImage:outputImageRef scale:1.0 orientation:UIImageOrientationUp];
    if (outputImageRef) {
        CGImageRelease(outputImageRef);
    }
    NSData *jpegRepresentation = UIImageJPEGRepresentation(uiImage, compressionQuality);
    return jpegRepresentation;
}

@end
