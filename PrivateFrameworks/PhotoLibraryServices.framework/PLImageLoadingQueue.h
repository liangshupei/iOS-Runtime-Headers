/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageCache, NSLock, <PLImageLoadingQueueDelegate>;

@interface PLImageLoadingQueue : NSObject  {
    <PLImageLoadingQueueDelegate> *_delegate;
    PLImageCache *_cache;
    NSLock *_lock;
}

@property <PLImageLoadingQueueDelegate> * delegate;


- (void)dealloc;
- (void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(BOOL)arg4;
- (id)initWithImageCache:(id)arg1;
- (void)stopLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(id)arg4;
- (void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(id)arg5;
- (void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2;
- (id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4;
- (void)resumeLoading;
- (void)pauseLoading;

@end