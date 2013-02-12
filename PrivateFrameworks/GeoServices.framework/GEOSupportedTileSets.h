/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable {
    NSMutableArray *_tileSets;
}

@property(retain) NSMutableArray * tileSets;

- (void)addTileSet:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)tileSetAtIndex:(unsigned int)arg1;
- (id)tileSets;
- (unsigned int)tileSetsCount;
- (void)writeTo:(id)arg1;

@end