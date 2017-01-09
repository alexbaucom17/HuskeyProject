#!/usr/bin/env python
import os

cfgname = "talkerlistener.cfg"
os.chdir("/opt/rframe/bin")
cmd = "./rframe --config " + cfgname
os.system(cmd)