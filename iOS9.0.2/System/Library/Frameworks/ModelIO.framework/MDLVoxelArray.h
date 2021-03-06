/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@interface MDLVoxelArray : NSObject {

	unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > >* _voxels;
	SCD_Struct_MD19 _extent;
	MDLAABB _bounds;
	float _voxelExtent;
	MortonCode* mortonCoder;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) SCD_Struct_MD19 voxelIndexExtent;              //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD19 boundingBox; 
-(2)spatialLocationOfIndex:;
-(void)recalculateExtents;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5 ;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5 ;
-(SCD_Struct_MD19)voxelIndexExtent;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5 ;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5 ;
-(2)indexOfSpatialLocation:;
-(SCD_Struct_MD19)voxelBoundingBoxAtIndex:;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 ;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 ;
-(id)initWithData:(id)arg1 boundingBox:(SCD_Struct_MD19)arg2 voxelExtent:(float)arg3 ;
-(id)meshUsingAllocator:(id)arg1 ;
-(char)voxelExistsAtIndex:(char)arg1 allowAnyX:(char)arg2 allowAnyY:(char)arg3 allowAnyZ:(char)arg4 ;
-(void)setVoxelAtIndex:;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 ;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 ;
-(id)voxelsWithinExtent:(SCD_Struct_MD19)arg1 ;
-(id)voxelIndices;
-(void)setVoxelsWithVoxelData:(id)arg1 ;
-(void)clearVoxelsWithIndexData:(id)arg1 ;
-(void)unionWithVoxels:(id)arg1 ;
-(void)differenceWithVoxels:(id)arg1 ;
-(void)intersectWithVoxels:(id)arg1 ;
-(int)dilateInterior;
-(int)dilateExterior;
-(int)erodeInterior;
-(int)erodeExterior;
-(unsigned)count;
-(id)init;
-(SCD_Struct_MD19)boundingBox;
@end

