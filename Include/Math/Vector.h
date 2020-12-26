/**
 * @file Vector.h
 * 
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#pragma once

#include "Math/TVector/Vector2.h"
#include "Math/TVector/Vector3.h"
#include "Math/TVector/Vector4.h"


using Vector2f=tvector::TVector2<float>;
using Vector3f=tvector::TVector3<float>;
using Vector4f=tvector::TVector4<float>;

// default vector is vector3f
using Vector=Vector3f;