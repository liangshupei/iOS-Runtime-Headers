/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class FigCaptureStillImageSettings, NSArray, NSDictionary, NSString;

@interface BWHDRNode : BWNode <BWBracketSettingsProvider> {
    int (*_createSampleBufferProcessorFunction)();
    int _bracketCount;
    int _clientPID;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    NSArray *_exposureValues;
    struct opaqueCMSampleBuffer {} *_pendingBracketBuffers[3];
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_sensorIDDictionary;
    bool_preBracketedFrameReceived;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (int)_setupSampleBufferProcessor;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end