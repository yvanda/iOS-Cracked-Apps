//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTSGGroup.h"

@class NSURL, RCTBridge;

@interface RCTSGMesh : RCTSGGroup
{
    unsigned int _textureid;
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    RCTBridge *_bridge;
    NSURL *_mesh;
    NSURL *_texture;
}

@property(copy, nonatomic) NSURL *texture; // @synthesize texture=_texture;
@property(copy, nonatomic) NSURL *mesh; // @synthesize mesh=_mesh;
- (void).cxx_destruct;
- (void)dealloc;
- (void)renderGather:(struct RCTSGRenderContext *)arg1 sgview:(id)arg2 matrixStack:(struct RCTSGMatrix *)arg3;
- (id)init;
- (id)initWithBridge:(id)arg1;

@end

