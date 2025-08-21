---
layout: page
title: Projects
permalink: /projects/
class: projects-page
---

<div class="projects-hero">
  <h1>Projects</h1>
  <p>My portfolio of projects I have worked on during my education and professional experience. My work combines mechanical design, software development and systems engineering.</p>
</div>

<!-- Featured Project Section -->
<div class="featured-project">
  <div class="project-card featured">
    <div class="project-card-image featured-gallery">
      <img id="featured-image" src="/assets/images/robot5.jpg" alt="Featured Project">
      <button class="gallery-nav prev" onclick="previousImage()">‹</button>
      <button class="gallery-nav next" onclick="nextImage()">›</button>
      <div class="gallery-dots">
        <span class="gallery-dot active" onclick="currentImage(1)"></span>
        <span class="gallery-dot" onclick="currentImage(2)"></span>
        <span class="gallery-dot" onclick="currentImage(3)"></span>
      </div>
    </div>
    <div class="project-card-content featured-content">
      <h3>Autonomous Rover - Learning-Adaptive Control Research</h3>
      <p class="project-card-subtitle">Learning-Based Adaptive Control for Autonomous Mobile Robots</p>
      <p>This research project implements learning-adaptive control strategies for autonomous mobile robots in repetitive environments, supervised by Dr. Homayoon Beigi at Columbia's Nonlinear Adaptive Control Research Lab. The custom-built differential drive AMR features a distributed architecture with dual Raspberry Pi units; Pi4 handling hardware control through a custom ROS2 Control plugin and sensor management, while Pi5 executes motion planning via a specialized Nav2 controller plugin that implements the learning-adaptive algorithm.</p>
      <p>By bridging theoretical adaptive control concepts with real-world autonomous navigation, this project demonstrates how robots can intelligently improve their performance through experience in structured environments. The learning-adaptive approach is particularly valuable for AMRs in warehouses, manufacturing facilities, or delivery systems where robots follow similar routes repeatedly, allowing them to optimize their control strategies and achieve superior trajectory tracking performance over time.</p>
      <div class="tech-badges">
        <span class="tech-badge">ROS2</span>
        <span class="tech-badge">Nav2</span>
        <span class="tech-badge">C++</span>
        <span class="tech-badge">Python</span>
        <span class="tech-badge">Mobile Robots</span>
        <span class="tech-badge">Raspberry Pi</span>
        <span class="tech-badge">Sensor Fusion</span>
        <span class="tech-badge">RTAB Mapping</span>
        <span class="tech-badge">RGBD Perception</span>
      </div>

      <div class="project-actions">
        <a href="https://github.com/onurcalisir27/LearningAdaptive" class="project-btn">📂 GitHub</a>
        <a href="/assets/documents/WorkshopPoster.pdf" class="project-btn">📄 Poster presented at NESCW'25</a>
        <a href="/assets/images/IMG_1507.MOV" class="project-btn secondary">🎥 Demo Video</a>
      </div>
    </div>
  </div>
</div>

<!-- Other Projects Section -->
<div class="section-divider">
  <h2>Other Projects</h2>
