#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H

#include <QGLWidget>

#include "Scene.h"
#include "SceneObjectVisitor.h"

class OpenGLWidget: public QGLWidget, public SceneObjectVisitor
{
	Q_OBJECT
public:
	virtual void visit(const Sphere* sphere);
	void setScene(ScenePointer newScene);
	void drawAxes();

protected:
	void initializeGL();
	void resizeGL(int width, int height);
	void paintGL();

	ScenePointer scene;

	float aspectRatio;
};

#endif // OpenGLWidget

