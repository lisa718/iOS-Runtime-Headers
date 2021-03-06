/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest {
    NSString * _VPNUUIDString;
    NSDictionary * _configuration;
    unsigned long long  _managementOptions;
    NSString * _originator;
}

@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) unsigned long long managementOptions;
@property (nonatomic, copy) NSString *originator;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)VPNUUIDString;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)managementOptions;
- (id)originator;
- (void)setConfiguration:(id)arg1;
- (void)setManagementOptions:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setVPNUUIDString:(id)arg1;

@end
