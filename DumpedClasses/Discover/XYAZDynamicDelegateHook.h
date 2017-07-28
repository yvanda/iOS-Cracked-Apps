//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"

@class NSMutableDictionary, NSString;

@interface XYAZDynamicDelegateHook : NSObject <UITableViewDelegate, UICollectionViewDelegate, UIScrollViewDelegate>
{
    NSMutableDictionary *_sendedIds;
    NSMutableDictionary *_viewedIds;
}

+ (id)generateCellnameForTrack:(id)arg1;
+ (void)enableHookScrollViewDelegateMethod:(Class)arg1;
+ (void)enableHookCollectionViewDelegateMethod:(Class)arg1;
+ (void)enableHookTableViewDelegateMethod:(Class)arg1;
@property(retain, nonatomic) NSMutableDictionary *viewedIds; // @synthesize viewedIds=_viewedIds;
@property(retain, nonatomic) NSMutableDictionary *sendedIds; // @synthesize sendedIds=_sendedIds;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)XYAZ_scrollViewDidEndDecelerating:(id)arg1;
- (void)XYAZ_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)XYAZ_collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)XYAZ_tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
