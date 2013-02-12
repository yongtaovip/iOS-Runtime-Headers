/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransition : CAAnimation {
}

@property(copy) NSString *subtype;
@property(copy) NSString *type;
@property float endProgress;
@property(retain) id filter;
@property float startProgress;
@property NSUInteger transitionFlags;

- (void*)CA_copyRenderValue;
- (float)endProgress;
- (id)filter;
- (void)setEndProgress:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setStartProgress:(float)arg1;
- (void)setSubtype:(id)arg1;
- (void)setTransitionFlags:(NSUInteger)arg1;
- (void)setType:(id)arg1;
- (float)startProgress;
- (id)subtype;
- (NSUInteger)transitionFlags;
- (id)type;

@end