</div>
<div class="projects-grid">

  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/robot3.jpg" alt="Top View">
      <img src="/assets/images/robot4.png" alt="Side View">
    </div>
    <div class="project-card-content">
      <h3>DiffDrivePi - ROS2 Control Hardware Plugin</h3>
      <p class="project-card-subtitle">Differential Drive Hardware Interface Plugin for Raspberry Pi4</p>
      <p>A flexible C++ library designed as a ROS2 Control hardware interface plugin for differential drive mobile robots, offering hardware abstraction for and a clean interface. DiffDrivePi features implementations of arbitrary DC motor control through H-bridge setups, thread free velocity calculation from quadrature encoders, and PID velocity control .</p>
      <p>The library features the AutonomousRover plugin implementation with comprehensive configurability for diverse robotic applications using Raspberry Pi4. The library is built using the Pigpio library, and a script is included to install pigpio alongside the source code.</p>
      <div class="tech-badges">
        <span class="tech-badge">ROS2</span>
        <span class="tech-badge">ROS2 Control</span>
        <span class="tech-badge">C++</span>
        <span class="tech-badge">Mobile Robots</span>
        <span class="tech-badge">PID Control</span>
       <span class="tech-badge">Hardware Abstraction</span>
      </div>
      <div class="project-actions">
        <a href="https://github.com/onurcalisir27/DiffDrivePi" class="project-btn">📂 GitHub</a>
      </div>
    </div>
  </div>

  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/robot_final.png" alt="Top View">
      <img src="/assets/images/mpc-plot.png" alt="Top View">
    </div>
    <div class="project-card-content">
      <h3>MPC-ISM Controller for 3 DOF Robot Manipulator</h3>
      <p class="project-card-subtitle">Model Predictive and Sliding Mode Controllers on MATLAB</p>
      <p>This project implements a hierarchical control system for a 3-DOF robot manipulator by combining Model Predictive Control (MPC) with Integral Sliding Mode (ISM) control, based on an IEEE paper by Incremona et al.</p>
      <p>  The system features a three-layer architecture: inverse dynamics linearization, high-frequency ISM for uncertainty rejection, and MPC for optimal trajectory tracking with constraints. The implementation was developed in MATLAB with custom classes for robot dynamics, controllers, and simulation.</p>
      <div class="tech-badges">
        <span class="tech-badge">Model Predictive Control</span>
        <span class="tech-badge">MATLAB</span>
        <span class="tech-badge">Optimal Control</span>
        <span class="tech-badge">Sliding Mode Control</span>
      </div>
      <div class="project-actions">
        <a href="https://github.com/onurcalisir27/MPC-Project" class="project-btn">📂 GitHub</a>
        <a href="/assets/documents/MPC_Project.pdf" class="project-btn">📄 Report</a>
      </div>
    </div>
  </div>


  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/ik.png" alt="Inverse Kinematics Controller">
      <img src="/assets/images/rrt.png" alt="RRT Path Planning">
      <img src="/assets/images/ekf.png" alt="EKF">
    </div>
    <div class="project-card-content">
      <h3>ROS2 Common Robotics Algorithms</h3>
      <p class="project-card-subtitle">Inverse Kinematics Control - RRT Path Planning - Extended Kalman Filter</p>
      <p>As part of MECS4603 Applied Robotics Algorithms course, three commonly used robotics algorithms were implemented on ROS2.</p>
      <p>First is a Cartesian and Inverse Kinematics Based Controller for a Franka Panda 7 DOF Robotic Manipulator. The interactive rings around the end effector of the robot allows for position control through Jacobian Inverse Control.</p>
      <p>Next is a RRT Based Path planning algorithm for the UR5 Robot Manipulator, which calculates a collision free path for the robot to travel from an initial point to the goal point.
      The last is Extended Kalman Filter for a 2D mobile robot which uses nearby landmark positions for absolute localization.</p>
      <div class="tech-badges">
        <span class="tech-badge">ROS2</span>
        <span class="tech-badge">Python</span>
        <span class="tech-badge">RRT</span>
        <span class="tech-badge">Kalman Filter</span>
      </div>
      <div class="project-actions">
      </div>
    </div>
  </div>

  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/capstone_cad.png" alt="Capstone CAD">
      <img src="/assets/images/capstone_final.png" alt="Capstone Final">
    </div>
    <div class="project-card-content">
      <h3>Automated Pill Dispenser - UCLA Capstone</h3>
      <p class="project-card-subtitle">CAD Design & Manufacturing & Mechatronics</p>
      <p>Designed and prototyped a low-cost, user-friendly automated pill dispenser for elderly users to improve medication adherence. Implemented a triple-latch redundant filtration
            system for precise single-pill dispensing.</p>
      <p>Achieved 95% pill dispensing reliability for varying pill sizes (1mm to 10mm). Delivered a fully functional prototype under a
            $500 budget, incorporating a modular design with a user-friendly Raspberry Pi interface.</p>
      <div class="tech-badges">
        <span class="tech-badge">SolidWorks</span>
        <span class="tech-badge">FDM Printing</span>
        <span class="tech-badge">FEA</span>
        <span class="tech-badge">Arduino</span>
        <span class="tech-badge">Electronics</span>
      </div>
      <div class="project-actions">
        <a href="/assets/documents/capstone_report.pdf" class="project-btn">📄 Report</a>
        <a href="/assets/docs/servo_script.ino" class="project-btn">📊 Script</a>
      </div>
    </div>
  </div>

  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/fft_circuit.png" alt="FFT Circuit">
      <img src="/assets/images/fft_peaks.png" alt="FFT Peaks">
    </div>
    <div class="project-card-content">
      <h3>Sound Driven Password Lock Utilizing FFT</h3>
      <p class="project-card-subtitle">Frequency Domain Analysis and Circuits</p>
      <p>Developed a sound-driven password lock using Fast Fourier Transform (FFT) technology to analyze and match dominant sound frequencies for access control.</p>
      <p>Calibrated the system to identify and store the five most dominant sound frequencies as a password array, incorporating a ±5 Hz tolerance range. Achieved reliable password matching for continuous sound signals with a success rate of 90%, despite limitations in memory resources.</p>
      <div class="tech-badges">
        <span class="tech-badge">Arduino</span>
        <span class="tech-badge">Python</span>
        <span class="tech-badge">FFT</span>
      </div>
      <div class="project-actions">
        <a href="/assets/documents/fft_lock.pdf" class="project-btn">📄 Report</a>
        <a href="/assets/documents/fft_lock.pptx" class="project-btn">📄 Presentation</a>
      </div>
    </div>
  </div>
