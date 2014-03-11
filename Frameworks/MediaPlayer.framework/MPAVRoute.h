/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoute, NSDictionary, NSString;

@interface MPAVRoute : NSObject {
    NSDictionary *_avRouteDescription;
    int _displayRouteType;
    int _pickableRouteType;
    BOOL _picked;
    BOOL _requiresPassword;
    NSString *_routeName;
    int _routeSubtype;
    int _routeType;
    NSString *_routeUID;
    MPAVRoute *_wirelessDisplayRoute;
}

@property(readonly) BOOL displayIsPicked;
@property(readonly) int displayRouteType;
@property(readonly) int pickableRouteType;
@property(getter=isPicked,readonly) BOOL picked;
@property(readonly) BOOL requiresPassword;
@property(readonly) NSString * routeName;
@property(readonly) int routeSubtype;
@property(readonly) int routeType;
@property(readonly) NSString * routeUID;
@property(readonly) MPAVRoute * wirelessDisplayRoute;

- (void).cxx_destruct;
- (id)_initWithAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (id)avRouteDescription;
- (void)dealloc;
- (id)description;
- (BOOL)displayIsPicked;
- (int)displayRouteType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPicked;
- (int)pickableRouteType;
- (BOOL)requiresPassword;
- (id)routeName;
- (int)routeSubtype;
- (int)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(int)arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (id)wirelessDisplayRoute;

@end