/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate> {
    UIKeyboardEmojiKeyView * _categoryView;
    UIKeyboardEmojiKeyView * _inputView;
    UIKeyboardEmojiCategory * _lastViewedCategory;
}

@property (nonatomic, retain) UIKeyboardEmojiKeyView *categoryView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIKeyboardEmojiKeyView *inputView;
@property UIKeyboardEmojiCategory *lastViewedCategory;
@property (readonly) Class superclass;

+ (Class)classForCategoryControl;
+ (Class)classForInputView;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (id)categoryView;
- (void)dealloc;
- (void)emojiUsed:(id)arg1;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (BOOL)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)init;
- (id)inputView;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (id)lastViewedCategory;
- (int)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
- (id)recentEmojiAtIndex:(int)arg1 size:(unsigned int*)arg2;
- (id)recents;
- (int)reloadCategoryForOffsetPercentage:(float)arg1 withSender:(id)arg2;
- (void)reloadForCategory:(int)arg1 withSender:(id)arg2;
- (void)setCategoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLastViewedCategory:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;

@end