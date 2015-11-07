/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                        //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                    //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                     //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;              //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                 //@synthesize tileRequester=_tileRequester - In the implementation block
-(void)dealloc;
-(GEOTileKeyList *)networkList;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)pendingNetworkList;
-(GEOTileKeyList *)interestList;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileRequester *)tileRequester;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)fullList;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
@end
