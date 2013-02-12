/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject;

@interface CPPair : NSObject {
    NSObject *m_first;
    BOOL m_firstIsWrapped;
    NSObject *m_second;
    BOOL m_secondIsWrapped;
}

+ (id)pairWithFirst:(id)arg1 andSecond:(id)arg2;
+ (id)pairWithFirst:(id)arg1 andSecondPointer:(id)arg2;
+ (id)pairWithFirstPointer:(id)arg1 andSecond:(id)arg2;
+ (id)pairWithFirstPointer:(id)arg1 andSecondPointer:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)first;
- (NSUInteger)hash;
- (id)initWithFirst:(id)arg1 andSecond:(id)arg2;
- (id)initWithFirst:(id)arg1 andSecondPointer:(id)arg2;
- (id)initWithFirstPointer:(id)arg1 andSecond:(id)arg2;
- (id)initWithFirstPointer:(id)arg1 andSecondPointer:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)second;

@end
