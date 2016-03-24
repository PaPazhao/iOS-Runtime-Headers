/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {
    HDCodableRoutineLocationRequest *_fetchLocationRequest;
    struct { 
        unsigned int requestType : 1; 
    } _has;
    NSString *_requestIdentifier;
    int _requestType;
    HDCodableRoutineScenarioTriggeredRequest *_scenarioTriggeredRequest;
}

@property (nonatomic, retain) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (nonatomic, readonly) BOOL hasFetchLocationRequest;
@property (nonatomic, readonly) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic, readonly) BOOL hasScenarioTriggeredRequest;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int requestType;
@property (nonatomic, retain) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchLocationRequest;
- (BOOL)hasFetchLocationRequest;
- (BOOL)hasRequestIdentifier;
- (BOOL)hasRequestType;
- (BOOL)hasScenarioTriggeredRequest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestIdentifier;
- (int)requestType;
- (id)scenarioTriggeredRequest;
- (void)setFetchLocationRequest:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setScenarioTriggeredRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end