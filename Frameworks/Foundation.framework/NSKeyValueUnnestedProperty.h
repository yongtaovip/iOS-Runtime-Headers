/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
    NSArray *_affectingProperties;
    Class _cachedIsaForAutonotifying;
    BOOL _cachedIsaForAutonotifyingIsValid;
}

- (void)_addDependentValueKey:(id)arg1;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { }*)arg1 getAffectingProperties:(id)arg2;
- (id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(struct __CFSet { }*)arg3;
- (Class)_isaForAutonotifying;
- (id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (Class)isaForAutonotifying;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; })arg4;
- (BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 forwardingValues:(struct { id x1; id x2; }*)arg4;

@end
