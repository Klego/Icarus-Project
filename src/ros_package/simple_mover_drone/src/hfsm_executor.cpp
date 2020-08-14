// Copyright 2020 Robotech URJC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* Author: Fernando González fergonzaramos@yahoo.es */

#include <ros/ros.h>
#include "simple_mover_drone/HFSM.hpp"

#define HZ 5

int
main(int argc, char **argv)
{
	ros::init(argc, argv, "hfsm_mover_node");

	simple_mover_drone::HFSM hfsm;

	ros::Rate rate(HZ);
	while (ros::ok()) {
		hfsm.step();
		ros::spinOnce();
		rate.sleep();
	}

	return 0;
}
