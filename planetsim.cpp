#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Gravitational constant
double G = 6.67430e-11;

// Class for celestial body
class Body {
public:
    double x, y;    // Position
    double vx, vy;  // Velocity
    double mass;

    // Constructor
    Body(double mx, double my, double mvx, double mvy, double m) {
        x = mx; y = my;
        vx = mvx; vy = mvy;
        mass = m;
    }
};

// Function to compute acceleration of b1 due to b2
void computeAcceleration(Body b1, Body b2, double &ax, double &ay) {
    double dx = b2.x - b1.x;
    double dy = b2.y - b1.y;
    double r2 = dx*dx + dy*dy;
    double r = sqrt(r2);
    double a = G * b2.mass / r2;
    ax = a * dx / r;
    ay = a * dy / r;
}

int main() {
    // Create Sun and Earth
    Body sun(0, 0, 0, 0, 1988920000000000000000000000000.0); // 1.98892e30
    Body earth(149600000000.0, 0, 0, 29780, 5972000000000000000000000.0); // 5.972e24

    // File to store orbit data
    ofstream file;
    file.open("orbit.csv");
    file << "time,x,y\n";

    double dt = 3600; // 1 hour step
    double totalTime = 365 * 24 * 3600; // 1 year

    // Simulation loop
    for (double t = 0; t <= totalTime; t += dt) {
        double ax, ay;
        computeAcceleration(earth, sun, ax, ay);

        // Update velocity
        earth.vx = earth.vx + ax * dt;
        earth.vy = earth.vy + ay * dt;

        // Update position
        earth.x = earth.x + earth.vx * dt;
        earth.y = earth.y + earth.vy * dt;

        // Write to file
        file << t << "," << earth.x << "," << earth.y << "\n";
    }

    file.close();
    cout << "Simulation complete. Data saved to orbit.csv" << endl;
    return 0;
}
