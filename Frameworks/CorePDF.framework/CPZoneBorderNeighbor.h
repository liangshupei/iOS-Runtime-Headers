/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying> {
    CPShape *neighborShape;
    NSInteger shapeSide;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)neighborShape;
- (void)setNeighborShape:(id)arg1;
- (void)setShapeSide:(NSInteger)arg1;
- (NSInteger)shapeSide;

@end