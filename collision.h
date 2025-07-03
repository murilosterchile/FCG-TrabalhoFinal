// collisions.h
#pragma once
#include <glm/vec3.hpp>

bool AABBvsAABB(glm::vec3 minA, glm::vec3 maxA, glm::vec3 minB, glm::vec3 maxB);
bool AABBvsPlane(glm::vec3 minBox, glm::vec3 maxBox, float planeY);
bool PointInsideSphere(glm::vec3 point, glm::vec3 center, float radius);
