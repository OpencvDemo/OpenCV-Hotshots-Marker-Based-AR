//
//  SimpleVisualizationController.h
//  Example_MarkerBasedAR
//
//  Created by BloodAxe on 3/14/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////
// File includes:
#import "EAGLView.h"
#import "CameraCalibration.hpp"
#import "BGRAVideoFrame.h"

@interface SimpleVisualizationController : NSObject
{
  EAGLView * m_glview;
  GLuint m_backgroundTextureId;
  std::vector<Transformation> m_transformations;
  CameraCalibration m_calibration;
  CGSize m_frameSize;
}

-(id) initWithGLView:(EAGLView*)view calibration:(CameraCalibration) calibration frameSize:(CGSize) size;

-(void) drawFrame;
-(void) updateBackground:(BGRAVideoFrame) frame;
-(void) setTransformationList:(const std::vector<Transformation>&) transformations;

@end
