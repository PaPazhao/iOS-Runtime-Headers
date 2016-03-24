/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer {
    int _action;
    PUDuplicateActionController *_duplicateActionController;
}

@property (nonatomic) int action;
@property (nonatomic, retain) PUDuplicateActionController *duplicateActionController;

+ (BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (int)action;
- (id)duplicateActionController;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAction:(int)arg1;
- (void)setDuplicateActionController:(id)arg1;

@end