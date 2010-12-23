#ifndef CAMERATEST_H
#define CAMERATEST_H

#include <QtTest/QtTest>

class CameraTest: public QObject
{
	Q_OBJECT
private slots:
	/// Test that the default camera settings do not move the camera
	void testStandard();

	/// Test an eye at 10, 10, 10 looking at the origin. no change to up
	void test1();

	/// Test an eye at 4, 4, 4 looking at 0, 1, 0. up is 2, 1, 0
	void test2();

	/**
	 * Basic test of slide
	 * Compare setting eye 0,10,0, look 0,10,-1 to
	 * Default eye and look coordinates with a slide up of 10
	 */
	void testSlide1();
};
#endif // CAMERATEST_H
