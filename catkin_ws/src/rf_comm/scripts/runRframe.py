#!/usr/bin/env python
import os

cfgname = "talker.cfg"
os.chdir("/opt/rframe/bin")
cmd = "./rframe --config " + cfgname
os.system(cmd)
