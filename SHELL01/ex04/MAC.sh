#!/bin/bash

# extracts out MAC addresses of a system
ifconfig | grep ether | sed 's/.*ether//g' | cut -d" " -f1
