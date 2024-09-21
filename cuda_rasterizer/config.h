/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#ifndef CUDA_RASTERIZER_CONFIG_H_INCLUDED
#define CUDA_RASTERIZER_CONFIG_H_INCLUDED

#define NUM_CHANNELS 3 // Default 3, RGB
#define BLOCK_X 16
#define BLOCK_Y 16

#define DISTORT_MARGIN 3

#define SHIFT_POS(x) (x + DISTORT_MARGIN * BLOCK_X)
#define EXPAND_MARGIN(x) (x + 2 * DISTORT_MARGIN * BLOCK_X)
#define EXPAND_MARGIN_BLOCK(x) (x + 2 * DISTORT_MARGIN)

#define INDEX_OFFSET 1
#endif