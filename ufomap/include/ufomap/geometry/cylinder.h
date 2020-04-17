#ifndef UFOMAP_GEOMETRY_CYLINDER_H
#define UFOMAP_GEOMETRY_CYLINDER_H

#include <ufomap/math/pose6.h>
#include <ufomap/math/vector3.h>

#include <exception>

using namespace ufomap_math;

namespace ufomap_geometry
{
struct Cylinder
{
	Vector3 start;
	Vector3 end;
	float radius;

	inline Cylinder() : start(0.0, 0.0, 0.0), end(0.0, 0.0, 0.0), radius(0.0)
	{
	}

	inline Cylinder(const Vector3& start, const Vector3& end, float radius)
		: start(start), end(end), radius(radius)
	{
	}

	inline void translate(const Vector3& translation)
	{
		throw std::logic_error("Function not yet implemented");
		// TODO: Implement
	}

	inline void rotate(const Vector3& rotation)
	{
		throw std::logic_error("Function not yet implemented");
		// TODO: Implement
	}

	inline void transform(const Pose6& transform)
	{
		throw std::logic_error("Function not yet implemented");
		// TODO: Implement
	}
};
}  // namespace ufomap_geometry

#endif  // UFOMAP_GEOMETRY_CYLINDER_H
