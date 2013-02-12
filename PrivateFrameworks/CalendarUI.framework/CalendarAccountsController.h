/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class AccountSettingsAccountManager, NSMutableDictionary;

@interface CalendarAccountsController : NSObject {
    AccountSettingsAccountManager *_accountManager;
    NSMutableDictionary *_lastCalendarRefreshDates;
    NSMutableDictionary *_lastStoreListingRefreshDates;
    NSMutableDictionary *_lastStoreRefreshDates;
}

+ (id)sharedInstance;

- (id)accountManager;
- (id)accountTypeTitleForStore:(void*)arg1;
- (BOOL)calendarNeedsRefresh:(void*)arg1;
- (void)dealloc;
- (void)refreshCalendar:(void*)arg1;
- (void)refreshListingForStore:(void*)arg1;
- (void)refreshStore:(void*)arg1;
- (BOOL)storeListingNeedsRefresh:(void*)arg1;
- (BOOL)storeNeedsRefresh:(void*)arg1;
- (id)titleForStore:(void*)arg1;

@end
