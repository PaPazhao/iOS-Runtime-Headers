/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSString * answer;
@property(retain) SAGKSpeakableAnswer * speakableAnswer;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)answer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAnswer:(id)arg1;
- (void)setSpeakableAnswer:(id)arg1;
- (id)speakableAnswer;

@end