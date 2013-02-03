/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLPhoto : MLPhoto <PLConnectionObjectInteraction> {
    unsigned int _didSetDuration : 1;
    double _captureTime;
    NSUInteger _changeFlags;
    NSString *_directory;
    double _duration;
    NSString *_filename;
    BOOL _flagged;
    short _height;
    double _latitude;
    double _longitude;
    BOOL _orientation;
    NSInteger _primaryKey;
    double _recordModDate;
    NSInteger _thumbnailIndex;
    NSString *_title;
    BOOL _type;
    BOOL _userRating;
    short _width;
}

+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (Class)classFromStepData:(struct sqlite3_stmt { }*)arg1;
+ (NSInteger)createTablesForConnection:(id)arg1;
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)photoWithDefaultValues;
+ (id)photoWithValuesFromDictionary:(id)arg1;

- (id)_createImageForFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (void)_setPrimaryKey:(NSInteger)arg1;
- (BOOL)allowsRotation;
- (void)assignDatabaseValuesFromDictionary:(id)arg1;
- (double)captureTime;
- (NSUInteger)changeFlags;
- (void)clearChangeFlags;
- (id)dataForFormat:(NSInteger)arg1 width:(NSInteger*)arg2 height:(NSInteger*)arg3 bytesPerRow:(NSInteger*)arg4 dataWidth:(NSInteger*)arg5 dataHeight:(NSInteger*)arg6 imageDataOffset:(NSInteger*)arg7;
- (id)databaseValuesAsDictionary;
- (void)dealloc;
- (id)description;
- (id)directory;
- (double)duration;
- (double)durationInMilliseconds;
- (id)fileExtension;
- (id)fileExtensions;
- (id)filename;
- (BOOL)flagged;
- (id)fullSizeImagePath;
- (BOOL)hasFullSizeImageData;
- (short)height;
- (NSInteger)imageID;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)imageSourceTypeHint;
- (id)init;
- (id)initWithStepData:(struct sqlite3_stmt { }*)arg1;
- (BOOL)isEditable;
- (double)latitude;
- (double)longitude;
- (NSInteger)orientation;
- (id)pathForFullSizeImage;
- (id)pathForImageFormat:(NSInteger)arg1;
- (id)pathForLowResolutionFile;
- (id)pathForMetadataDirectory;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)pathForOriginalFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForThumbnailFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)pathToLargeThumbnail;
- (NSInteger)photoType;
- (NSInteger)primaryKey;
- (double)recordModDate;
- (NSInteger)saveAuxToConnection:(id)arg1 insert:(BOOL)arg2;
- (NSInteger)saveToConnection:(id)arg1;
- (void)setCaptureTime:(double)arg1;
- (void)setDirectory:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationInMilliseconds:(double)arg1;
- (void)setFilename:(id)arg1;
- (void)setFlagged:(BOOL)arg1;
- (void)setHeight:(short)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setRecordModDate:(double)arg1;
- (void)setRecordModDate;
- (void)setThumbnailIndex:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setUserRating:(BOOL)arg1;
- (void)setWidth:(short)arg1;
- (NSInteger)thumbnailIndex;
- (id)title;
- (NSInteger)type;
- (BOOL)userRating;
- (short)width;

@end