//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MAAnnotationManager, MAAnnotationView, NSArray;

@protocol MAAnnotationManagerDelegate <NSObject>
- (void)annotationManager:(MAAnnotationManager *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (MAAnnotationView *)annotationManager:(MAAnnotationManager *)arg1 viewForAnnotation:(id <MAAnnotation>)arg2;
- (void)annotationManager:(MAAnnotationManager *)arg1 didSelectAnnotationView:(MAAnnotationView *)arg2;
- (void)annotationManager:(MAAnnotationManager *)arg1 didDeselectAnnotationView:(MAAnnotationView *)arg2;
@end
