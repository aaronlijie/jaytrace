#ifndef SPHERETEST_H
#define SPHERETEST_H

#include <QtTest/QtTest>

class SphereTest: public QObject
{
	Q_OBJECT
private slots:
	void testMultipleTransformParents();
	void testAxisAlignedNormalIntersection();
	void testParallelMiss();
	void testAngledNormalIntersection();
	void testTransformedIntersection();
	void testEvenlyScaledIntersection();
};

#endif // SPHERETEST_H
