// collisions.cpp
#include "collisions.h"
#include <glm/glm.hpp>

// Teste AABB vs AABB (cubo vs cubo)
bool AABBvsAABB(glm::vec3 minA, glm::vec3 maxA, glm::vec3 minB, glm::vec3 maxB)
{
    return (minA.x <= maxB.x && maxA.x >= minB.x) &&
           (minA.y <= maxB.y && maxA.y >= minB.y) &&
           (minA.z <= maxB.z && maxA.z >= minB.z);
}

// Teste AABB vs Plano (plano XZ no y=0)
bool AABBvsPlane(glm::vec3 minBox, glm::vec3 maxBox, float planeY)
{
    return minBox.y <= planeY && maxBox.y >= planeY;
}

// Teste ponto dentro de esfera
bool PointInsideSphere(glm::vec3 point, glm::vec3 center, float radius)
{
    return glm::distance(point, center) <= radius;
}
