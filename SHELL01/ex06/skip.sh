#!/bin/env bash

# skips every even-numbered lines from the command "ls -l"
ls -l | sed -n '1~2p'
