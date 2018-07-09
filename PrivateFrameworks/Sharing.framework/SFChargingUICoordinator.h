/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingUICoordinator : SFXPCClient {
    bool  _activateCalled;
    long long  _defaultDuration;
    bool  _invalidateCalled;
    NSDate * _syncMaxDate;
    NSDate * _syncRequestDate;
    NSObject<OS_dispatch_source> * _syncTimer;
    id /* block */  _syncUIHandler;
}

@property (nonatomic) long long defaultDuration;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)_requestToDismissUIHandler:(id /* block */)arg1;
- (void)_requestToShowUIWithHandler:(id /* block */)arg1;
- (void)_sendUISyncDate:(id)arg1;
- (void)_syncHandleShowUIDate:(id)arg1;
- (void)_syncTimerInvalidateSync;
- (void)_syncTimerRestartSyncWithTimeout:(double)arg1;
- (void)activate;
- (long long)defaultDuration;
- (id)exportedInterface;
- (void)invalidate;
- (id)machServiceName;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (id)remoteObjectInterface;
- (void)requestToDismissUIHandler:(id /* block */)arg1;
- (void)requestToShowUIWithHandler:(id /* block */)arg1;
- (void)sendUICoordinationDate:(id)arg1;
- (void)sendUISyncDate:(id)arg1;
- (void)sendUISyncDateDirect:(id)arg1;
- (void)setDefaultDuration:(long long)arg1;
- (bool)shouldEscapeXpcTryCatch;

@end