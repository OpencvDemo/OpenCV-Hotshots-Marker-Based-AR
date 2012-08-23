//
//  BGRAVideoFrame.h
//  Example_MarkerBasedAR
//
//  Created by Ievgen Khvedchenia on 3/12/12.
//  Copyright (c) 2012 Ievgen Khvedchenia. All rights reserved.
//

#ifndef Example_MarkerBasedAR_BGRAVideoFrame_h
#define Example_MarkerBasedAR_BGRAVideoFrame_h

#include <cstddef>

// A helper struct presenting interleaved BGRA image in memory.
struct BGRAVideoFrame
{
    size_t width;
    size_t height;
    size_t stride;
    
    unsigned char * data;
};


#endif
