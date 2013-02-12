/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMapTable, NSMutableArray, WDDocument;

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    NSMapTable *mListDefinitionMap;
    NSMutableArray *mListDefinitions;
    NSUInteger mNextIdIndex;
}

- (id)addDefinition:(NSInteger)arg1;
- (id)addDefinition;
- (void)dealloc;
- (id)definitionAt:(NSInteger)arg1;
- (NSInteger)definitionCount;
- (id)definitionWithId:(NSInteger)arg1;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (NSInteger)nextId;

@end
