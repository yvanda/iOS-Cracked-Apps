//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString, TBSNSCustomRichTextInfos, TBSNSFeedItemFeatures, TBSNSItemPic, TBSNSSLLRichTextInfos;

@interface TBSNSFeedItemBase : TBJSONModel
{
    _Bool isPreDownloaded;
    _Bool _needInteractIcon;
    _Bool _top;
    _Bool _needCorner;
    _Bool _needPrice;
    _Bool _needDropDown;
    _Bool _isFeedFavoured;
    _Bool _isFeedFavorite;
    float _coverWidth;
    float _coverHeight;
    float _feedTypeIconWidth;
    float _feedTypeIconHeight;
    float _feedTypeBgWidth;
    float _feedTypeBgHeight;
    unsigned long long _id;
    NSString *_title;
    unsigned long long _creatorId;
    unsigned long long _forwardFeedId;
    NSString *_summary;
    NSString *_topicName;
    NSArray *_tNewTiles;
    long long _feedFavourCount;
    long long _commentCount;
    NSString *_coverTile_path;
    NSString *_typeIco_path;
    NSString *_bizId;
    long long _cardLayout;
    NSArray *_feedTags;
    NSArray *_parseredTitleImgUrlArray;
    NSArray *_tags;
    NSDictionary *_utArgs;
    TBSNSCustomRichTextInfos *_richTextInfos;
    TBSNSSLLRichTextInfos *_oceanRichTextInfo;
    NSString *_interactIconIndex;
    unsigned long long _time;
    long long _feedType;
    NSString *_feedTypeIcon;
    NSString *_feedTypeName;
    NSString *_feedTypeNameColor;
    NSString *_feedTypeNameLink;
    NSString *_feedTypeDesc;
    NSString *_feedTypeBg;
    NSString *_frameColor;
    NSString *_frameUrl;
    TBSNSItemPic *_frameLeftIcon;
    TBSNSItemPic *_frameRightIcon;
    TBSNSItemPic *_item11Icon;
    NSString *_priceColor;
    NSString *_detailUrl;
    NSString *_targetUrl;
    NSString *_scm;
    long long _itemCount;
    unsigned long long _startTime;
    unsigned long long _endTime;
    long long _newCardType;
    long long _newNewCardType;
    long long _cardUIType;
    TBSNSFeedItemFeatures *_features;
    long long _readCount;
    long long _followCount;
    double _summaryHeight_L;
    double _titleHeight_L;
    double _priceWidth_L;
    double _promotionPriceWidth_L;
    double _commentHeight_L;
    double _commenterWidth_L;
    NSString *_commentCount_L;
    NSString *_feedFavourCount_L;
    NSString *_readCount_L;
    NSString *_commentCountStr;
    NSString *_feedFavourCountStr;
    NSString *_readCountStr;
    NSString *_followCountStr;
    NSString *_feedSourceName;
    NSString *_feedSourceColor;
    NSString *_feedSourceUrl;
    double _commentCountWidth_L;
    double _feedFavourCountWidth_L;
    double _readCountWidth_L;
    long long _fairyIndex;
}

