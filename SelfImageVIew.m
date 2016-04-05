//
//  SelfImageVIew.m
//  XYWaterFlowDemo
//
//  Created by gpay on 16/3/16.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import "SelfImageVIew.h"

@implementation SelfImageVIew

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
    }
    return self;
}

-(id)initWithImageInfo:(ImageInfo*)imageInfo y:(float)y withA:(int)a {
    float imageW = imageInfo.width;
    float imageH = imageInfo.height;
    float width = WIDTH - SPACE;
    float height = width * imageH / imageW;

    self = [super initWithFrame:CGRectMake(0, y, WIDTH, height + SPACE)];
    if (self) {
        self.data = imageInfo;
        UIImageView *imageView = [[UIImageView alloc] initWithFrame:CGRectMake(SPACE / 2, SPACE / 2, width, height)];
        
        NSURL *url = [NSURL URLWithString:imageInfo.thumbURL];
        [imageView setImageWithURL:url placeholderImage:nil];
        
        imageView.backgroundColor = [UIColor greenColor];
         [self addSubview:imageView];
        
    }
    return self;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.delegate clickImage:self.data];
}
@end
