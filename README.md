Here is the place you should get 'pwd'

docker run -t -d -v $(pwd):/pintos -v /tmp/.X11-unix/:/tmp/.X11-unix -e DISPLAY=$DISPLAY --name pintos_study hangpark/pintos-dev-env-kaist




do `xhost +local:root`
before attach into the container
after you use the container,
do `xhost -local:root`
for security sake
