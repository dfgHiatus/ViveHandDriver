#pragma once

#include <openvr.h>
#include <interface_gesture.hpp>

typedef struct {
	float X;
	float Y;
	float Z;
} Point3D_t;

struct Quaternion_t
{
	double W, X, Y, Z;
};

typedef struct {
	uint32_t state;
	vr::VRBoneTransform_t bonesLeftHand[31];
	vr::VRBoneTransform_t bonesRightHand[31];
	GestureResult leftHandGestureResult;
	GestureResult rightHandGestureResult;
	bool leftHandDetected;
	bool rightHandDetected;
} HandEventMsg_t;

typedef struct {
	HandEventMsg_t handMsg;
} GlobalEventMsg_t;
