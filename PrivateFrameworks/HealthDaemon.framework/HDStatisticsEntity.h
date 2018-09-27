/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsEntity : HDHealthEntity

+ (id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
+ (id)foreignKeys;
+ (Class)ownerEntityClass;
+ (id)ownerEntityReferenceColumn;
+ (long long)protectionClass;
+ (bool)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (bool)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id*)arg3 transaction:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;

@end