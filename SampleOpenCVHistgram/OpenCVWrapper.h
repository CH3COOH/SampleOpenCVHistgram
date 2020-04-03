//
//  OpenCVWrapper.h
//  SampleOpenCVHistgram
//
//  Created by KENJI WADA on 2020/04/03.
//  Copyright © 2020 ch3cooh.jp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject

+ (void) makeHistgramFromImage:(UIImage*)image;
//+ (IplImage *)createIplImageFromUIImage:(UIImage *)uiImage;

@end

NS_ASSUME_NONNULL_END
