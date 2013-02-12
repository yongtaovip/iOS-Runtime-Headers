/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMDocumentInfo, NSMutableArray, NSString;

@interface GMMKmlInfo : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSString *_description;
    NSMutableArray *_folderNames;
    BOOL _hasIsUserCreated;
    NSString *_id;
    BOOL _isUserCreated;
    NSString *_snippet;
    GMMDocumentInfo *_sourceDocument;
}

@property BOOL hasIsUserCreated; /* unknown property attribute: V_hasIsUserCreated */
@property BOOL isUserCreated; /* unknown property attribute: V_isUserCreated */
@property(retain) NSString *id; /* unknown property attribute: V_id */
@property(retain) GMMDocumentInfo *sourceDocument; /* unknown property attribute: V_sourceDocument */
@property(retain) NSString *description; /* unknown property attribute: V_description */
@property(retain) NSString *snippet; /* unknown property attribute: V_snippet */
@property(retain) NSMutableArray *folderNames; /* unknown property attribute: V_folderNames */
@property(readonly) NSInteger folderNamesCount;
@property(readonly) BOOL hasDescription;
@property(readonly) BOOL hasId;
@property(readonly) BOOL hasSnippet;
@property(readonly) BOOL hasSourceDocument;

- (void)addFolderName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)folderNameAtIndex:(NSUInteger)arg1;
- (id)folderNames;
- (NSInteger)folderNamesCount;
- (BOOL)hasDescription;
- (BOOL)hasId;
- (BOOL)hasIsUserCreated;
- (BOOL)hasSnippet;
- (BOOL)hasSourceDocument;
- (id)id;
- (id)init;
- (BOOL)isUserCreated;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setDescription:(id)arg1;
- (void)setFolderName:(id)arg1 atIndex:(NSInteger)arg2;
- (void)setFolderNames:(id)arg1;
- (void)setHasIsUserCreated:(BOOL)arg1;
- (void)setId:(id)arg1;
- (void)setIsUserCreated:(BOOL)arg1;
- (void)setSnippet:(id)arg1;
- (void)setSourceDocument:(id)arg1;
- (id)snippet;
- (id)sourceDocument;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end
