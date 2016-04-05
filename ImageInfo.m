//
//  ImageInfo.m
//  XYWaterFlowDemo
//
//  Created by gpay on 16/3/16.
//  Copyright © 2016年 xiaoyi li. All rights reserved.
//

#import "ImageInfo.h"

@implementation ImageInfo


- (id)initWithDictionary:(NSDictionary *)dictionary {
    self = [super init];
    if (self) {
        self.thumbURL = [dictionary objectForKey:@"thumbURL"];
        self.width = [[dictionary objectForKey:@"width"]floatValue];
        self.height = [[dictionary objectForKey:@"height"]floatValue];
    }
    return self;
}

- (NSString *)description {
     return [NSString stringWithFormat:@"thumbURL:%@ width:%f height:%f",self.thumbURL,self.width,self.height];
}

@end
