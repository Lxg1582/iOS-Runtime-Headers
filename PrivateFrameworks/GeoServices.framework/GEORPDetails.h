/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDetails : PBCodable <NSCopying> {
    int  _directionsType;
    GEOMapRegion * _displayRegion;
    int  _displayStyle;
    struct { 
        unsigned int directionsType : 1; 
        unsigned int displayStyle : 1; 
        unsigned int mapType : 1; 
    }  _has;
    GEORPUpdatedLabel * _label;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    int  _mapType;
    NSMutableArray * _places;
}

@property (nonatomic) int directionsType;
@property (nonatomic, retain) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (nonatomic) BOOL hasDirectionsType;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic, readonly) BOOL hasLocalizedDescription;
@property (nonatomic, readonly) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMapType;
@property (nonatomic, retain) GEORPUpdatedLabel *label;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic) int mapType;
@property (nonatomic, retain) NSMutableArray *places;

+ (Class)placeType;

- (int)StringAsDirectionsType:(id)arg1;
- (int)StringAsDisplayStyle:(id)arg1;
- (int)StringAsMapType:(id)arg1;
- (void)addPlace:(id)arg1;
- (void)clearPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)directionsType;
- (id)directionsTypeAsString:(int)arg1;
- (id)displayRegion;
- (int)displayStyle;
- (id)displayStyleAsString:(int)arg1;
- (BOOL)hasDirectionsType;
- (BOOL)hasDisplayRegion;
- (BOOL)hasDisplayStyle;
- (BOOL)hasLabel;
- (BOOL)hasLocalizedDescription;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasMapType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)localizedDescription;
- (id)localizedTitle;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeAtIndex:(unsigned int)arg1;
- (id)places;
- (unsigned int)placesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectionsType:(int)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setHasDirectionsType:(BOOL)arg1;
- (void)setHasDisplayStyle:(BOOL)arg1;
- (void)setHasMapType:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setPlaces:(id)arg1;
- (void)writeTo:(id)arg1;

@end
