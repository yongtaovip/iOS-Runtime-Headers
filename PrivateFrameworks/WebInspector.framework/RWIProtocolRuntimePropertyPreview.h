/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic) BOOL internal;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int subtype;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, retain) RWIProtocolRuntimeObjectPreview *valuePreview;

- (id)initWithName:(id)arg1 type:(int)arg2;
- (BOOL)internal;
- (id)name;
- (void)setInternal:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSubtype:(int)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (void)setValuePreview:(id)arg1;
- (int)subtype;
- (int)type;
- (id)value;
- (id)valuePreview;

@end