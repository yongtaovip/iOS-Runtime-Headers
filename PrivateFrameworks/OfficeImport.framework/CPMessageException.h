/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPMessageEntry;

@interface CPMessageException : NSException {
    CPMessageEntry *m_entry;
}

+ (id)exceptionWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (void)initialize;
+ (void)raise:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
+ (void)raiseUntaggedMessage:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)getEntry;
- (id)initWithMessage:(struct CPTaggedMessageStructure { NSInteger x1; id x2; }*)arg1;
- (id)initWithUntaggedMessage:(id)arg1;

@end
