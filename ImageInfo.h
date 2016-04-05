//
//  ImageInfo.h
//  XYWaterFlowDemo
//
//  Created by gpay on 16/3/16.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ImageInfo : NSObject

@property (nonatomic) float height;
@property (nonatomic) float width;
@property (nonatomic, strong) NSString *thumbURL;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