</div>

  <div class="project-card">
    <div class="project-card-image">
      <img src="/assets/images/solidworks_keychain.jpg" alt="Solidworks Keychain">
      <img src="/assets/images/printed_keychain.jpg" alt="Printed Keychain">
    </div>
    <div class="project-card-content">
      <h3>SLS Printing Demo Keychain - +90 3D Digital Factory</h3>
      <p class="project-card-subtitle">Additive Manufacturing & Rapid Prototyping</p>
      <p>Designed and manufactured a custom keychain in SolidWorks to showcase design capabilities
        and effective use of 3D printing technology, incorporating detailed features such as custom text and geometric design for aesthetic appeal.</p>
      <p>Printed using the Stratasys H350 SAF printer, ensuring precise layer adhesion and structural integrity. Performed smoothing, sanding,
        and polishing to ensure a high-quality finish.</p>
      <div class="tech-badges">
        <span class="tech-badge">SolidWorks</span>
        <span class="tech-badge">SLS Printing</span>
      </div>
    </div>
  </div>

<script>
let currentImageIndex = 1;
const featuredImages = [
  "/assets/images/robot7.png",
  "/assets/images/nav2.png",
  "/assets/images/AutonomousRover_BlockDiagram.png"
];

function showImage(n) {
  const img = document.getElementById('featured-image');
  const dots = document.querySelectorAll('.gallery-dot');

  if (n > featuredImages.length) currentImageIndex = 1;
  if (n < 1) currentImageIndex = featuredImages.length;

  img.src = featuredImages[currentImageIndex - 1];
  img.alt = `Featured Project Image ${currentImageIndex}`;

  dots.forEach(dot => dot.classList.remove('active'));
  if (dots[currentImageIndex - 1]) {
    dots[currentImageIndex - 1].classList.add('active');
  }
}

function nextImage() {
  currentImageIndex++;
  showImage(currentImageIndex);
}

function previousImage() {
  currentImageIndex--;
  showImage(currentImageIndex);
}

function currentImage(n) {
  currentImageIndex = n;
  showImage(currentImageIndex);
}

// Initialize the gallery
document.addEventListener('DOMContentLoaded', function() {
  showImage(1);
});
</script>


