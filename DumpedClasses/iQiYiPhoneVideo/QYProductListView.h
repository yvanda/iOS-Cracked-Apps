//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYProductListBaseView.h"

#import "QYPayRedPacketsCallBackDelegate-Protocol.h"
#import "QYProductRequestManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSSet, NSString, QYBuyLoginManager, QYProductRequestManager, SKProductsRequest, UIButton, UITableView, UIView, responseRecommendTutorial;
@protocol QYProductListViewDelegate;

@interface QYProductListView : QYProductListBaseView <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, QYProductRequestManagerDelegate, QYPayRedPacketsCallBackDelegate>
{
    NSSet *_productIdentifiers;
    SKProductsRequest *_productsRequest;
    NSMutableArray *_productList;
    NSMutableArray *_orgineProductList;
    UIView *_productView;
    UITableView *_productTable;
    UIButton *_vipProtocol;
    long long _curPayIndex;
    _Bool _isLoginView;
    int selectIndex;
    QYBuyLoginManager *_buyLoginManager;
    id <QYProductListViewDelegate> _delegate;
    QYProductRequestManager *_producesRequest;
    NSMutableArray *_pictureList;
    NSDictionary *_qaDic;
    responseRecommendTutorial *_tutorialData;
    UIButton *_payCourseBtn;
}

@property(retain, nonatomic) UIButton *payCourseBtn; // @synthesize payCourseBtn=_payCourseBtn;
@property(retain, nonatomic) responseRecommendTutorial *tutorialData; // @synthesize tutorialData=_tutorialData;
@property(retain, nonatomic) NSDictionary *qaDic; // @synthesize qaDic=_qaDic;
@property(retain, nonatomic) UITableView *productTable; // @synthesize productTable=_productTable;
@property(retain, nonatomic) NSMutableArray *pictureList; // @synthesize pictureList=_pictureList;
@property(retain, nonatomic) NSMutableArray *orgineProductList; // @synthesize orgineProductList=_orgineProductList;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) QYProductRequestManager *producesRequest; // @synthesize producesRequest=_producesRequest;
@property(nonatomic) __weak id <QYProductListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)boolPlayerFront;
- (void)openPayCourse;
- (void)logincallback:(id)arg1;
- (void)switchToTheRegisterPage;
- (void)switchToTheLoginPage;
- (void)showSubAccountMigrate;
- (void)postClickPingbackBlock:(id)arg1;
- (void)postRecommendListShowPingbackRpage:(id)arg1;
- (void)postBuyPingback:(long long)arg1;
- (void)sendClickLoginPingback:(id)arg1;
- (void)buyProductFinishWithResult:(int)arg1 andObject:(id)arg2;
- (void)buyVIPWithIndex:(long long)arg1;
- (void)redPacketsCallback:(long long)arg1;
- (void)showShareRedPacketsWithTag:(long long)arg1 andResponsePayCheckout:(id)arg2;
- (void)continusBuyProduct;
- (void)buyJustSelectProduct;
- (void)produceBuy_AfterLogin;
- (void)loginForBuyProduct:(id)arg1;
- (void)respondRedPacketsAlert:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)payCancel;
- (void)payFail:(int)arg1;
- (void)backToRoot;
- (id)getPayAccessType;
- (void)paySuccessOrderHandle:(id)arg1;
- (void)paySuccess:(id)arg1;
- (void)updateProductData;
- (void)loadFail:(id)arg1;
- (void)loadSuccess;
- (void)productRequest_Failed:(id)arg1;
- (void)productRequest_Finish:(id)arg1 orgineProductList:(id)arg2;
- (void)productRequest_Recomment_Finish:(id)arg1;
- (void)requestProducts;
- (void)doRetryBtn;
- (void)qydidSelectProductRow:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)updateData;
- (void)showProductView;
- (id)initWithFrameAndFrom:(struct CGRect)arg1 from:(_Bool)arg2;
- (void)dealloc;
- (void)setAlertViewTextContent:(id)arg1 message:(id)arg2 boldFontStr:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

