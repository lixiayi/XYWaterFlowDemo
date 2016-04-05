//
//  ImageWaterView.h
//  XYWaterFlowDemo
//
//  Created by gpay on 16/3/16.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SelfImageVIew.h"

#define SPACE 4
#define WIDTH [UIScreen mainScreen].bounds.size.width/3

@interface ImageWaterView : UIScrollView<ImageDelegate> {
    UIView *firstView,*secondView,*thridView;
    int higher,lower,row;
    float highValue;
    int countImage;
}

// 对象图像数组
@property (nonatomic, strong) NSArray *arrayImage;

// 初始化
- (id)initWithDataArray:(NSArray *)array withFrame:(CGRect)rect;

// 刷新瀑布流
- (void)refreshView:(NSArray *)array;

// 加载下一个瀑布流
- (void)loadNextPage:(NSArray *)array;
@end

