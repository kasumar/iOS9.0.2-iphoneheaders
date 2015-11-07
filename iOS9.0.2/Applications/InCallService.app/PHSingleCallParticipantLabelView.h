/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <InCallService/PHAbstractCallParticipantLabelView.h>

@class CNContact, CNAvatarView, NSLayoutConstraint, UILabel, NSArray, NSTimer, UIButton;

@interface PHSingleCallParticipantLabelView : PHAbstractCallParticipantLabelView {

	CNContact* _contact;
	CNAvatarView* _avatarView;
	NSLayoutConstraint* _participantMarqueeLabelRightConstraint;
	NSLayoutConstraint* _participantMarqueeLabelAlignmentConstraint;
	NSLayoutConstraint* _participantMarqueeLabelBaselineConstraint;
	NSLayoutConstraint* _statusLabelAlignmentConstraint;
	NSLayoutConstraint* _statusLabelBaseLineConstraint;
	NSLayoutConstraint* _statusLabelRightConstraint;
	UILabel* _statusLabel;
	NSArray* _statusLabelsArray;
	NSTimer* _statusLabelTimer;
	unsigned _currentStatusLabelIndex;
	UIButton* _conferenceParticipantsButton;

}

@property (nonatomic,retain) CNContact * contact;                                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelRightConstraint;                  //@synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelAlignmentConstraint;              //@synthesize participantMarqueeLabelAlignmentConstraint=_participantMarqueeLabelAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelBaselineConstraint;               //@synthesize participantMarqueeLabelBaselineConstraint=_participantMarqueeLabelBaselineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelAlignmentConstraint;                          //@synthesize statusLabelAlignmentConstraint=_statusLabelAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelBaseLineConstraint;                           //@synthesize statusLabelBaseLineConstraint=_statusLabelBaseLineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelRightConstraint;                              //@synthesize statusLabelRightConstraint=_statusLabelRightConstraint - In the implementation block
@property (retain) UILabel * statusLabel;                                                        //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) NSArray * statusLabelsArray;                                                  //@synthesize statusLabelsArray=_statusLabelsArray - In the implementation block
@property (retain) NSTimer * statusLabelTimer;                                                   //@synthesize statusLabelTimer=_statusLabelTimer - In the implementation block
@property (assign) unsigned currentStatusLabelIndex;                                             //@synthesize currentStatusLabelIndex=_currentStatusLabelIndex - In the implementation block
@property (retain) UIButton * conferenceParticipantsButton;                                      //@synthesize conferenceParticipantsButton=_conferenceParticipantsButton - In the implementation block
-(void)setStatusLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParticipantMarqueeLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantMarqueeLabelRightConstraint;
-(void)setActivityState:(unsigned short)arg1 animated:(char)arg2 ;
-(void)setActivityState:(unsigned short)arg1 ;
-(void)setHidesLabel:(char)arg1 ;
-(UIButton *)conferenceParticipantsButton;
-(void)setConferenceParticipantsButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)statusLabelRightConstraint;
-(void)setLabelDescriptor:(id)arg1 ;
-(void)setShowsInfoButton:(char)arg1 ;
-(void)_setParticipantLabelAlignment:(int)arg1 ;
-(void)setParticipantMarqueeLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantMarqueeLabelBaselineConstraint;
-(void)_setStatusLabelAlignment:(int)arg1 ;
-(void)statusLabelTapped:(id)arg1 ;
-(float)_distanceFromParticipantNameBaseLineToStatus;
-(void)setStatusLabelBaseLineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusLabelBaseLineConstraint;
-(NSTimer *)statusLabelTimer;
-(NSArray *)statusLabelsArray;
-(void)setCurrentStatusLabelIndex:(unsigned)arg1 ;
-(void)setStatusLabelTimer:(NSTimer *)arg1 ;
-(void)setStatusLabelsArray:(NSArray *)arg1 ;
-(void)animateToFirstLabel;
-(NSLayoutConstraint *)participantMarqueeLabelAlignmentConstraint;
-(void)setParticipantMarqueeLabelAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusLabelAlignmentConstraint;
-(void)setStatusLabelAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setShouldCompressLabelsVertically:(char)arg1 ;
-(void)animateToNextLabel;
-(unsigned)currentStatusLabelIndex;
-(void)fadeStatusLabelToAttributedOrPlainString:(id)arg1 ;
-(char)_statusLabelStringWillFit:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end
