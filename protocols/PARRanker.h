/* Generated by RuntimeBrowser.
 */

@protocol PARRanker <NSObject>

@required

- (PARRankerParameters *)parameters;
- (void)rank:(PARResponse *)arg1;
- (void)rank:(PARResponse *)arg1 enableSectionRanking:(BOOL)arg2;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2;
- (void)rank:(PARResponse *)arg1 withAlgorithms:(NSDictionary *)arg2 enableSectionRanking:(BOOL)arg3;

@end