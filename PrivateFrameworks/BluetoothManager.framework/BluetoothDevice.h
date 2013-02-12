/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSString;

@interface BluetoothDevice : NSObject {
    NSString *_address;
    struct BTDeviceImpl { } *_device;
    NSString *_name;
}

- (void)_setDirty;
- (id)address;
- (BOOL)available;
- (NSInteger)batteryLevel;
- (NSInteger)compare:(id)arg1;
- (void)connect;
- (BOOL)connected;
- (void)dealloc;
- (id)description;
- (struct BTDeviceImpl { }*)device;
- (void)disconnect;
- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (BOOL)isAccessory;
- (BOOL)isServiceSupported:(NSUInteger)arg1;
- (id)name;
- (BOOL)paired;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (void)setPIN:(id)arg1;
- (BOOL)supportsBatteryLevel;
- (NSInteger)type;
- (void)unpair;

@end
