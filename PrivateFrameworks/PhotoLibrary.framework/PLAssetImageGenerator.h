/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {
    AVAssetImageGenerator *_imageGenerator;
    BOOL _inUse;
}

@property(retain) AVAssetImageGenerator * imageGenerator;
@property BOOL inUse;

- (void)dealloc;
- (id)imageGenerator;
- (BOOL)inUse;
- (id)initWithAsset:(id)arg1;
- (void)setImageGenerator:(id)arg1;
- (void)setInUse:(BOOL)arg1;

@end