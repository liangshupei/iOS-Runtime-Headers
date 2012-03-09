/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSCondition;

@interface AVCallbackHandler : NSObject  {
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property id target;
@property SEL action;
@property SEL mainThreadAction;


- (void)setTarget:(id)arg1;
- (SEL)action;
- (id)target;
- (id)init;
- (void)dealloc;
- (void)setMainThreadAction:(SEL)arg1;
- (BOOL)hasParams;
- (id)waitForCallbackParams;
- (void)setCallbackParams:(id)arg1;
- (SEL)mainThreadAction;
- (void)setAction:(SEL)arg1;

@end