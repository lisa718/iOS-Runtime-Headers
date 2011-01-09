/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureOutputInternal;



@interface AVCaptureOutput : NSObject 
{
    AVCaptureOutputInternal *_outputInternal;
}

@property(readonly) NSArray *connections;


- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)removeConnection:(id)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (NSInteger)changeSeed;
- (void)bumpChangeSeed;
- (id)notReadyError;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)activeConnections;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (id)connections;
- (id)init;
- (void)dealloc;
- (id)session;
- (void)setSession:(id)arg1;

@end