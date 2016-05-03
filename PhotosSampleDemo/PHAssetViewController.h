/*
 Created by Zihai on 15/11/24.
 Copyright © 2015年 Zihai. All rights reserved.
 
 Abstract:
 A view controller displaying an asset full screen.
 */

@import UIKit;
@import Photos;


@interface PHAssetViewController : UIViewController

@property (nonatomic, strong) PHAsset *asset;
@property (nonatomic, strong) PHAssetCollection *assetCollection;

@end
