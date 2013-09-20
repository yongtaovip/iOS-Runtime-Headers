/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class PLTelephonyConnection;

@interface PLTelephonyConnectedLogger : PLLogger {
    PLTelephonyConnection *telephonyConnection;
}

@property(retain) PLTelephonyConnection * telephonyConnection;

+ (id)loggerWithConnection:(id)arg1;

- (void)dealloc;
- (void)deregisterForAllTelephonyNotifications;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)registerCallback:(int (*)())arg1 forTelephonyNotification:(struct __CFString { }*)arg2;
- (void)setTelephonyConnection:(id)arg1;
- (id)telephonyConnection;

@end