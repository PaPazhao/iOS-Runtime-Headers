/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPGraphicObject;

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGColor { } *backgroundColor;
    unsigned int backgroundGraphicCount;
    CPGraphicObject **backgroundGraphics;
    unsigned int columnCount;
    float *columnX;
    BOOL disposed;
    unsigned int rowCount;
    float *rowY;
    } tableBounds;
    unsigned int usedGraphicCount;
}

@property(readonly) unsigned int backgroundGraphicCount;
@property unsigned int columnCount;
@property(readonly) float* columnX;
@property unsigned int rowCount;
@property(readonly) float* rowY;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } tableBounds;

- (struct CGColor { }*)backgroundColor;
- (id)backgroundGraphicAtIndex:(unsigned int)arg1;
- (unsigned int)backgroundGraphicCount;
- (unsigned int)columnCount;
- (float*)columnX;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)incrementUsedGraphicCount;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)rowCount;
- (float*)rowY;
- (void)setBackgroundGraphics:(id)arg1;
- (void)setColumnCount:(unsigned int)arg1;
- (void)setRowCount:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableBounds;
- (unsigned int)usedGraphicCount;

@end