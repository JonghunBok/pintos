#!/bin/bash

docker run \
  -dit \
  -v $(pwd):/pintos \
  -v /tmp/.X11-unix/:/tmp/.X11-unix/ \
  -e DISPLAY=$DISPLAY \
  --name $1 \
  hangpark/pintos-dev-env-kaist

xhost +local:"docker container ls -f name=$1 -q"

