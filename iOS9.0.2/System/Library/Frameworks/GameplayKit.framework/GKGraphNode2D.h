/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode2D : GKGraphNode {

	GKCGraphNode2D* _cGraphNode2D;
	 _position;

}

@property (assign,nonatomic)  position;              //@synthesize position=_position - In the implementation block
+(id)nodeWithPoint:;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGraphNode2D*)cGraphNode2D;
-(id)initWithPoint:;
-(GKCGraphNode*)makeCGraphNode;
-(id)init;
-(id)description;
-(void)setPosition:;
-()position;
@end