@property(nonatomic) long long fairyIndex; // @synthesize fairyIndex=_fairyIndex;
@property(nonatomic) double readCountWidth_L; // @synthesize readCountWidth_L=_readCountWidth_L;
@property(nonatomic) double feedFavourCountWidth_L; // @synthesize feedFavourCountWidth_L=_feedFavourCountWidth_L;
@property(nonatomic) double commentCountWidth_L; // @synthesize commentCountWidth_L=_commentCountWidth_L;
@property(retain, nonatomic) NSString *feedSourceUrl; // @synthesize feedSourceUrl=_feedSourceUrl;
@property(retain, nonatomic) NSString *feedSourceColor; // @synthesize feedSourceColor=_feedSourceColor;
@property(retain, nonatomic) NSString *feedSourceName; // @synthesize feedSourceName=_feedSourceName;
@property(copy, nonatomic) NSString *followCountStr; // @synthesize followCountStr=_followCountStr;
@property(copy, nonatomic) NSString *readCountStr; // @synthesize readCountStr=_readCountStr;
@property(copy, nonatomic) NSString *feedFavourCountStr; // @synthesize feedFavourCountStr=_feedFavourCountStr;
@property(copy, nonatomic) NSString *commentCountStr; // @synthesize commentCountStr=_commentCountStr;
@property(retain, nonatomic) NSString *readCount_L; // @synthesize readCount_L=_readCount_L;
@property(retain, nonatomic) NSString *feedFavourCount_L; // @synthesize feedFavourCount_L=_feedFavourCount_L;
@property(retain, nonatomic) NSString *commentCount_L; // @synthesize commentCount_L=_commentCount_L;
@property(nonatomic) double commenterWidth_L; // @synthesize commenterWidth_L=_commenterWidth_L;
@property(nonatomic) double commentHeight_L; // @synthesize commentHeight_L=_commentHeight_L;
@property(nonatomic) double promotionPriceWidth_L; // @synthesize promotionPriceWidth_L=_promotionPriceWidth_L;
@property(nonatomic) double priceWidth_L; // @synthesize priceWidth_L=_priceWidth_L;
@property(nonatomic) double titleHeight_L; // @synthesize titleHeight_L=_titleHeight_L;
@property(nonatomic) double summaryHeight_L; // @synthesize summaryHeight_L=_summaryHeight_L;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) TBSNSFeedItemFeatures *features; // @synthesize features=_features;
@property(nonatomic) _Bool isFeedFavorite; // @synthesize isFeedFavorite=_isFeedFavorite;
@property(nonatomic) _Bool isFeedFavoured; // @synthesize isFeedFavoured=_isFeedFavoured;
@property(nonatomic) _Bool needDropDown; // @synthesize needDropDown=_needDropDown;
@property(nonatomic) _Bool needPrice; // @synthesize needPrice=_needPrice;
@property(nonatomic) _Bool needCorner; // @synthesize needCorner=_needCorner;
@property(nonatomic) long long cardUIType; // @synthesize cardUIType=_cardUIType;
@property(nonatomic) long long newNewCardType; // @synthesize newNewCardType=_newNewCardType;
@property(nonatomic) long long newCardType; // @synthesize newCardType=_newCardType;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) _Bool top; // @synthesize top=_top;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) _Bool needInteractIcon; // @synthesize needInteractIcon=_needInteractIcon;
@property(retain, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) TBSNSItemPic *item11Icon; // @synthesize item11Icon=_item11Icon;
@property(retain, nonatomic) TBSNSItemPic *frameRightIcon; // @synthesize frameRightIcon=_frameRightIcon;
@property(retain, nonatomic) TBSNSItemPic *frameLeftIcon; // @synthesize frameLeftIcon=_frameLeftIcon;
@property(retain, nonatomic) NSString *frameUrl; // @synthesize frameUrl=_frameUrl;
@property(retain, nonatomic) NSString *frameColor; // @synthesize frameColor=_frameColor;
@property(nonatomic) float feedTypeBgHeight; // @synthesize feedTypeBgHeight=_feedTypeBgHeight;
@property(nonatomic) float feedTypeBgWidth; // @synthesize feedTypeBgWidth=_feedTypeBgWidth;
@property(retain, nonatomic) NSString *feedTypeBg; // @synthesize feedTypeBg=_feedTypeBg;
@property(copy, nonatomic) NSString *feedTypeDesc; // @synthesize feedTypeDesc=_feedTypeDesc;
@property(retain, nonatomic) NSString *feedTypeNameLink; // @synthesize feedTypeNameLink=_feedTypeNameLink;
@property(retain, nonatomic) NSString *feedTypeNameColor; // @synthesize feedTypeNameColor=_feedTypeNameColor;
@property(retain, nonatomic) NSString *feedTypeName; // @synthesize feedTypeName=_feedTypeName;
@property(nonatomic) float feedTypeIconHeight; // @synthesize feedTypeIconHeight=_feedTypeIconHeight;
@property(nonatomic) float feedTypeIconWidth; // @synthesize feedTypeIconWidth=_feedTypeIconWidth;
@property(retain, nonatomic) NSString *feedTypeIcon; // @synthesize feedTypeIcon=_feedTypeIcon;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *interactIconIndex; // @synthesize interactIconIndex=_interactIconIndex;
@property(retain, nonatomic) TBSNSSLLRichTextInfos *oceanRichTextInfo; // @synthesize oceanRichTextInfo=_oceanRichTextInfo;
@property(retain, nonatomic) TBSNSCustomRichTextInfos *richTextInfos; // @synthesize richTextInfos=_richTextInfos;
@property(retain, nonatomic) NSDictionary *utArgs; // @synthesize utArgs=_utArgs;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *parseredTitleImgUrlArray; // @synthesize parseredTitleImgUrlArray=_parseredTitleImgUrlArray;
@property(retain, nonatomic) NSArray *feedTags; // @synthesize feedTags=_feedTags;
@property(nonatomic) long long cardLayout; // @synthesize cardLayout=_cardLayout;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *typeIco_path; // @synthesize typeIco_path=_typeIco_path;
@property(nonatomic) float coverHeight; // @synthesize coverHeight=_coverHeight;
@property(nonatomic) float coverWidth; // @synthesize coverWidth=_coverWidth;
@property(retain, nonatomic) NSString *coverTile_path; // @synthesize coverTile_path=_coverTile_path;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long feedFavourCount; // @synthesize feedFavourCount=_feedFavourCount;
@property(retain, nonatomic) NSArray *tNewTiles; // @synthesize tNewTiles=_tNewTiles;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) unsigned long long forwardFeedId; // @synthesize forwardFeedId=_forwardFeedId;
@property(nonatomic) unsigned long long creatorId; // @synthesize creatorId=_creatorId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)preDownloadImg;
- (id)tileForIndex:(int)arg1;
- (id)typeIcoUrl;
- (id)coverImageUrl;
- (_Bool)coverImage;
- (_Bool)multImages;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
