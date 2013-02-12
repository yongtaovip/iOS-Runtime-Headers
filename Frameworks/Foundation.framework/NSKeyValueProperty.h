/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueContainerClass, NSString;

@interface NSKeyValueProperty : NSObject {
    NSKeyValueContainerClass *_containerClass;
    NSString *_keyPath;
}

- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet { }*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (Class)isaForAutonotifying;
- (id)keyPath;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; })arg4;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; }*)arg4;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;

@end
