/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageManager : NSObject {
    struct OpaqueFigPhotoJPEGDecodeSession { } * _jpegDecoder;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

+ (BOOL)loggingEnabled;
+ (id)sharedImageManager;

- (long)convertPixelBuffer:(struct __CVBuffer {}**)arg1 toPixelFormat:(int)arg2;
- (long)createPixelBufferWithWidth:(unsigned long)arg1 height:(unsigned long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (id)dataForResource:(id)arg1;
- (void)dealloc;
- (long)decodeImageSource:(struct CGImageSource { }*)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (long)decodeJPEG:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (long)drawImage:(struct CGImage { }*)arg1 withOrientation:(unsigned int)arg2 maxDimension:(unsigned long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long)arg3;
- (id)init;
- (struct __CVBuffer { }*)pixelBufferForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long)arg3;

@end