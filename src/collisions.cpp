// collisions.cpp
#include "collisions.h"
#include <glm/glm.hpp>

// Teste AABB vs AABB
bool AABBvsAABB(glm::vec3 minA, glm::vec3 maxA, glm::vec3 minB, glm::vec3 maxB)
{
    return (minA.x <= maxB.x && maxA.x >= minB.x) &&
           (minA.y <= maxB.y && maxA.y >= minB.y) &&
           (minA.z <= maxB.z && maxA.z >= minB.z);
}

// Teste AABB vs Plano
bool AABBvsPlane(glm::vec3 minBox, glm::vec3 maxBox, float planeY)
{
    return minBox.y <= planeY && maxBox.y >= planeY;
}

// Teste AABB vs Esfera
bool AABBvsSphere(glm::vec3 minAABB, glm::vec3 maxAABB, glm::vec3 sphereCenter, float sphereRadius)
{
    float sqDist = 0.0f;

    // Eixo X
    if (sphereCenter.x < minAABB.x)
        sqDist += (minAABB.x - sphereCenter.x) * (minAABB.x - sphereCenter.x);
    else if (sphereCenter.x > maxAABB.x)
        sqDist += (sphereCenter.x - maxAABB.x) * (sphereCenter.x - maxAABB.x);

    // Eixo Y
    if (sphereCenter.y < minAABB.y)
        sqDist += (minAABB.y - sphereCenter.y) * (minAABB.y - sphereCenter.y);
    else if (sphereCenter.y > maxAABB.y)
        sqDist += (sphereCenter.y - maxAABB.y) * (sphereCenter.y - maxAABB.y);

    // Eixo Z
    if (sphereCenter.z < minAABB.z)
        sqDist += (minAABB.z - sphereCenter.z) * (minAABB.z - sphereCenter.z);
    else if (sphereCenter.z > maxAABB.z)
        sqDist += (sphereCenter.z - maxAABB.z) * (sphereCenter.z - maxAABB.z);

    return sqDist <= sphereRadius * sphereRadius;
}
