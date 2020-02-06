//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WADynamicBackgroundGLContext : MMObject
{
    unsigned int program;
}

+ (id)contextWithVertexShaderPath:(id)arg1 fragmentShaderPath:(id)arg2;
@property(nonatomic) unsigned int program; // @synthesize program;
- (void)setupShader:(id)arg1 fragmentShaderContent:(id)arg2;
- (void)bindTextureName:(unsigned int)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)bindCubeTexture:(id)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)bindTexture:(id)arg1 to:(unsigned int)arg2 uniformName:(id)arg3;
- (void)setUniformMatrix4fv:(id)arg1 value:(union _GLKMatrix4)arg2;
- (void)setUniform4fv:(id)arg1 value:(union _GLKVector4)arg2;
- (void)setUniform3fv:(id)arg1 value:(union _GLKVector3)arg2;
- (void)setUniform2fv:(id)arg1 value:(union _GLKVector2)arg2;
- (void)setUniform1f:(id)arg1 value:(float)arg2;
- (void)setUniform1i:(id)arg1 value:(int)arg2;
- (void)drawGeometry:(id)arg1;
- (void)drawTrianglesWithVAO:(unsigned int)arg1 vertexCount:(int)arg2;
- (void)drawTrianglesWithVBO:(unsigned int)arg1 vertexCount:(int)arg2;
- (void)drawTriangles:(float *)arg1 vertexCount:(int)arg2;
- (void)bindAttribsUV:(float *)arg1;
- (void)bindAttribs:(float *)arg1;
- (void)active;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;

@end
