vec3 recursive_decasteljau(vector<vec3> points, float u) {
    // points.size() >= 1.
    if (points.size() == 1) {
        return points[0];
    }

    vector<vec3> interpolated_points(points.size() - 1);
    for (int i = 0; i < points.size() - 1; i++) {
        interpolated_points[i] = interpolate(points[i], points[i+1], u);
    }

    return recursive_decasteljau(interpolated_points, u);
}