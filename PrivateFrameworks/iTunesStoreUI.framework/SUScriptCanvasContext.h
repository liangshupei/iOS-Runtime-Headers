/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUScriptColor;

@interface SUScriptCanvasContext : SUScriptObject {
    struct CGContext { } *_context;
    struct CGPath { } *_contextPath;
    id _fillStyle;
    int _fillStyleType;
    float _height;
    float _shadowBlur;
    SUScriptColor *_shadowColor;
    float _shadowOffsetX;
    float _shadowOffsetY;
    id _strokeStyle;
    int _strokeStyleType;
    float _width;
}

@property(retain) id fillStyle;
@property float globalAlpha;
@property(retain) NSString * globalCompositeOperation;
@property(readonly) float height;
@property(retain) id lineCap;
@property(retain) id lineJoin;
@property float lineWidth;
@property float miterLimit;
@property float shadowBlur;
@property(retain) id shadowColor;
@property float shadowOffsetX;
@property float shadowOffsetY;
@property(retain) id strokeStyle;
@property(readonly) float width;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_ntsApplyShadow;
- (void)arcToX1:(float)arg1 y1:(float)arg2 x2:(float)arg3 y2:(float)arg4 radius:(float)arg5;
- (void)arcWithX:(float)arg1 y:(float)arg2 radius:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 antiClockwise:(BOOL)arg6;
- (id)attributeKeys;
- (void)beginPath;
- (void)bezierCurveToCP1X:(float)arg1 cp1y:(float)arg2 cp2x:(float)arg3 cp2y:(float)arg4 x:(float)arg5 y:(float)arg6;
- (void)clearRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)clip;
- (void)closePath;
- (struct CGImage { }*)copyCanvasImage;
- (struct CGPath { }*)copyCanvasPath;
- (void)dealloc;
- (void)fill;
- (void)fillRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (id)fillStyle;
- (float)globalAlpha;
- (id)globalCompositeOperation;
- (float)height;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (BOOL)isPointInPathWithX:(float)arg1 y:(float)arg2;
- (id)lineCap;
- (id)lineJoin;
- (void)lineToX:(float)arg1 y:(float)arg2;
- (float)lineWidth;
- (id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (float)miterLimit;
- (void)moveToX:(float)arg1 y:(float)arg2;
- (void)quadraticCurveToCPX:(float)arg1 cpy:(float)arg2 x:(float)arg3 y:(float)arg4;
- (void)restoreState;
- (void)rotateWithAngle:(float)arg1;
- (void)saveState;
- (void)scaleWithX:(float)arg1 y:(float)arg2;
- (id)scriptAttributeKeys;
- (void)setFillStyle:(id)arg1;
- (void)setGlobalAlpha:(float)arg1;
- (void)setGlobalCompositeOperation:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffsetX:(float)arg1;
- (void)setShadowOffsetY:(float)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setTransformWithM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (float)shadowBlur;
- (id)shadowColor;
- (float)shadowOffsetX;
- (float)shadowOffsetY;
- (void)stroke;
- (void)strokeRectWithX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (id)strokeStyle;
- (void)transformWithM11:(float)arg1 m12:(float)arg2 m21:(float)arg3 m22:(float)arg4 dx:(float)arg5 dy:(float)arg6;
- (void)translateWithX:(float)arg1 y:(float)arg2;
- (float)width;

@end