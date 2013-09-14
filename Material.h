/*
 * Copyright (C) 2013 Tobias Marquardt <tm@tobix.eu>
 *
 * This file is part of WorbleRay, a simple ray tracer which is licensed under 
 * the GNU General Public License v3. You should have received a copy of the 
 * GNU General Public License in the file LICENSE.txt along with this program. 
 * If not, see <http://www.gnu.org/licenses>
 * 
 */

#ifndef MATERIAL_H
#define MATERIAL_H

#include "Color.h"

class Scene;
class Intersection;

/**
 * \brief Abstract base class for Materials that are able to shade an intersection point.
 */
class Material
{
    public:
        virtual ~Material(){};
        virtual Color shade(const Intersection& intersection, const Scene& scene) const = 0;
};

#endif //ifndef MATERIAL_H
