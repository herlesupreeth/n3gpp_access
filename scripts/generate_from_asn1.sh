#!/bin/bash

# This file is a part of n3gpp_access open source project.
# Copyright (c) 2021 Supreeth Herle.
# 
# The software and all associated files are licensed under GPL-3.0
# and subject to the terms and conditions defined in LICENSE file.

# Install ASN1 Compile from following link https://github.com/mouse07410/asn1c

set -e

usage ()
{
  echo 'Usage : generate_from_asn1.sh -o <output_dir> -i <input_dir> -p <prefix>'
  exit
}

if [ "$#" -ne 6 ]
then
  usage
fi

while [ "$1" != "" ]; do
case $1 in
        -o )           shift
                       OUTPUT_DIR=$1
                       ;;
        -i )           shift
                       INPUT_DIR=$1
                       ;;
        -p )           shift
                       PREFIX=$1
                       ;;
esac
shift
done

if [ "$OUTPUT_DIR" = "" ]
then
    usage
fi
if [ "$INPUT_DIR" = "" ]
then
    usage
fi
if [ "$PREFIX" = "" ]
then
    usage
fi

echo "OUTPUT_DIR=$OUTPUT_DIR"
echo "INPUT_DIR=$INPUT_DIR"
echo "PREFIX=$PREFIX"

export ASN1C_PREFIX=$PREFIX

asn1c \
  -pdu=all \
  -fcompound-names \
  -findirect-choice \
  -fno-include-deps \
  -no-gen-BER \
  -no-gen-XER \
  -no-gen-OER \
  -no-gen-UPER \
  -D $OUTPUT_DIR \
  $INPUT_DIR/*.asn1
