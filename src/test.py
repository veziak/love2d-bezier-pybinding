import bezier_curve

v = bezier_curve.Vector2(1, 1)
b = bezier_curve.Vector2(1, 1)



def bezierCurveRemoveEndpoints(points:bezier_curve.Vector2):
    result = None
    if points[0].x == points[1].x and points[0].y == points[1].y:
        result = points[1:]
    if points[-1].x == points[-2].x and points[-1].y == points[-2].y:
        result = points[:-1]
    return result

def printVector(v):
    print(f"x: {p.x}, y: {p.y}")

def printTriangle(v):
    printVector(v.a)
    printVector(v.b)
    printVector(v.c)
    print('--------------')

p1 = bezier_curve.Vector2(float(4865.3502992126), float(3149.9546456693))
p2 = bezier_curve.Vector2(float(4865.3502992126), float(3149.9546456693 ))
p3 = bezier_curve.Vector2(float(4879.3394645669), float(3133.1743370079))
p4 = bezier_curve.Vector2(float(4889.8427716535), float(3106.8318614173))
points = [p1, p2, p3, p4]

b= bezier_curve.BezierCurve(points).render(3)
b= bezierCurveRemoveEndpoints(b)

for p in b:
    printVector(p)

triangles = bezier_curve.triangulate(b)
print(f'len: {len(triangles)}')
for t in triangles:
    printTriangle(t)

