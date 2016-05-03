/*
 Created by Zihai on 15/11/24.
 Copyright © 2015年 Zihai. All rights reserved.
 
 Abstract:
 A view controller displaying a grid of assets.
 */

@import UIKit;
@import Photos;

@interface PHAssetGridViewController : UICollectionViewController

@property (nonatomic, strong) PHFetchResult *assetsFetchResults;
@property (nonatomic, strong) PHAssetCollection *assetCollection;

@end
