//
//  SelfImageVIew.h
//  XYWaterFlowDemo
//
//  Created by gpay on 16/3/16.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ImageInfo.h"
#import "UIImageView+WebCache.h"

#define SPACE 4
#define WIDTH [UIScreen mainScreen].bounds.size.width/3

@protocol ImageDelegate <NSObject>

- (void)clickImage:(ImageInfo *)data;

@end


@interface SelfImageVIew : UIView

@property (nonatomic,weak)      id<ImageDelegate> delegate;
@property (nonatomic,strong)    ImageInfo *data;


-(id)initWithImageInfo:(ImageInfo*)imageInfo y:(float)y withA:(int)a;
@end
