#!/bin/bash

# Stop on the first sign of trouble
set -e

if [ $UID != 0 ]; then
    echo "ERROR: Operation not permitted. Use sudo"
    exit 1
fi

echo "Lepton Thermal Cam installer"

# Install directories and files
VIDEO_DIR="/opt/videos"
if [ ! -d "$VIDEO_DIR" ]; then mkdir $VIDEO_DIR; fi

cp libuvc/libuvc.so /usr/lib
cp libuvc/libuvc.so /usr/local/lib

cd ~

sudo sh -c "echo 'SUBSYSTEMS==\"usb\", ATTRS{idVendor}==\"1e4e\", ATTRS{idProduct}==\"0100\", SYMLINK+=\"pt1\", GROUP=\"usb\", MODE=\"666\"' > /etc/udev/rules.d/99-pt1.rules"

echo "The system will reboot in 5 seconds..."
sleep 5
shutdown -r now
