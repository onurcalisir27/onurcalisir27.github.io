---
layout: page
title: Projects
permalink: /projects/
class: projects-page
---

<div class="projects-hero">
  <h1>My Projects</h1>
  <p>Portfolio of projects I have worked on during my education and professional experience. My work combines mechanical design, software development and systems engineering.</p>
</div>

<!-- Featured Project -->
<div class="featured-project">
  <div class="featured-content">
    <div class="featured-image">
      <div class="image-gallery">
        <img src="/assets/images/robot-main.jpg" alt="Autonomous Robot - Main View" id="featured-image">
        <button class="gallery-nav prev" onclick="previousImage()">&larr;</button>
        <button class="gallery-nav next" onclick="nextImage()">&rarr;</button>
        <div class="gallery-dots">
          <span class="gallery-dot active" onclick="currentImage(1)"></span>
          <span class="gallery-dot" onclick="currentImage(2)"></span>
          <span class="gallery-dot" onclick="currentImage(3)"></span>
        </div>
      </div>
    </div>

    <div class="featured-details">
      <h2 class="project-title">Autonomous Navigation Rover</h2>
      <p class="project-subtitle">Learning-Based Control & Computer Vision</p>

      <div class="project-description">
        <p>A comprehensive robotics project that combines mechanical design, computer vision, and adaptive control systems. This autonomous rover demonstrates end-to-end robotics development, from CAD design and hardware integration to ROS-based software architecture and machine learning algorithms.</p>

        <p>The robot uses a combination of LiDAR, cameras, and IMU sensors for localization and mapping, while implementing learning-based controllers that adapt to different terrain conditions. The project showcases the full robotics pipeline: perception, planning, control, and execution.</p>

        <p><strong>Key Achievements:</strong> Successfully navigates complex indoor environments, implements SLAM for real-time mapping, and demonstrates adaptive behavior in various terrain conditions.</p>
      </div>

      <div class="tech-stack">
        <h4>Technologies Used:</h4>
        <div class="tech-badges">
          <span class="tech-badge">ROS2</span>
          <span class="tech-badge">Python</span>
          <span class="tech-badge">C++</span>
          <span class="tech-badge">OpenCV</span>
          <span class="tech-badge">PyTorch</span>
          <span class="tech-badge">SolidWorks</span>
          <span class="tech-badge">Gazebo</span>
          <span class="tech-badge">Linux</span>
        </div>
      </div>

      <div class="project-actions">
        <a href="https://github.com/onurcalisir27/LearningAdaptive" class="project-btn">
          📂 GitHub Repository
        </a>
        <a href="/assets/docs/rover-documentation.pdf" class="project-btn secondary">
          📄 Technical Documentation
        </a>
        <a href="https://youtube.com/watch?v=demo" class="project-btn secondary">
          🎥 Demo Video
        </a>
      </div>
    </div>
  </div>
</div>

<!-- Secondary Projects Grid -->
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
      <img src="/assets/images/robot3.jpg" alt="Top View">
    </div>
    <div class="project-card-content">
      <h3>MPC-ISM Controller for 3 DOF Robot Manipulator</h3>
      <p class="project-card-subtitle">Model Predictive and Sliding Mode Controllers on MATLAB</p>
      <p>A flexible C++ library designed as a ROS2 Control hardware interface plugin for differential drive mobile robots, offering hardware abstraction for and a clean interface. DiffDrivePi features implementations of arbitrary DC motor control through H-bridge setups, thread free velocity calculation from quadrature encoders, and PID velocity control .</p>
      <p>The library features the AutonomousRover plugin implementation with comprehensive configurability for diverse robotic applications using Raspberry Pi4. The library is built using the Pigpio library, and a script is included to install pigpio alongside the source code.</p>
      <div class="tech-badges">
        <span class="tech-badge">ROS2</span>
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
      <img src="/assets/images/ik.png" alt="Inverse Kinematics Controller">
      <img src="/assets/images/rrt.png" alt="RRT Path Planning">
      <img src="/assets/images/ekf.png" alt="EKF">
    </div>
    <div class="project-card-content">
      <h3>ROS2 Common Robotics Algorithms</h3>
      <p class="project-card-subtitle">Inverse Kinematics Control - RRT Path Planning - Extended Kalman Filter</p>
      <p>A flexible C++ library designed as a ROS2 Control hardware interface plugin for differential drive mobile robots, offering hardware abstraction for and a clean interface. DiffDrivePi features implementations of arbitrary DC motor control through H-bridge setups, thread free velocity calculation from quadrature encoders, and PID velocity control .</p>
      <p>The library features the AutonomousRover plugin implementation with comprehensive configurability for diverse robotic applications using Raspberry Pi4. The library is built using the Pigpio library, and a script is included to install pigpio alongside the source code.</p>
      <div class="tech-badges">
        <span class="tech-badge">ROS2</span>
        <span class="tech-badge">Python</span>
        <span class="tech-badge">MoveIt2</span>
        <span class="tech-badge">Probabilistic Robotics</span>
      </div>
      <div class="project-actions">
        <a href="https://github.com/onurcalisir27/DiffDrivePi" class="project-btn">📂 GitHub</a>
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


<!-- Simple JavaScript for image gallery -->
<script>
let currentImageIndex = 1;
const images = [
  "/assets/images/robot-main.jpg",
  "/assets/images/robot-side.jpg",
  "/assets/images/robot-action.jpg"
];

function showImage(n) {
  const img = document.getElementById('featured-image');
  const dots = document.querySelectorAll('.gallery-dot');

  if (n > images.length) currentImageIndex = 1;
  if (n < 1) currentImageIndex = images.length;

  img.src = images[currentImageIndex - 1];

  dots.forEach(dot => dot.classList.remove('active'));
  dots[currentImageIndex - 1].classList.add('active');
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
</script>

