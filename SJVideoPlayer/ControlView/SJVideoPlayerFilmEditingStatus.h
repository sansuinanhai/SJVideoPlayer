//
//  SJVideoPlayerFilmEditingStatus.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2018/4/11.
//  Copyright © 2018年 SanJiang. All rights reserved.
//

#ifndef SJVideoPlayerFilmEditingStatus_h
#define SJVideoPlayerFilmEditingStatus_h
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, SJVideoPlayerFilmEditingStatus) {
    SJVideoPlayerFilmEditingStatus_Unknown,
    SJVideoPlayerFilmEditingStatus_Recording,
    SJVideoPlayerFilmEditingStatus_Cancelled,
    SJVideoPlayerFilmEditingStatus_Paused,
    SJVideoPlayerFilmEditingStatus_Finished,
};


@protocol SJVideoPlayerExportVideoDelegate <NSObject>

- (void)exportedVideo:(NSURL *)sandboxPath thumbnailImage:(UIImage *)thumbnailImage;

- (void)generatedGIF:(NSURL *)sandboxPath image_GIF:(UIImage *)image_GIF thumbnailImage:(UIImage *)thumbnailImage;

@end

#endif /* SJVideoPlayerFilmEditingStatus_h */
