/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {
    NSString * _author;
    NSString * _caption;
    BOOL  _displayFullPhotoInline;
    struct { 
        unsigned int displayFullPhotoInline : 1; 
    }  _has;
    NSString * _licenseDescription;
    NSString * _licenseUrl;
    GEOPDPhoto * _photo;
}

@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic) BOOL displayFullPhotoInline;
@property (nonatomic, readonly) BOOL hasAuthor;
@property (nonatomic, readonly) BOOL hasCaption;
@property (nonatomic) BOOL hasDisplayFullPhotoInline;
@property (nonatomic, readonly) BOOL hasLicenseDescription;
@property (nonatomic, readonly) BOOL hasLicenseUrl;
@property (nonatomic, readonly) BOOL hasPhoto;
@property (nonatomic, retain) NSString *licenseDescription;
@property (nonatomic, retain) NSString *licenseUrl;
@property (nonatomic, retain) GEOPDPhoto *photo;

+ (id)captionedPhotosForPlaceData:(id)arg1;

- (id)author;
- (id)caption;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)displayFullPhotoInline;
- (BOOL)hasAuthor;
- (BOOL)hasCaption;
- (BOOL)hasDisplayFullPhotoInline;
- (BOOL)hasLicenseDescription;
- (BOOL)hasLicenseUrl;
- (BOOL)hasPhoto;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)licenseDescription;
- (id)licenseUrl;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (BOOL)readFrom:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setDisplayFullPhotoInline:(BOOL)arg1;
- (void)setHasDisplayFullPhotoInline:(BOOL)arg1;
- (void)setLicenseDescription:(id)arg1;
- (void)setLicenseUrl:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)writeTo:(id)arg1;

@end
