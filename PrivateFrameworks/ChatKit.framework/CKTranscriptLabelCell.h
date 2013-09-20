/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, UILabel;

@interface CKTranscriptLabelCell : CKTranscriptCell {
    UILabel *_label;
}

@property(copy) NSAttributedString * attributedText;
@property(retain) UILabel * label;

- (id)attributedText;
- (void)configureForRowObject:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)startZoomInAnimation;

@end