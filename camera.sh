#!/bin/bash
DATE=$(date +"%y-%m-%d_%H%M")
raspistill -o /home/pi/timelapse/$DATE.jpg

