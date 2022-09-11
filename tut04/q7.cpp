glMatrixMode(GL_PROJECTION); // Camera coordinates
glLoadIdentity(); // Always reset the matrix
// we are already looking at the camera's center, 
// with the top/bottom/left/right points of the circle touching the clipping boundaries
// near = front most point on z-axis, far = furthest point on z-axis
glOrtho(-R, R, -R, R, D-R, D+R);

glMatrixMode(GL_MODELVIEW); // World Coordinates
glLoadIdentity(); // Always reset the matrix
// eye, at, up
gluLookAt(vx, vy, vz, cx, cy, cz, 0, 1, 0);