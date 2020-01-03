#pragma once
// coordin.h -- structure templates and function prototypes
// structure templates
#ifndef CHARLIE_H_
#define CHARLIE_H_

struct polar
{
	double distance;    // distance from origin
	double angle;        // direction from origin
};
struct rect
{
	double x;        // horizontal distance from origin
	double y;        // vertical distance from origin
};

// prototypes ¨ç¼Æ­ì«¬
polar rect_to_polar(rect &a);

void show_polar(polar a);

#endif
