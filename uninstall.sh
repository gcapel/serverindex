#!/bin/bash
#programma dis-installazione serverindex

sudo rm /usr/bin/serverindex
sudo rm /opt/serverindex/serverindex.conf.css
sudo rmdir /opt/serverindex
echo "dis-istallazione terminata"
