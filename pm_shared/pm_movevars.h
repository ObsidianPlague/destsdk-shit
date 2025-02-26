//========= Copyright (c) 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================

// pm_movevars.h
#pragma once
#if !defined( PM_MOVEVARSH )
#define PM_MOVEVARSH

// movevars_t                  // Physics variables.
typedef struct movevars_s movevars_t;

struct movevars_s
{
	float	gravity;           // Gravity for map
	float	stopspeed;         // Deceleration when not moving
	float	maxspeed;          // Max allowed speed
	float	noclipspeed;          // Max allowed speed
	float	spectatormaxspeed;
	float	accelerate;        // Acceleration factor
	float	airaccelerate;     // Same for when in open air
	char bunnyhop;
	float	wateraccelerate;   // Same for when in water
	float	friction;          
	float	edgefriction;	   // Extra friction near dropofs 
	float	waterfriction;     // Less in water
	float	entgravity;        // 1.0
	float	bounce;            // Wall bounce value. 1.0
	float	stepsize;          // sv_stepsize;
	float	maxvelocity;       // maximum server velocity.
	float	zmax;			   // Max z-buffer range (for GL)
	float	waveHeight;		   // Water wave height (for GL)
	qboolean	footsteps;        // Play footstep sounds
	char	skyName[32];	   // Name of the sky map
	float	rollangle;
	float	rollspeed;
	float	skycolor_r;			// Sky color
	float	skycolor_g;			// 
	float	skycolor_b;			//
	float	skyvec_x;			// Sky vector
	float	skyvec_y;			// 
	float	skyvec_z;			// 
	int	features;		// engine features that shared across network
	int	fog_settings;	// Global fog settings (packed color+density) 
	float	wateralpha;	// World water alpha 1.0 - solid 0.0 - transparent
	float	skydir_x;		// skybox rotate direction
	float	skydir_y;		//
	float	skydir_z;		//
	float	skyangle;		// skybox rotate angle
};

extern movevars_t movevars;
#endif
