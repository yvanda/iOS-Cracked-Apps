//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface QRCommentView : UIView
{
    UIImageView *_avataView;
    UILabel *_nameLbl;
    UILabel *_commentContentLbl;
    UIImageView *_agreeImage;
    UILabel *_agreeLbl;
    UIImageView *_commentImage;
    UILabel *_commetNumLbl;
}

@property(retain, nonatomic) UILabel *commetNumLbl; // @synthesize commetNumLbl=_commetNumLbl;
@property(retain, nonatomic) UIImageView *commentImage; // @synthesize commentImage=_commentImage;
@property(retain, nonatomic) UILabel *agreeLbl; // @synthesize agreeLbl=_agreeLbl;
@property(retain, nonatomic) UIImageView *agreeImage; // @synthesize agreeImage=_agreeImage;
@property(retain, nonatomic) UILabel *commentContentLbl; // @synthesize commentContentLbl=_commentContentLbl;
@property(retain, nonatomic) UILabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(retain, nonatomic) UIImageView *avataView; // @synthesize avataView=_avataView;
- (void).cxx_destruct;
- (id)getTotalNums:(long long)arg1 WithLab:(id)arg2;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

