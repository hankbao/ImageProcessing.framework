//
//  ImageProcessingHelper.h
//  ImageProcessing
//
//  Created by Sekikawa Yusuke on 6/2/11.
//  Copyright 2011 Yusuke Sekikawa. All rights reserved.
//

//Other Tips is available at
//http://iphone.moo.jp/app/?p=707

#import <UIKit/UIKit.h>
<<<<<<< HEAD

//#define BUILD_FOR_FRAMEWORK
#ifdef BUILD_FOR_FRAMEWORK
#include <opencv/cv.h>
#endif
=======
#include <opencv/cv.h>
#import "debugMacros.h"
>>>>>>> 6b3149e71160485a21af43630cb6366a63ac8ccb


typedef struct {
	uint8_t *imagePtr;
	int height;
	int width;
	int bytesPerRow;
	CFDataRef data;
    CGDataProviderRef dataProvider;
} _imageInfo;


@interface ImageProcessingHelper : NSObject {
    
}
+ (_imageInfo) getImagePointer:(UIImage *)sourceImage;
+ (UIImage*)getUIImageFromPtr:(_imageInfo*)info;
+ (UIImage*)getGrayUIImageFromPtr:(_imageInfo*)info;

+ (UIImage*)imageWithBundleName:(NSString*)name type:(NSString*)type;
+ (UIImage*)resizedImage:(UIImage *)img size:(CGSize)size;
+ (UIImage *) rotateImage:(UIImage *)img angle:(int)angle;
<<<<<<< HEAD
#ifdef BUILD_FOR_FRAMEWORK
IplImage* createIplImageFromUIImage(UIImage* image,int8_t colorSpaceType);
UIImage* createUIImageFromIplImage(IplImage *image,int8_t colorSpaceType);
#endif
=======
IplImage* createIplImageFromUIImage(UIImage* image,int8_t colorSpaceType);
UIImage* createUIImageFromIplImage(IplImage *image,int8_t colorSpaceType);
>>>>>>> 6b3149e71160485a21af43630cb6366a63ac8ccb
@end
