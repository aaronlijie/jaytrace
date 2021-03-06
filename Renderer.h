#ifndef RENDERER_H
#define RENDERER_H

#include <list>

#include "Angle.h"
#include "Scene.h"

using std::list;

class Renderer
{
public:
	Renderer(ScenePointer scene, unsigned int width, unsigned int height, unsigned int aaSamples, Angle projectionAngle);

protected:
	ScenePointer scene;

	unsigned int width;
	unsigned int height;

	unsigned int aaSamples;

	Angle projectionAngle;
	float aspectRatio;
};

#endif // RENDERER_H
