#pragma once

static float distance2f(const cv::Point2f & a, const cv::Point2f & b) {
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}