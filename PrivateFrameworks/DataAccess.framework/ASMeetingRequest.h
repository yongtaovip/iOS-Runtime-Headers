/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class ASEmailItem, NSDate, NSMutableDictionary, NSNumber, NSString;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
    NSString *_cachedParentFolderId;
    NSString *_cachedParentServerId;
    NSNumber *_instanceType;
    NSInteger _meetingClassType;
    ASEmailItem *_parentEmailItem;
    NSMutableDictionary *_placeHolder;
    NSDate *_recurrenceId;
}

- (BOOL)_bailIfNotNewestData;
- (void*)_copyFirstExchangeCalendarInFirstExchangeStore:(BOOL)arg1;
- (id)_defaultCalendarFolder;
- (void)_determineSelfness;
- (void)_setReminderSecsBefore:(id)arg1;
- (BOOL)_shouldKeepLocalExceptions;
- (void)applyPlaceHolder;
- (id)asParseRules;
- (BOOL)cachedOrganizerIsSelf;
- (id)cachedParentFolderId;
- (id)cachedParentServerId;
- (void)clearPlaceHolder;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceType;
- (NSInteger)meetingClassType;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5;
- (void)postProcessApplicationData;
- (id)recurrenceId;
- (BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 treatNullsAsDeletes:(BOOL)arg3;
- (void)setCachedParentFolderId:(id)arg1;
- (void)setCachedParentServerId:(id)arg1;
- (void)setDTStamp:(id)arg1;
- (void)setExceptionDate:(id)arg1;
- (void)setInstanceType:(id)arg1;
- (void)setMeetingClassType:(NSInteger)arg1;
- (void)setObject:(id)arg1 forCCPT:(NSInteger)arg2;
- (void)setOrganizer:(id)arg1;
- (void)setRecurrenceId:(id)arg1;
- (void)takeValuesFromParentEmail;
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg1;

@end
