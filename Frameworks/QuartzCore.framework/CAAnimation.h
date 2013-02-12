/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAAnimation : NSObject <NSCopying, CAMediaTiming, CAAction, NSMutableCopying, CAPropertyInfo> {
    struct _CAAttrList { } *_attr;
    NSUInteger _flags;
}

@property(copy) NSString *fillMode;
@property(retain) CAMediaTimingFunction *timingFunction;
@property BOOL autoreverses;
@property double beginTime;
@property(retain) id delegate;
@property double duration;
@property(getter=isEnabled) BOOL enabled;
@property double frameInterval;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property float repeatCount;
@property double repeatDuration;
@property float speed;
@property double timeOffset;

+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (id)animation;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;

- (double)_mapTime:(double)arg1 repeatIndex:(NSInteger*)arg2;
- (struct _CARenderAnimation { struct { NSInteger x_1_1_1; } x1; float x2; struct _CARenderTiming {} *x3; struct _CARenderVector {} *x4; void *x5; NSUInteger x6; union { struct _CARenderArray {} *x_7_1_1; void *x_7_1_2; struct { void *x_3_2_1; void *x_3_2_2; void *x_3_2_3; void *x_3_2_4; float x_3_2_5; float x_3_2_6; } x_7_1_3; struct { void *x_4_2_1; struct _CARenderArray {} *x_4_2_2; struct _CARenderVector {} *x_4_2_3; struct _CARenderPath {} *x_4_2_4; unsigned char x_4_2_5; } x_7_1_4; struct { NSUInteger x_5_2_1; NSUInteger x_5_2_2; float x_5_2_3; float x_5_2_4; struct _CARenderFilter {} *x_5_2_5; void *x_5_2_6; NSUInteger x_5_2_7; NSUInteger x_5_2_8; } x_7_1_5; } x7; }*)_setCARenderAnimation:(struct _CARenderAnimation { struct { NSInteger x_1_1_1; } x1; float x2; struct _CARenderTiming {} *x3; struct _CARenderVector {} *x4; void *x5; NSUInteger x6; union { struct _CARenderArray {} *x_7_1_1; void *x_7_1_2; struct { void *x_3_2_1; void *x_3_2_2; void *x_3_2_3; void *x_3_2_4; float x_3_2_5; float x_3_2_6; } x_7_1_3; struct { void *x_4_2_1; struct _CARenderArray {} *x_4_2_2; struct _CARenderVector {} *x_4_2_3; struct _CARenderPath {} *x_4_2_4; unsigned char x_4_2_5; } x_7_1_4; struct { NSUInteger x_5_2_1; NSUInteger x_5_2_2; float x_5_2_3; float x_5_2_4; struct _CARenderFilter {} *x_5_2_5; void *x_5_2_6; NSUInteger x_5_2_7; NSUInteger x_5_2_8; } x_7_1_5; } x7; }*)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)autoreverses;
- (double)beginTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)didChangeValueForKey:(id)arg1;
- (double)duration;
- (id)fillMode;
- (double)frameInterval;
- (BOOL)isEnabled;
- (BOOL)isRemovedOnCompletion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)removedOnCompletion;
- (float)repeatCount;
- (double)repeatDuration;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setDefaultDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (float)speed;
- (double)timeOffset;
- (id)timingFunction;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;

@end
