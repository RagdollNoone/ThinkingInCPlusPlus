//
// Created by dendy on 19-5-10.
//

#ifndef CODEREADING_POINT3D_H
#define CODEREADING_POINT3D_H

#include "Point.h"

struct Point3D{
    Point base;

    int x;
    int y;
    int z;
};

typedef Point3D point3d;

point *new_point3d();
void delete_point3d(point3d * const); // TODO： 析构有问题, 到底应该设计什么类型的参数才对

void drawPoint3dFun(const point *const pPointObj);

#endif //CODEREADING_POINT3D_H
