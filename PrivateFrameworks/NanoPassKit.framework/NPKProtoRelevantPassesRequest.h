/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying> {
    NSMutableArray * _passRelevancyTuples;
}

@property (nonatomic, retain) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

- (void).cxx_destruct;
- (void)addPassRelevancyTuples:(id)arg1;
- (void)clearPassRelevancyTuples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned int)arg1;
- (unsigned int)passRelevancyTuplesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setPassRelevancyTuples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
