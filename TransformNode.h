#ifndef TRANSFORMNODE_H
#define TRANSFORMNODE_H

#include "Node.h"

using Eigen::Affine3d;

/* Class TransformNode
 *
 * This class handles the storage of the current matrix state.
 * It can store an arbitrary transformation matrix, but is primarily used by subclassing it and
 * creating a cleaner interface around a specific transformation (rotation, translation, etc)
 */

class TransformNode : public Node
{
public:
	TransformNode(NodePointer parent = NodePointer(0));

	/// Store an arbitrary transformation
	TransformNode(Affine3d transform, NodePointer parent = NodePointer(0));

	virtual Affine3d getMatrixState();

	virtual Matrix4d getInverseMatrix();

protected:
	Affine3d transform;
	Matrix4d inverseMatrix;
};

#endif // TRANSFORMNODE_H
