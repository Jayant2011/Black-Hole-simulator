# Orbital Simulation

## Project Statement
This project simulates the motion of celestial objects such as planets orbiting stars. The primary goal is to calculate trajectories using gravitational physics and visualize them as graphs. In future stages, the simulation will be extended to include black holes and more complex visualizations.

---

## Technologies and Tools
- **Programming Language:** C++  
- **Graphing:** Matplotlib (via data export to CSV)  
- **Development Environment:** VSCode / GitHub Desktop  
- **Physics Formulas Used:**  
  - Newton's Law of Gravitation: F = G * (m1 * m2) / r²  
  - Acceleration: a = F / m  
  - Position updates using simple Euler integration  

---

## Course Topics Applied
The following course topics are implemented in this project:  
1. **C++ Basics:** Data types, operators, control statements  
2. **Functions:** Prototyping, call and return by reference  
3. **Classes and Objects:** Public/private members, constructors, destructors  
4. **Operator Overloading & Friend Functions** (if needed for vector math)  
5. **Pointers:** For object management and dynamic arrays  
6. **Templates & Recursion:** Used for future expansions of the simulation  
7. **Data Structures:** Linked lists for object storage, binary trees for advanced object queries  

---

## Project Progression
1. **Current Stage:**  
   - Planetary simulation with numeric computation of orbits  
   - Outputs plotted on a graph to visualize motion  
2. **Next Stages:**  
   - Include multiple celestial objects with interactions  
   - Implement black hole simulation with event horizon effects  
   - Develop a real-time graphical simulation using OpenGL  
   - Optimize computations for larger systems  

---

## Applications and Relevance
- Simulations like this are used by space agencies (NASA, ESA) for:  
  - Satellite orbit prediction  
  - Space mission planning  
  - Gravitational studies and black hole research  

---

## How to Run
1. Compile the `orbital_sim.cpp` file with a C++ compiler (e.g., `g++ orbital_sim.cpp -o orbital_sim`)  
2. Run the executable: `./orbital_sim`  
3. Export data as CSV for plotting with Matplotlib (Python)  

---

## License
This project is for educational purposes.
