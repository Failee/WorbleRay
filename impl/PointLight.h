#ifndef POINTLIGHT_H
#define POINTLIGHT_H

#include "Color.h"
#include "Light.h"
#include "PointD.h"


class PointLight : public Light
{
public:
    PointLight(const PointD& position = PointD(0.0, 0.0, 0.0),
               const Color& color = Color(1.0, 1.0, 1.0),
               float radiance = 1.0);
    virtual VectorD direction_at(const PointD& point) const override;
    virtual Color intensity(const PointD& point, const Scene& scene) const override;
private:
    PointD position;
};

#endif //ifndef POINTLIGHT_H

