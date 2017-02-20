/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <NSCopying> {
    long long  _bedtimeAlarmNightCount;
    long long  _bedtimeChangesCount;
    HDSleepAlarmAWDSleepAlarmStatistics * _bedtimeChangesMinutesStatistics;
    HDSleepAlarmAWDSleepAlarmStatistics * _bedtimeCorrectionMinutesStatistics;
    struct { 
        unsigned int bedtimeAlarmNightCount : 1; 
        unsigned int bedtimeChangesCount : 1; 
        unsigned int thirdPartySleepTrackerNightCount : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _thirdPartyBundleIdentifier;
    NSString * _thirdPartyDeviceManufacturer;
    NSString * _thirdPartyDeviceModel;
    long long  _thirdPartySleepTrackerNightCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long bedtimeAlarmNightCount;
@property (nonatomic) long long bedtimeChangesCount;
@property (nonatomic, retain) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeChangesMinutesStatistics;
@property (nonatomic, retain) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeCorrectionMinutesStatistics;
@property (nonatomic) BOOL hasBedtimeAlarmNightCount;
@property (nonatomic) BOOL hasBedtimeChangesCount;
@property (nonatomic, readonly) BOOL hasBedtimeChangesMinutesStatistics;
@property (nonatomic, readonly) BOOL hasBedtimeCorrectionMinutesStatistics;
@property (nonatomic, readonly) BOOL hasThirdPartyBundleIdentifier;
@property (nonatomic, readonly) BOOL hasThirdPartyDeviceManufacturer;
@property (nonatomic, readonly) BOOL hasThirdPartyDeviceModel;
@property (nonatomic) BOOL hasThirdPartySleepTrackerNightCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *thirdPartyBundleIdentifier;
@property (nonatomic, retain) NSString *thirdPartyDeviceManufacturer;
@property (nonatomic, retain) NSString *thirdPartyDeviceModel;
@property (nonatomic) long long thirdPartySleepTrackerNightCount;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (long long)bedtimeAlarmNightCount;
- (long long)bedtimeChangesCount;
- (id)bedtimeChangesMinutesStatistics;
- (id)bedtimeCorrectionMinutesStatistics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBedtimeAlarmNightCount;
- (BOOL)hasBedtimeChangesCount;
- (BOOL)hasBedtimeChangesMinutesStatistics;
- (BOOL)hasBedtimeCorrectionMinutesStatistics;
- (BOOL)hasThirdPartyBundleIdentifier;
- (BOOL)hasThirdPartyDeviceManufacturer;
- (BOOL)hasThirdPartyDeviceModel;
- (BOOL)hasThirdPartySleepTrackerNightCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBedtimeAlarmNightCount:(long long)arg1;
- (void)setBedtimeChangesCount:(long long)arg1;
- (void)setBedtimeChangesMinutesStatistics:(id)arg1;
- (void)setBedtimeCorrectionMinutesStatistics:(id)arg1;
- (void)setHasBedtimeAlarmNightCount:(BOOL)arg1;
- (void)setHasBedtimeChangesCount:(BOOL)arg1;
- (void)setHasThirdPartySleepTrackerNightCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setThirdPartyBundleIdentifier:(id)arg1;
- (void)setThirdPartyDeviceManufacturer:(id)arg1;
- (void)setThirdPartyDeviceModel:(id)arg1;
- (void)setThirdPartySleepTrackerNightCount:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)thirdPartyBundleIdentifier;
- (id)thirdPartyDeviceManufacturer;
- (id)thirdPartyDeviceModel;
- (long long)thirdPartySleepTrackerNightCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end