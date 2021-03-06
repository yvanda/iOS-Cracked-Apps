//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGXmlNode.h"

@interface CGUpnpAvObject : CGXmlNode
{
    CGUpnpAvObject *parent;
    id userObject;
}

+ (id)arrayWithXMLString:(id)arg1;
@property(retain) id userObject; // @synthesize userObject;
@property(retain) CGUpnpAvObject *parent; // @synthesize parent;
- (id)toFileNameString;
- (_Bool)isUpnpClass:(id)arg1;
- (_Bool)isTitle:(id)arg1;
- (_Bool)isObjectId:(id)arg1;
- (void)setUpnpClass:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setObjectId:(id)arg1;
- (id)albumArtURI;
- (id)date;
- (id)upnpClass;
- (id)title;
- (unsigned long long)childCount;
- (id)objectId;
- (id)ancestor;
- (_Bool)isItem;
- (_Bool)isContainer;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMediaContent:(struct _CgXmlNode *)arg1;
- (id)initWithXMLNode:(struct _CgXmlNode *)arg1;
- (id)init;

@end

