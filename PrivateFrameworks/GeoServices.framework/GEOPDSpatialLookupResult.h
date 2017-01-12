/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {
    GEOPDBounds * _bounds;
    GEOLatLng * _center;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _mappedCategorys;
}

@property (nonatomic, retain) GEOPDBounds *bounds;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) BOOL hasBounds;
@property (nonatomic, readonly) BOOL hasCenter;
@property (nonatomic, readonly) int*mappedCategorys;
@property (nonatomic, readonly) unsigned int mappedCategorysCount;

+ (id)spatialLookupResultForPlaceData:(id)arg1;

- (int)StringAsMappedCategorys:(id)arg1;
- (void)addMappedCategory:(int)arg1;
- (id)bounds;
- (id)center;
- (void)clearMappedCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBounds;
- (BOOL)hasCenter;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)mappedCategoryAtIndex:(unsigned int)arg1;
- (int*)mappedCategorys;
- (id)mappedCategorysAsString:(int)arg1;
- (unsigned int)mappedCategorysCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setMappedCategorys:(int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end