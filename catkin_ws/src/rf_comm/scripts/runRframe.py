#!/usr/bin/env python
import os

cfgname = "huskyInterface.cfg"
os.chdir("/opt/rframe/bin")
cmd = "./rframe_wmgui --config " + cfgname
os.system(cmd)
