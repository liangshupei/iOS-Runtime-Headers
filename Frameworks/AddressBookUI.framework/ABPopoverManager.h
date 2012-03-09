/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIWindow, UIResponder, UIActionSheet, UIView, UIBarButtonItem, UIPopoverController, <ABPopoverRepresentDelegate>;

@interface ABPopoverManager : NSObject  {
    UIView *_autorotateView;
    UIResponder *_autorotateResponder;
    UIBarButtonItem *_autorotateBarButtonItem;
    unsigned int _autorotateDirections;
    UIPopoverController *_autorotatePopoverController;
    UIActionSheet *_autorotateActionSheet;
    <ABPopoverRepresentDelegate> *_representDelegate;
    id _realDelegate;
    BOOL _rotating;
}

@property(readonly) UIWindow * observedWindow;
@property(retain) <ABPopoverRepresentDelegate> * representDelegate;
@property(retain) id realDelegate;
@property(retain) UIActionSheet * autorotateActionSheet;
@property(retain) UIPopoverController * autorotatePopoverController;
@property unsigned int autorotateDirrections;
@property(retain) UIBarButtonItem * autorotateBarButtonItem;
@property(retain) UIResponder * autorotateResponder;
@property(retain) UIView * autorotateView;

+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 animated:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 dismissWithClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
+ (void)dismissPopoverForActionSheet:(id)arg1;
+ (BOOL)resignFirstResponderIfNeeded;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(unsigned int)arg4 animated:(BOOL)arg5;
+ (id)managerForPresenter:(id)arg1;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
+ (void)removeManagerForPresenter:(id)arg1;
+ (void)popoverController:(id)arg1 presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 permittedArrowDirections:(unsigned int)arg4 animated:(BOOL)arg5;
+ (void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(BOOL)arg3 autorotate:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(BOOL)arg3 direction:(unsigned int)arg4 autorotate:(BOOL)arg5;
+ (void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(BOOL)arg3 autorotate:(BOOL)arg4;
+ (void)actionSheet:(id)arg1 showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 animated:(BOOL)arg4 direction:(unsigned int)arg5 autorotate:(BOOL)arg6;
+ (void)popoverController:(id)arg1 dismissPopoverAnimated:(BOOL)arg2;
+ (void)popoverController:(id)arg1 presentPopoverFromView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 animated:(BOOL)arg4 representDelegate:(id)arg5;
+ (void)stopAutorotatePresenter:(id)arg1;

- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (id)autorotateActionSheet;
- (void)keyboardDidHide:(id)arg1;
- (id)autorotatePopoverController;
- (id)autorotateView;
- (unsigned int)autorotateDirrections;
- (void)setAutorotateResponder:(id)arg1;
- (id)autorotateResponder;
- (id)representDelegate;
- (id)observedWindow;
- (id)autorotateBarButtonItem;
- (void)stopAutorotate;
- (void)setRealDelegate:(id)arg1;
- (void)setAutorotateView:(id)arg1;
- (void)setAutorotateDirrections:(unsigned int)arg1;
- (void)setAutorotatePopoverController:(id)arg1;
- (void)setRepresentDelegate:(id)arg1;
- (void)startObservingRotationOfWindow:(id)arg1;
- (id)delegateOwner;
- (id)realDelegate;
- (void)stopObservingRotation;
- (void)revertDelegate;
- (void)setAutorotateBarButtonItem:(id)arg1;
- (void)setAutorotateActionSheet:(id)arg1;
- (void)startAutorotateActionSheet:(id)arg1 fromView:(id)arg2;
- (void)startAutorotateActionSheet:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)startAutorotatePopoverController:(id)arg1 showFromView:(id)arg2 permittedArrowDirections:(unsigned int)arg3 representDelegate:(id)arg4;
- (void)windowWillRotate:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)autorotates;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end