/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {
    BOOL _active;
    NSString *_localizedTitle;
}

@property(getter=isActive) BOOL active;
@property(copy) NSString * localizedTitle;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)isActive;
- (id)keyPathsForValuesTriggeringCommandsChanged;
- (id)localizedTitle;
- (void)setActive:(BOOL)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end