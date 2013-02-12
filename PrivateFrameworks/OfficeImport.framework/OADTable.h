/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADTableGrid, OADTableProperties;

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    OADTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)addRow;
- (void)dealloc;
- (id)grid;
- (id)init;
- (id)rowAtIndex:(NSInteger)arg1;
- (NSInteger)rowCount;
- (void)setParentTextListStyle:(id)arg1;
- (id)tableProperties;

@end
