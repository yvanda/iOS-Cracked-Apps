//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GeneralUtil : NSObject
{
}

+ (_Bool)isIphone4Or4S;
+ (void)sendBookBrowseHistory:(id)arg1;
+ (void)removeTimeTickForEventName:(id)arg1;
+ (void)elapseReportEndWithEventName:(id)arg1;
+ (void)elapseReportBeginWithEventName:(id)arg1;
+ (void)appendReportParams:(id)arg1 With:(id)arg2 andValue:(id)arg3;
+ (void)appendReportParams:(id)arg1 WithParams:(id)arg2;
+ (id)ElapseReportPramsRegister;
+ (id)TimeTicks;
+ (void)requestForPreferenceChannel;
+ (void)DataReport:(id)arg1 pageId:(int)arg2 moduleId:(int)arg3 index:(int)arg4 objectId:(int)arg5 categoryId:(int)arg6 operType:(int)arg7 operId:(int)arg8 operAmount:(int)arg9 operResult:(int)arg10 src1:(id)arg11 src2:(id)arg12 src3:(id)arg13 from1:(id)arg14 from2:(id)arg15;
+ (void)DataReport:(id)arg1 pageId:(int)arg2 moduleId:(int)arg3 index:(int)arg4 objectId:(int)arg5 categoryId:(int)arg6 operType:(int)arg7 operId:(int)arg8 operAmount:(int)arg9 operResult:(int)arg10 src1:(id)arg11 src2:(id)arg12 src3:(id)arg13 from1:(id)arg14 from2:(id)arg15 from3:(id)arg16;
+ (void)DataReport:(id)arg1 pageId:(int)arg2 moduleId:(int)arg3 index:(int)arg4 objectId:(int)arg5 categoryId:(int)arg6 operType:(int)arg7 operId:(int)arg8 operAmount:(int)arg9 operResult:(int)arg10 src1:(id)arg11 src2:(id)arg12 src3:(id)arg13 from1:(id)arg14 from2:(id)arg15 from3:(id)arg16 objectIdStr:(id)arg17;
+ (id)strenchImage:(id)arg1;
+ (void)restoreMenu:(id)arg1 transparent:(_Bool)arg2;
+ (id)getBehaviorOptions:(id)arg1 transparent:(_Bool)arg2;
+ (long long)calculateRandomPreference;
+ (_Bool)isQRClassInRunTimeWithClassName:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (double)getHeightWithSystemFont:(double)arg1;

@end

