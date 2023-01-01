# vision_msgs_rviz_plugins

This repo contains a RVIZ2 plugin to display [vision_msgs](https://github.com/ros-perception/vision_msgs/tree/ros2) for ROS 2 humble.

- [x] Detection3DArray
  - [x] Display ObjectHypothesisWithPose/score
  - [x] Change color based on ObjectHypothesisWithPose/id [car: orange, person: blue, cyclist: yellow, motorcycle: purple, other: grey]
  - [x] Visualization propperties
    - [x] Alpha
    - [x] Line or Box
    - [x] Linewidth
- [x] Detection3D
  - [x] Display ObjectHypothesisWithPose/score
  - [x] Change color based on ObjectHypothesisWithPose/id [car: orange, person: blue, cyclist: yellow, motorcycle: purple, other: grey]
  - [x] Visualization propperties
    - [x] Alpha
    - [x] Line or Box
    - [x] Linewidth
- [ ] BoundingBox2DArray
- [ ] BoundingBox2D

![Bounding Box Array](assets/BBoxArray.gif)

## Install and Testing

__Install:__
```bash
$ cd ros2_ws/src && git clone https://github.com/NovoG93/vision_msgs_rviz_plugins -b humble
$ cd ros2_ws && rosdep install --from src --ignore-src -r -y \
  && colcon build --symlink-install --packages-select vision_msgs_rviz_plugins
```

__Testing:__
```bash
$ cd ros2_ws/src/vision_msgs_rviz_plugins/conf && rviz2 -d conf.rviz
$ ros2 run vision_msgs_rviz_plugins Detection3DArray.py
$ ros2 run vision_msgs_rviz_plugins Detection3D.py
```