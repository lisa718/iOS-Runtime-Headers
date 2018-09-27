/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportParameters : NSObject <NSCopying> {
    HMDDataStreamTransportTcpListeningPort * _tcpListeningPort;
}

@property (nonatomic, retain) HMDDataStreamTransportTcpListeningPort *tcpListeningPort;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithTcpListeningPort:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setTcpListeningPort:(id)arg1;
- (id)tcpListeningPort;

@end